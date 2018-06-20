% State Estimator
classdef RIEKF_landmarks < matlab.System & matlab.system.mixin.Propagates %#codegen
    
    %% Properties ==================================================
    
    % PUBLIC PROPERTIES
    properties
        % Enable Static Bias Initialization
        static_bias_initialization = true;
        % Enable Measurement Updates
        ekf_update_enabled = true;
        % Enable Bias Estimation
        enable_bias_estimation = true;
        % Enable Static Landmarks
        enable_static_landmarks = false;
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
        % Landmark Noise std
        landmark_noise_std = 0.1*ones(3,1);
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
        % Static Landmark Positions
        landmark_positions = [0;0;0];
    end
    
    % PROTECTED PROPERTIES 
    properties (Access = protected)
        params
    end 
    
    % PRIVATE PROPERTIES
    properties(Access = private)
        X;
        landmarks;
        theta;
        P;
        Pxx;
        Pll;
        Pxl;
        Ptt;
        Pxt;
        Plt;
        filter_enabled;
        bias_initialized;
        ba0 = zeros(3,1);
        bg0 = zeros(3,1);
        a_init_vec;
        w_init_vec;
        imu_init_count = 1;
        w_prev;
        a_prev;
        encoders_prev;
        contact_prev;
        t_prev;
        landmark_ids;
        num_landmarks;
        
        % Sensor Covariances
        Qg;    % Gyro Covariance Matrix
        Qbg;   % Gyro bias Covariance Matrix
        Qa;    % Accel Covariance Matrix
        Qba;   % Accel Bias Covariance Matrix
        Qc;    % Contact Covariance Matrix
        Qe;    % Encoder Covariance Matrix
        Ql;    % Landmark Distance Covariance Matrix
        Np;    % Prior Forward Kinematics Covariance Matrix
        P_prior;
        
    end
    
    % PRIVATE CONSTANTS
    properties(Access = private, Constant)
        % EKF Noise Parameters
        g = [0;0;-9.81]; % Gravity
        imu_init_total_count = 1000;
        max_landmarks = 10;
        Eye = eye(100,100); % Pre-allocated Identity matrix (useful for codegen)
        Zeros = zeros(100,100); % Pre-allocated matrix of zeros (useful for codegen)
    end
    
    %% PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
            obj.params = CassieParameters;
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
            obj.Ql = diag(obj.landmark_noise_std.^2);      % Landmark Covariance Matrix
            obj.Np = diag(obj.prior_forward_kinematics_std.^2); % Prior Forward Kinematics Covariance Matrix
            obj.P_prior = blkdiag(diag(obj.prior_base_pose_std(1:3).^2), ...
                                  diag(obj.prior_base_velocity_std.^2), ...
                                  diag(obj.prior_base_pose_std(4:6).^2), ...
                                  diag(obj.prior_contact_position_std.^2), ...
                                  diag(obj.prior_contact_position_std.^2), ...
                                  diag(obj.prior_gyro_bias_std.^2),...
                                  diag(obj.prior_accel_bias_std.^2));
                                         
            % Initialize bias estimates
            obj.bg0 = obj.gyro_bias_init;
            obj.ba0 = obj.accel_bias_init;
            
            % Initialze State and Covariance
            obj.X = eye(7);
            obj.landmarks = zeros(3,obj.max_landmarks);
            obj.theta = zeros(6,1);
            obj.P = eye(21);
            obj.Pxx = eye(15,15);
            obj.Pll = eye(3*obj.max_landmarks,3*obj.max_landmarks);
            obj.Pxl = eye(15,3*obj.max_landmarks);
            obj.Ptt = eye(6,6);
            obj.Pxt = eye(15,6);
            obj.Plt = eye(3*obj.max_landmarks,6);
            
            % Variables to store previous measurements
            obj.w_prev = zeros(3,1);
            obj.a_prev = zeros(3,1);
            obj.encoders_prev = zeros(14,1);
            obj.contact_prev = zeros(2,1);
            obj.t_prev = 0;
            
            % Landmark 
            obj.landmark_ids = zeros(1,obj.max_landmarks); % Cannot be empty due to codegen
            obj.num_landmarks = 0; 
            
        end % setupImpl
        
        function [X, theta, P, enabled, landmarks_with_ids] = stepImpl(obj, enable, t, w, a, encoders, contact, measured_landmarks, X_init)
            % Function that creates a state vector from sensor readings.
            %
            %   Inputs:
            %       enable    - flag to enable/disable the filter
            %       t         - time
            %       w         - angular velocity, {I}_w_{WI}
            %       a         - linear acceleration, {I}_a_{WI}
            %       encoders  - joint encoder positions
            %       contact   - contact indicator
            %       measured_landmarks - vector of landmark IDs along with distance
            %       X_init    - initial state
            %
            %   Outputs:
            %       X       - current state estimate
            %       theta   - current parameter estimates
            %       P       - current covariance estimate 
            %       enabled - flag indicating when the filter is enabled
            %
            %   Author: Ross Hartley
            %   Date:   1/19/2018
            %
            
            % Initialize bias
            % (does nothing if bias is already initialized)
            obj.InitializeBias(w, a, X_init)
            
            % Initiaze filter
            % (does nothing if filter is already initialized)
            if t > 0.01 && any(contact == 1) 
                obj.InitializeFilter(enable, X_init);
            end
            
            % Only run if filter is enabled
            if obj.filter_enabled
           
                % Predict state using IMU and contact measurements     
                obj.Predict_State(obj.w_prev, obj.a_prev, obj.encoders_prev, obj.contact_prev, t - obj.t_prev);

                % Update using other measurements
                if obj.ekf_update_enabled
                    % Update state using forward kinematic measurements
                    obj.Update_ForwardKinematics(encoders, contact);
                    % Update state using landmark position measurements
                    if ~all(all(isnan(measured_landmarks))) %~isempty(measured_landmarks)
                        if obj.enable_static_landmarks
                            obj.Update_StaticLandmarks(measured_landmarks);
                        else
                            obj.Update_Landmarks(measured_landmarks);
                        end
                    end
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
            Pa = obj.Augmented_Covariance();
            P = Pa(1:21,1:21);
            enabled = double(obj.filter_enabled);
            landmarks_with_ids = [obj.landmark_ids; obj.landmarks];

        end % stepImpl

        % Define Outputs =====================================================
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [X, theta, P, enabled, landmarks_with_ids] = getOutputSizeImpl(obj)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            X = [7, 7];
            theta = [6,1];
            P = [21, 21];
            enabled = [1, 1];
            landmarks_with_ids = [4, obj.max_landmarks];
        end % getOutputSizeImpl
        
        function [X, theta, P, enabled, landmarks_with_ids] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            X = 'double';
            theta = 'double';
            P = 'double';
            enabled = 'double';
            landmarks_with_ids = 'double';
        end % getOutputDataTypeImpl
        
        function [X, theta, P, enabled, landmarks_with_ids] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            X = false;
            theta = false;
            P = false;
            enabled = false;
            landmarks_with_ids = false;
        end % isOutputComplexImpl
        
        function [X, theta, P, enabled, landmarks_with_ids] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variale-size output ports.
            X = true;
            theta = true;
            P = true;
            enabled = true;
            landmarks_with_ids = true;
        end % isOutputFixedSizeImpl
        
    end
        
    %% PRIVATE METHODS =====================================================
    methods (Access = private)
        
        function [] = Store_Covariance(obj, Pa)
            % Separate covariance into state, landmark, and parameter parts
            assert(size(Pa,2) == 21 + 3*obj.num_landmarks);            
            obj.Pxx = Pa(1:15, 1:15);
            obj.Pll(1:3*obj.num_landmarks, 1:3*obj.num_landmarks) = Pa(16:16+3*obj.num_landmarks-1, 16:16+3*obj.num_landmarks-1);
            obj.Pxl(1:15, 1:3*obj.num_landmarks) = Pa(1:15, 16:16+3*obj.num_landmarks-1);
            obj.Ptt = Pa(end-5:end, end-5:end);
            obj.Pxt = Pa(1:15, end-5:end);
            obj.Plt(1:3*obj.num_landmarks,:) = Pa(16:16+3*obj.num_landmarks-1, end-5:end);
        end
        
        function Pa = Augmented_Covariance(obj) 
            % Augmented covariance matrix
            Pa = [obj.Pxx, obj.Pxl(1:15, 1:3*obj.num_landmarks), obj.Pxt;
                  obj.Pxl(1:15, 1:3*obj.num_landmarks)', obj.Pll(1:3*obj.num_landmarks, 1:3*obj.num_landmarks), obj.Plt(1:3*obj.num_landmarks,:);
                  obj.Pxt', obj.Plt(1:3*obj.num_landmarks,:)', obj.Ptt];
        end
        
        function Xa = Augmented_State(obj)
            % Augmented state matrix
            Xa = [obj.X, [obj.landmarks(:, 1:obj.num_landmarks); obj.Zeros(1:4,1:obj.num_landmarks)]; obj.Zeros(1:obj.num_landmarks,1:7), obj.Eye(1:obj.num_landmarks,1:obj.num_landmarks)];
        end
        
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
        
        function [dX, dtheta] = exp(obj, v)
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
            u = reshape(v(4:end),3,[]);
            
            dX = eye(3 + size(u,2));
            dX(1:3,1:3) = R;
            dX(1:3,4:end) = Jr*u;
            
            dtheta = v(end-5:end);
        end
        
        function AdjX = Adjoint(obj, X)
            % Adjoint of SE_N(3)         
            N = size(X,2)-3;
            R = X(1:3,1:3);
            AdjX = zeros(3*(N+1));
            AdjX(1:3,1:3) = R;
            for i = 1:N
                AdjX(3*i+1:3*i+3,3*i+1:3*i+3) = R;
                AdjX(3*i+1:3*i+3,1:3) = obj.skew(X(1:3,i+3))*R;
            end
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
        
        function [] = InitializeFilter(obj, enable, X_init)
            % Attempt to enable filter (successful if enable is true, and
            % at least one foot is on the ground)
            if enable && ~obj.filter_enabled
                obj.X = X_init;
                obj.theta = [obj.bg0; obj.ba0];
                obj.Store_Covariance(obj.P_prior);
                obj.filter_enabled = true;
            end

            % If filter is disabled, zero everything
            if ~enable || ~obj.filter_enabled
                obj.X = eye(7);
                obj.landmarks = zeros(3,obj.max_landmarks);
                obj.theta = zeros(6,1);
                obj.Store_Covariance(eye(21));
                obj.num_landmarks = 0;
                obj.landmark_ids = zeros(1,obj.max_landmarks);
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
            R_pred = R * Angles.Exp(w_k*dt);
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
            
            % Base
            Fc = [       zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                  obj.skew(obj.g), zeros(3), zeros(3), zeros(3), zeros(3);
                         zeros(3),   eye(3), zeros(3), zeros(3), zeros(3);
                         zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                         zeros(3), zeros(3), zeros(3), zeros(3), zeros(3)];
           % Landmarks          
           Fc = blkdiag(Fc, obj.Zeros(1:3*obj.num_landmarks,1:3*obj.num_landmarks));    
           
           % Parameters
           Fc = blkdiag(Fc, zeros(6));               
           Fc(1:15,end-5:end) = [             -R, zeros(3);
                                  -obj.skew(v)*R,       -R;
                                  -obj.skew(p)*R, zeros(3);
                                 -obj.skew(dR)*R, zeros(3);
                                 -obj.skew(dL)*R, zeros(3)];
           
            % Discretize
            Fk = eye(size(Fc)) + Fc*dt; 
            
            Lc = blkdiag(obj.Adjoint(obj.Augmented_State()), eye(6));
            hR_R = R_VectorNav_to_RightToeBottom(encoders);
            hR_L = R_VectorNav_to_LeftToeBottom(encoders);
            Q = blkdiag(obj.Qg, obj.Qa, zeros(3), hR_R*(obj.Qc+(1e4*eye(3).*(1-contact(2))))*hR_R', hR_L*(obj.Qc+(1e4*eye(3).*(1-contact(1))))*hR_L', obj.Zeros(1:3*obj.num_landmarks,1:3*obj.num_landmarks), obj.Qbg, obj.Qba);             
            Qk = Fk*Lc*Q*Lc'*Fk'*dt; % Discretized
            
            % Construct predicted state
            [obj.X, obj.theta] = obj.Construct_State(R_pred, v_pred, p_pred, dR_pred, dL_pred, bg_pred, ba_pred);
            
            % Predict Covariance
            obj.Store_Covariance( Fk * obj.Augmented_Covariance() * Fk' + Qk );
        end
        
        function [] = Update_State(obj, Y, b, H, N, PI)
            % Update State and Covariance from a measurement
            % Compute Kalman Gain
            Xa = obj.Augmented_State();
            Pa = obj.Augmented_Covariance();
            S = H * Pa * H' + N;
            K = (Pa * H')/S;
            
            % Copy X along the diagonals if more than one measurement
            % TODO: find better way to do this
            Xdim = 7 + obj.num_landmarks;
            Ydim = length(Y)/Xdim;
            assert(Ydim < obj.max_landmarks);
            assert(Xdim < 7 + obj.max_landmarks);
            coder.varsize('BigX', [obj.max_landmarks*(7+obj.max_landmarks), obj.max_landmarks*(7+obj.max_landmarks)], [1 1]);
            BigX = obj.Zeros(1:Xdim*Ydim, 1:Xdim*Ydim);
            for i = 1:Ydim
                BigX(Xdim*(i-1)+1:Xdim*(i-1)+Xdim, Xdim*(i-1)+1:Xdim*(i-1)+Xdim) = Xa;
            end
            Z = BigX * Y - b;
            
            % Update State
            coder.varsize('delta', [21+3*obj.max_landmarks, 1], [1 0]);
            delta = K*PI*Z;
            dX = obj.exp(delta(1:end-6));
            dtheta = delta(end-5:end);
            Xa = dX * Xa;
            obj.X = Xa(1:7,1:7);
            obj.landmarks(:,1:obj.num_landmarks) = Xa(1:3,8:8+obj.num_landmarks-1);
            obj.theta = obj.theta + dtheta;
            
            % Update Covariance
            I = eye(size(Pa));
            obj.Store_Covariance( (I - K*H)* Pa *(I - K*H)' + K*N*K' ); % Joseph update form
            
        end
        
        function [] = Update_ForwardKinematics(obj, encoders, contact)
            % Function to perform Right-Invariant EKF update from forward
            % kinematic measurements
            
            R_pred = obj.X(1:3,1:3);
            
            if contact(2) == 1 && contact(1) == 1 
                % Double Support
                s_pR = p_VectorNav_to_RightToeBottom(encoders);
                s_pL = p_VectorNav_to_LeftToeBottom(encoders);
                JR = J_VectorNav_to_RightToeBottom(encoders);
                JL = J_VectorNav_to_LeftToeBottom(encoders);
                
                % Measurement Model
                Y = [s_pR; 0; 1; -1; 0; obj.Zeros(1:obj.num_landmarks,1); 
                     s_pL; 0; 1; 0; -1; obj.Zeros(1:obj.num_landmarks,1)];
                b = zeros(size(Y));
                H = [zeros(3), zeros(3), -eye(3), eye(3), zeros(3), obj.Zeros(1:3,1:3*obj.num_landmarks), zeros(3,6);
                     zeros(3), zeros(3), -eye(3), zeros(3), eye(3), obj.Zeros(1:3,1:3*obj.num_landmarks), zeros(3,6)];
                N = blkdiag(R_pred * JR * obj.Qe * JR' * R_pred' + obj.Np, ...
                            R_pred * JL * obj.Qe * JL' * R_pred' + obj.Np);  
                PI = [eye(3), zeros(3,4), obj.Zeros(1:3,1:obj.num_landmarks), zeros(3,7), obj.Zeros(1:3,1:obj.num_landmarks);
                     zeros(3,7), obj.Zeros(1:3,1:obj.num_landmarks), eye(3), zeros(3,4), obj.Zeros(1:3,1:obj.num_landmarks)];

                % Update State
                obj.Update_State(Y, b, H, N, PI);
                        
            elseif contact(2) == 1 
                % Single Support Right    
                s_pR = p_VectorNav_to_RightToeBottom(encoders);
                JR = J_VectorNav_to_RightToeBottom(encoders);
                
                % Measurement Model
                Y = [s_pR; 0; 1; -1; 0; obj.Zeros(1:obj.num_landmarks,1)];
                b = zeros(size(Y));
                H = [zeros(3), zeros(3), -eye(3), eye(3), zeros(3), obj.Zeros(1:3,1:3*obj.num_landmarks), zeros(3,6)];
                N = R_pred * JR * obj.Qe * JR' * R_pred' + obj.Np;
                PI = [eye(3), zeros(3,4), obj.Zeros(1:3,1:obj.num_landmarks)];

                % Update State
                obj.Update_State(Y, b, H, N, PI);
                
            elseif contact(1) == 1 
                % Single Support Left
                s_pL = p_VectorNav_to_LeftToeBottom(encoders);
                JL = J_VectorNav_to_LeftToeBottom(encoders);

                % Measurement Model
                Y = [s_pL; 0; 1; 0; -1; obj.Zeros(1:obj.num_landmarks,1)];
                b = zeros(size(Y));
                H = [zeros(3), zeros(3), -eye(3), zeros(3), eye(3), obj.Zeros(1:3,1:3*obj.num_landmarks), zeros(3,6)];
                N = R_pred * JL * obj.Qe * JL' * R_pred' + obj.Np;
                PI = [eye(3), zeros(3,4), obj.Zeros(1:3,1:obj.num_landmarks)];

                % Update State
                obj.Update_State(Y, b, H, N, PI);
                
            end
            
        end
       
        function [] = Update_StaticLandmarks(obj, measured_landmarks)
            % Function to perform Right-Invariant EKF update from static
            % landmark distance measurements
            
            [R_pred, ~, ~, ~, ~, ~, ~] = obj.Separate_State(obj.X, obj.theta);
            
            % Determine sizes (needed for codegen), (TODO: there is probably a better way to do this)
            lm_cnt = 0;
            for i = 1:size(measured_landmarks,2)
                if measured_landmarks(1,i) == 0 || isnan(measured_landmarks(1,i))
                    continue; % skip if id == 0
                end
                id = find(obj.landmark_positions(1,:) == measured_landmarks(1,i),1);
                if ~isempty(id)
                    lm_cnt = lm_cnt + 1;
                end
            end
            assert(lm_cnt <= 20); % TODO: change to constant variable
            Y = zeros(7*lm_cnt,1);
            b = zeros(7*lm_cnt,1);
            H = zeros(3*lm_cnt,21);
            N = zeros(3*lm_cnt);
            PI = zeros(3*lm_cnt,7*lm_cnt);

            % Stack landmark measurements (TODO: Optimize this)
            for i = 1:size(measured_landmarks,2)
                % Search to see if measured landmark id is in the list of
                % static landmarks
                if measured_landmarks(1,i) == 0 || isnan(measured_landmarks(1,i))
                    continue; % skip if id == 0
                end
                id = find(obj.landmark_positions(1,:) == measured_landmarks(1,i),1);
                if ~isempty(id)
                    % Create measurement model
                    Y(7*(i-1)+1:7*(i-1)+7) = [measured_landmarks(2:end,i); 0; 1; 0; 0];
                    b(7*(i-1)+1:7*(i-1)+7) = [obj.landmark_positions(2:end,id); 0; 1; 0; 0];
                    H(3*(i-1)+1:3*(i-1)+3,:) = [obj.skew(obj.landmark_positions(2:end,id)), zeros(3), -eye(3), zeros(3), zeros(3), zeros(3), zeros(3)];
                    N(3*(i-1)+1:3*(i-1)+3,3*(i-1)+1:3*(i-1)+3) = R_pred * obj.Ql * R_pred';
                    PI(3*(i-1)+1:3*(i-1)+3,7*(i-1)+1:7*(i-1)+7) = [eye(3), zeros(3,4)];
                end
            end
                 
            % Update State
            if ~isempty(Y)
                obj.Update_State(Y, b, H, N, PI);
            end
        end
        
        function [] = Update_Landmarks(obj, measured_landmarks)
            % Function to perform Right-Invariant EKF update from estimated
            % landmark distance measurements            
            [R_pred, ~, ~, ~, ~, ~, ~] = obj.Separate_State(obj.X, obj.theta);
                
            % Determine sizes (needed for codegen), (TODO: there is probably a better way to do this)
            lm_cnt = 0;
            for i = 1:size(measured_landmarks,2)
                if measured_landmarks(1,i) == 0 || isnan(measured_landmarks(1,i))
                    continue; % skip if id == 0
                end
                id = find(obj.landmark_ids == measured_landmarks(1,i),1);
                if ~isempty(id)
                    lm_cnt = lm_cnt + 1;
                end
            end
            Xdim = 7 + obj.num_landmarks;
            assert(lm_cnt <= 20); % TODO: change to constant variable
            assert(Xdim <= 20); % TODO: change to constant variable
            Y = zeros(Xdim*lm_cnt,1);
            H = zeros(3*lm_cnt,3*(Xdim-3)+3+6);
            N = zeros(3*lm_cnt);
            PI = zeros(3*lm_cnt,Xdim*lm_cnt);
            new_landmarks = obj.Zeros(1:4, 1:(sum(measured_landmarks(1,:) > 1) - lm_cnt));
            index = 1;
            
            % Stack landmark measurements for batch update
            for i = 1:size(measured_landmarks,2)
                % Search to see if measured landmark id is in the list of
                % static landmarks 
                if measured_landmarks(1,i) == 0 || isnan(measured_landmarks(1,i))
                    continue; % skip if id == 0
                end
                id = find(obj.landmark_ids == measured_landmarks(1,i)); 
                if isempty(id)
                    new_landmarks(:,index) = measured_landmarks(:,i);
                    index = index + 1;
                else
                    id = id(1);  % makes codegen happy
                    % Create measurement model
                    Y1 = [measured_landmarks(2:end,i); 0; 1; 0; 0];
                    Y2 = obj.Zeros(1:obj.num_landmarks,1);
                    Y2(id) = -1;
                    Y(Xdim*(i-1)+1:Xdim*(i-1)+Xdim) = [Y1; Y2];
                    
                    H1 = [zeros(3), zeros(3), -eye(3), zeros(3), zeros(3)];
                    H2 = obj.Zeros(1:3,1:3*obj.num_landmarks);
                    H2(:,3*(id-1)+1:3*(id-1)+3) = eye(3);
                    H3 = zeros(3,6);
                    H(3*(i-1)+1:3*(i-1)+3,:) = [H1, H2, H3];
                    
                    N(3*(i-1)+1:3*(i-1)+3,3*(i-1)+1:3*(i-1)+3) = R_pred * obj.Ql * R_pred';
                    PI(3*(i-1)+1:3*(i-1)+3,Xdim*(i-1)+1:Xdim*(i-1)+Xdim) = [eye(3), zeros(3,4), obj.Zeros(1:3,1:obj.num_landmarks)];
                end
            end
                 
            % Update State
            if ~isempty(Y)
                b = zeros(size(Y));
                obj.Update_State(Y, b, H, N, PI);
            end
            
            % Augment State for new landmarks
            if ~isempty(new_landmarks)
                [R, ~, p, ~, ~, ~, ~] = obj.Separate_State(obj.X, obj.theta);
                for i = 1:size(new_landmarks,2)
                    if measured_landmarks(1,i) == 0 || isnan(measured_landmarks(1,i))
                        continue; % skip if id == 0
                    end
                    if obj.num_landmarks < obj.max_landmarks
                        % Increment number of landmarks after extracting cov
                        Pa = obj.Augmented_Covariance();
                        obj.num_landmarks = obj.num_landmarks + 1; % this needs to be done before Store_Covariance

                        % Initialize new landmark mean
                        obj.landmark_ids(obj.num_landmarks) = new_landmarks(1,i);
                        obj.landmarks(:,obj.num_landmarks) = p + R*new_landmarks(2:end,i);

                        % Initialize new landmark covariance
                        % Start with I with state dim and add row to increase dimension
                        F = vertcat(eye(size(Pa,1) - 6), [zeros(3,6), eye(3), zeros(3,6), obj.Zeros(1:3,1:3*(obj.num_landmarks-1))]); 
                        F = blkdiag(F, eye(6)); % Add block I for parameters
                        G = zeros(size(F,1),3);
                        G(end-8:end-6,:) = R;
                        obj.Store_Covariance( F*Pa*F' + G*obj.Ql*G' );
                    end
                end
            end
            
        end
        
    end % methods
end % classdef