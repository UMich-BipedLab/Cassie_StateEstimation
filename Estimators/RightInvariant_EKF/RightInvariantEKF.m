% State Estimator
classdef RightInvariantEKF < matlab.System & matlab.system.mixin.Propagates %#codegen
    
    %% Properties ==================================================
    
    % PUBLIC PROPERTIES
    properties
        % Enable Static Bias Initialization
        static_bias_initialization = true;
        % Enable Measurement Updates
        ekf_update_enabled = true;
        % Gyroscope Noise std
        gyro_noise_std = 0.1*ones(3,1);
        % Gyroscope Bias Noise std
        gyro_bias_noise_std = 0.1*ones(3,1);
        % Accelerometer Noise std
        accel_noise_std = 0.1*ones(3,1);
        % Accelerometer Bias Noise std
        accel_bias_noise_std = 0.1*ones(3,1);
        % Contact Noise std
        contact_noise_std = 0.1*ones(3,1);
        % Encoder Noise std
        encoder_noise_std = 0.1*ones(14,1);
        % Gyroscope Bias Initial Condition 
        gyro_bias_init = zeros(3,1);
        % Accelerometer Bias Initial Condition
        accel_bias_init = zeros(3,1);
        % Prior Base Pose std
        prior_base_pose_std = 0.1*ones(6,1);
        % Prior Base Velocity std
        prior_base_velocity_std = 0.1*ones(3,1);
        % Prior Contact position std
        prior_contact_position_std = 0.1*ones(3,1);
        % Prior Gyroscope Bias std
        prior_gyro_bias_std = 0.1*ones(3,1);
        % Prior Accelerometer Bias std
        prior_accel_bias_std = 0.1*ones(3,1);
        % Prior Forward Kinematics std
        prior_forward_kinematics_std = 0.1*ones(3,1);
    end
    
    % PROTECTED PROPERTIES 
    properties (Access = protected)
    end 
    
    % PRIVATE PROPERTIES
    properties(Access = private)
        X;                  % State Lie Group
        theta;              % Extra state parameters
        P;                  % Covariance of combined state
        filter_enabled;     % Flag that specifies if the filter is enabled
        bias_initialized;   % Flag that specifies if the IMU bias is initialized
        bg0 = zeros(3,1);   % Initial gyroscope bias
        ba0 = zeros(3,1);   % Initial accelerometer bias
        w_init_vec;         % Vector of gyroscope measurements to aid initialization
        a_init_vec;         % Vector of accelerometer measurements to aid initialization
        imu_init_count = 1; % Counter to determine how much IMU data has been collected for static initialization
        w_prev;             % Previous gyroscope measurement
        a_prev;             % Previous accelerometer measurement
        encoders_prev;      % Previous encoder measurement
        contact_prev;       % Previous contact measurement
        t_prev;             % Previous timestamp
        
        % --- Sensor Covariances ---
        Qg;      % Gyro Covariance Matrix
        Qbg;     % Gyro bias Covariance Matrix
        Qa;      % Accel Covariance Matrix
        Qba;     % Accel Bias Covariance Matrix
        Qc;      % Contact Covariance Matrix
        Qe;      % Encoder Covariance Matrix
        Np;      % Prior Forward Kinematics Covariance Matrix
        P_prior; % Prior State Covariance Matrix
    end
    
    % PRIVATE CONSTANTS
    properties(Access = private, Constant)
        g = [0;0;-9.81];             % Gravity vector
        imu_init_total_count = 1000; % Number of IMU samples collected for static bias initialization
    end
    
    %% PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
            obj.filter_enabled = false;
            obj.bias_initialized = false;
            obj.a_init_vec = zeros(3, obj.imu_init_total_count);
            obj.w_init_vec = zeros(3, obj.imu_init_total_count);
            
            % Initialize Sensor Covariances
            obj.Qg = diag(obj.gyro_noise_std.^2);          % Gyro Covariance Matrix
            obj.Qbg = diag(obj.gyro_bias_noise_std.^2);    % Gyro bias Covariance Matrix
            obj.Qa = diag(obj.accel_noise_std.^2);         % Accel Covariance Matrix
            obj.Qba = diag(obj.accel_bias_noise_std.^2);   % Accel Bias Covariance Matrix
            obj.Qc = diag(obj.contact_noise_std.^2);       % Contact Covariance Matrix
            obj.Qe = diag(obj.encoder_noise_std.^2);       % Encoder Covariance Matrix
            obj.Np = diag(obj.prior_forward_kinematics_std.^2); % Prior Forward Kinematics Covariance Matrix
            obj.P_prior = blkdiag(diag(obj.prior_base_pose_std(1:3).^2), ...
                                  diag(obj.prior_base_velocity_std.^2), ...
                                  diag(obj.prior_base_pose_std(4:6).^2), ...
                                  diag(obj.prior_contact_position_std.^2), ...
                                  diag(obj.prior_contact_position_std.^2), ...
                                  diag(obj.prior_gyro_bias_std.^2),...
                                  diag(obj.prior_accel_bias_std.^2)); % Prior State Covariance Matrix
                                         
            % Initialize bias estimates
            obj.bg0 = obj.gyro_bias_init;
            obj.ba0 = obj.accel_bias_init;
            
            % Initialze State and Covariance
            obj.X = eye(7);
            obj.theta = zeros(6,1);
            obj.P = eye(21);
            
            % Variables to store previous measurements
            obj.w_prev = zeros(3,1);
            obj.a_prev = zeros(3,1);
            obj.encoders_prev = zeros(14,1);
            obj.contact_prev = zeros(2,1);
            obj.t_prev = 0;
                        
        end % setupImpl
        
        function [X, theta, P, enabled] = stepImpl(obj, enable, t, w, a, encoders, contact, X_init)
            % Right-Invariant EKF that creates an estimated state from sensor readings.
            %
            %   Inputs:
            %       enable    - flag to enable/disable the filter
            %       t         - time
            %       w         - angular velocity, {I}_w_{WI}
            %       a         - linear acceleration, {I}_a_{WI}
            %       encoders  - joint encoder positions
            %       contact   - contact indicator
            %       X_init    - initial state
            %
            %   Outputs:
            %       X       - current state estimate
            %       theta   - current parameter estimates
            %       P       - current covariance estimate 
            %       enabled - flag indicating when the filter is enabled
            %
            %   Author: Ross Hartley
            %   Date:   6/28/2018
            %
            
            % Return if any input nan values are detected
            if (any(isnan(w)) || any(isnan(a)) || any(isnan(encoders)) || any(isnan(contact)) || any(any(isnan(X_init))))
                X = eye(7);
                X(1:3,:) = [eye(3), [1;2;3], [4;5;6], [7;8;9], [10;11;12]];
                theta = obj.theta;
                P = obj.P;
                enabled = double(obj.filter_enabled);
                return
            end
            

            
            % Initialize bias
            % (does nothing if bias is already initialized)
            obj.InitializeBias(w, a, X_init)
            
            % Initiaze filter
            % (does nothing if filter is already initialized)
            if t > 0.1 
                obj.InitializeFilter(enable, X_init, contact);
            end
            
            % Only run if filter is enabled
            if obj.filter_enabled
           
                % Predict state using IMU and contact measurements     
                obj.Predict_State(obj.w_prev, obj.a_prev, obj.encoders_prev, obj.contact_prev, t - obj.t_prev);
                
                % Update state using forward kinematic measurements
                if obj.ekf_update_enabled
                    obj.Update_ForwardKinematics(encoders, contact);
                end
            
            end
            
            % Store last values
            obj.w_prev = w;
            obj.a_prev = a;
            obj.encoders_prev = encoders;
            obj.contact_prev = contact;
            obj.t_prev = t;
            
            % Output
            X = obj.X;
            theta = obj.theta;
            P = obj.P;
            enabled = double(obj.filter_enabled);
            
            % Return if any output nan values are detected
            if (any(any(isnan(X))) || any(isnan(theta)) || any(any(isnan(P))))
                X = eye(7);
                X(1:3,:) = [eye(3), [2;4;6], [8;10;12], [14;16;18], [20;22;24]];
                theta = [1;2;3;4;5;6];
                P = eye(21);
                enabled = double(obj.filter_enabled);
                return
            end

        end % stepImpl

        % Define Outputs =====================================================
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [X, theta, P, enabled] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            X = [7, 7];
            theta = [6,1];
            P = [21, 21];
            enabled = [1, 1];
        end % getOutputSizeImpl
        
        function [X, theta, P, enabled] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            X = 'double';
            theta = 'double';
            P = 'double';
            enabled = 'double';
        end % getOutputDataTypeImpl
        
        function [X, theta, P, enabled] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            X = false;
            theta = false;
            P = false;
            enabled = false;
        end % isOutputComplexImpl
        
        function [X, theta, P, enabled] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variale-size output ports.
            X = true;
            theta = true;
            P = true;
            enabled = true;
        end % isOutputFixedSizeImpl
        
    end
        
    %% PRIVATE METHODS =====================================================
    methods (Access = private)

        function [R, v, p, dR, dL, bg, ba] = Separate_State(~, X, theta)
            % Separate state vector into components
            R = X(1:3,1:3);  % Orientation
            v = X(1:3,4);    % Base Velocity
            p = X(1:3,5);    % Base Position
            dR = X(1:3,6);   % Right Foot Position
            dL = X(1:3,7);   % Left Foot Position
            
            % Parameters
            bg = theta(1:3); % Gyroscope Bias
            ba = theta(4:6); % Accelerometer Bias
        end
        
        function [X, theta] = Construct_State(~, R, v, p, dR, dL, bg, ba)
            % Construct matrix from separate states
            X = [R, v, p, dR, dL; 0,0,0,1,0,0,0; 0,0,0,0,1,0,0; 0,0,0,0,0,1,0; 0,0,0,0,0,0,1];
            % Parameters
            theta = [bg; ba];
        end
        
        function [A] = skew(~, v)
            % Convert from vector to skew symmetric matrix
            A = [    0, -v(3),  v(2);
                  v(3),     0, -v(1);
                  -v(2),  v(1),   0];
        end

        function [dX] = exp(obj, v)
            % Exponential map of SE_N(3)
            A = obj.skew(v(1:3));
            phi = norm(v(1:3));
            if phi < 1e-6
                R = eye(3);
                Jr = eye(3);
            else
                R = eye(3) + (sin(phi)/phi)*A + ((1-cos(phi))/(phi^2))*A^2;
                Jr = eye(3) + ((1-cos(phi))/(phi^2))*A + ((phi-sin(phi))/(phi^3))*A*A;
            end
            % Construct group
            dX = eye(7);
            dX(1:3,:) = [R, Jr*v(4:6), Jr*v(7:9), Jr*v(10:12), Jr*v(13:15)];
        end
        
        function [R] = exp_SO3(obj, w)
            % Exponential map of SO(3)
            A = obj.skew(w(1:3));
            phi = norm(w(1:3));
            if phi < 1e-6
                R = eye(3);
            else
                R = eye(3) + (sin(phi)/phi)*A + ((1-cos(phi))/(phi^2))*A^2;
            end
        end

        function AdjX = Adjoint(obj, X)
            % Adjoint of SE_N(3)         
            [R, v, p, dR, dL, ~, ~] = obj.Separate_State(X, zeros(6,1));
            AdjX = [             R, zeros(3), zeros(3), zeros(3), zeros(3);
                     obj.skew(v)*R,        R, zeros(3), zeros(3), zeros(3);
                     obj.skew(p)*R, zeros(3),        R, zeros(3), zeros(3);
                    obj.skew(dR)*R, zeros(3), zeros(3),        R, zeros(3);
                    obj.skew(dL)*R, zeros(3), zeros(3), zeros(3),        R];
        end      
        
        
        function [] = InitializeBias(obj, w, a, X_init)
            % Function to initiaze IMU bias
            if obj.static_bias_initialization
                if ~obj.bias_initialized
                    if norm(a) > 0 && norm(w) > 0 % Wait for valid signal
                        if obj.imu_init_count <= obj.imu_init_total_count
                            % Accumulate vector of imu data
                            Rwi = X_init(1:3,1:3);
                            obj.a_init_vec(:,obj.imu_init_count) = Rwi'*(Rwi*a + obj.g);
                            obj.w_init_vec(:,obj.imu_init_count) = w;
                            obj.imu_init_count = obj.imu_init_count + 1;
                        else
                            % Use imu data vector to estimate initial biases
                            obj.ba0 = mean(obj.a_init_vec,2);
                            obj.bg0 = mean(obj.w_init_vec,2);
                            obj.bias_initialized = true;
                        end
                    end
                end
            else
                obj.bias_initialized = true;
            end
        end
        
        function [] = InitializeFilter(obj, enable, X_init, contact)
            % Attempt to enable filter (successful if enable is true, and
            % at least one foot is on the ground)
            if enable && ~obj.filter_enabled && any(contact == 1) 
                obj.X = X_init; 
                obj.theta = [obj.bg0; obj.ba0];
                obj.P = obj.P_prior;
                obj.filter_enabled = true;
            end

            % If enable is disabled, zero everything
            if ~enable
                obj.X = eye(7);
                obj.theta = zeros(6,1);
                obj.P = eye(21);
                obj.filter_enabled = false;
            end
            
        end
        
        function [] = Predict_State(obj, w, a, encoders, contact, dt)
            % Right-Invariant Extended Kalman Filter Prediction Step     
            [R, v, p, dR, dL, bg, ba] = obj.Separate_State(obj.X, obj.theta);
            
            % Bias corrected IMU information
            w_k = w - bg;    % {I}_w_{WI}
            a_k = a - ba;    % {I}_a_{WI}
            
            % Base Pose Dynamics
            R_pred = R * obj.exp_SO3(w_k*dt);
            v_pred = v + (R*a_k + obj.g)*dt;
            p_pred = p + v*dt + 0.5*(R*a_k + obj.g)*dt^2;
            
            % Foot Position Dynamics
            dR_off = p_pred + R_pred * p_VectorNav_to_RightToeBottom(encoders); % {W}_p_{WR}
            dL_off = p_pred + R_pred * p_VectorNav_to_LeftToeBottom(encoders);  % {W}_p_{WL}
            dR_pred = contact(2)*dR + (1-contact(2))*dR_off;
            dL_pred = contact(1)*dL + (1-contact(1))*dL_off;
           
            % Bias Dynamics
            bg_pred = bg; 
            ba_pred = ba;
                        
            
            % -- Linearized invariant error dynamics --
            
            % Base pose, velocity, and contact
            A = [       zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                 obj.skew(obj.g), zeros(3), zeros(3), zeros(3), zeros(3);
                        zeros(3),   eye(3), zeros(3), zeros(3), zeros(3);
                        zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                        zeros(3), zeros(3), zeros(3), zeros(3), zeros(3)]; 
           
           % IMU biases
           A = blkdiag(A, zeros(6));               
           A(1:15,end-5:end) = [             -R, zeros(3);
                                  -obj.skew(v)*R,       -R;
                                  -obj.skew(p)*R, zeros(3);
                                 -obj.skew(dR)*R, zeros(3);
                                 -obj.skew(dL)*R, zeros(3)];
                                        
            % Discretization
            Phi = eye(size(A)) + A*dt; % Fast approximation of exp(A*dt)
            Adj = blkdiag(obj.Adjoint(obj.X), eye(6));
            hR_R = R_VectorNav_to_RightToeBottom(encoders);
            hR_L = R_VectorNav_to_LeftToeBottom(encoders);
            Qk = blkdiag(obj.Qg, obj.Qa, zeros(3), hR_R*(obj.Qc+(1e4*eye(3).*(1-contact(2))))*hR_R', hR_L*(obj.Qc+(1e4*eye(3).*(1-contact(1))))*hR_L', obj.Qbg, obj.Qba);             
            Qk_hat = Phi * Adj * Qk * Adj' * Phi' * dt; % Approximated discretized noise matrix 
            
            % Construct predicted state
            [obj.X, obj.theta] = obj.Construct_State(R_pred, v_pred, p_pred, dR_pred, dL_pred, bg_pred, ba_pred);
            
            % Predict Covariance
            obj.P = Phi * obj.P * Phi' + Qk_hat;
        end
        
        function [] = Update_State(obj, Y, b, H, N, PI)
            % Update State and Covariance from a measurement
            % Compute Kalman Gain
            S = H * obj.P * H' + N;
            K = (obj.P * H')/S;
            
            % Compute measurement update
            Ydim = length(Y)/7;
            BigX = zeros(7*Ydim);
            for i=1:Ydim
                BigX(7*(i-1)+1:7*i,7*(i-1)+1:7*i) = obj.X;
            end
            Z = BigX * Y - b;
            
            % Update State
            delta = K*PI*Z;
            dX = obj.exp(delta(1:end-6));
            dtheta = delta(end-5:end);
            obj.X = dX * obj.X;
            obj.theta = obj.theta + dtheta;
            
            % Update Covariance
            IKH = (eye(21) - K*H);
            obj.P = IKH * obj.P * IKH' + K*N*K'; % Joseph update form
            
        end
        
        
        function [] = Update_ForwardKinematics(obj, encoders, contact)
            % Function to perform Right-Invariant EKF update from forward
            % kinematic measurements
            R_pred = obj.X(1:3,1:3);
            
            if contact(2) == 1 && contact(1) == 1 
                % Double Support
                s_pR = p_VectorNav_to_RightToeBottom(encoders);
                s_pL = p_VectorNav_to_LeftToeBottom(encoders);
                JR = Jp_VectorNav_to_RightToeBottom(encoders);
                JL = Jp_VectorNav_to_LeftToeBottom(encoders);
                
                % Measurement Model
                Y = [s_pR; 0; 1; -1; 0; 
                     s_pL; 0; 1; 0; -1];
                b = zeros(size(Y));
                H = [zeros(3), zeros(3), -eye(3), eye(3), zeros(3), zeros(3,6);
                     zeros(3), zeros(3), -eye(3), zeros(3), eye(3), zeros(3,6)];
                N = blkdiag(R_pred * JR * obj.Qe * JR' * R_pred' + obj.Np, ...
                            R_pred * JL * obj.Qe * JL' * R_pred' + obj.Np);  
                PI = [eye(3), zeros(3,4), zeros(3,7);
                     zeros(3,7), eye(3), zeros(3,4)];

                % Update State
                obj.Update_State(Y, b, H, N, PI);
                        
            elseif contact(2) == 1 
                % Single Support Right    
                s_pR = p_VectorNav_to_RightToeBottom(encoders);
                JR = Jp_VectorNav_to_RightToeBottom(encoders);
                
                % Measurement Model
                Y = [s_pR; 0; 1; -1; 0];
                b = zeros(size(Y));
                H = [zeros(3), zeros(3), -eye(3), eye(3), zeros(3), zeros(3,6)];
                N = R_pred * JR * obj.Qe * JR' * R_pred' + obj.Np;
                PI = [eye(3), zeros(3,4)];

                % Update State
                obj.Update_State(Y, b, H, N, PI);
                
            elseif contact(1) == 1 
                % Single Support Left
                s_pL = p_VectorNav_to_LeftToeBottom(encoders);
                JL = Jp_VectorNav_to_LeftToeBottom(encoders);

                % Measurement Model
                Y = [s_pL; 0; 1; 0; -1];
                b = zeros(size(Y));
                H = [zeros(3), zeros(3), -eye(3), zeros(3), eye(3), zeros(3,6)];
                N = R_pred * JL * obj.Qe * JL' * R_pred' + obj.Np;
                PI = [eye(3), zeros(3,4)];

                % Update State
                obj.Update_State(Y, b, H, N, PI);
                
            end
            
        end

    end % methods
end % classdef


