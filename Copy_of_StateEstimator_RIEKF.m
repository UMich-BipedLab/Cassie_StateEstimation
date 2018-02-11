% State Estimator
classdef StateEstimator_RIEKF < matlab.System & matlab.system.mixin.Propagates %#codegen
    
    % Public, tunale properties
    properties
        static_bias_initialization = true;
        ekf_update_enabled = true;
        dt = 1/1000;
        
        % Enable Bias Estimation
        enable_bias_estimation = true;
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
        
    end
    
    % PROTECTED PROPERTIES ==================================================
    properties (Access = protected)
        params
    end % properties
    
    % Private variales
    properties(Access = private)
        mu_prev;
        Sigma_prev;
        filter_enabled;
        bias_initialized;
        ba0 = zeros(3,1);
        bg0 = zeros(3,1);
        a_init_vec;
        w_init_vec;
        imu_init_count = 1;
        flight_phase = true;
        t_liftoff = 0;
        X_prev;
        theta_prev;
        P_prev;
        
        % Sensor Covariances
        Qg;    % Gyro Covariance Matrix
        Qbg;   % Gyro bias Covariance Matrix
        Qa;    % Accel Covariance Matrix
        Qba;   % Accel Bias Covariance Matrix
        Qc;    % Contact Covariance Matrix
        Qe;    % Encoder Covariance Matrix
        
    end
    
    % Pre-computed constants
    properties(Access = private, Constant)
        % EKF Noise Parameters
        g = [0;0;-9.81]; % Gravity
        imu_init_total_count = 1000;
    end
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
            obj.params = CassieParameters;
            obj.mu_prev = [zeros(3,1); zeros(3,1); [1;0;0;0]; zeros(12,1)];
            obj.Sigma_prev = zeros(21);
            obj.filter_enabled = false;
            obj.bias_initialized = false;
            obj.a_init_vec = zeros(3, obj.imu_init_total_count);
            obj.w_init_vec = zeros(3, obj.imu_init_total_count);
            obj.t_liftoff = 0;
            
            % Initialize Sensor Covariances
            obj.Qg = diag(obj.gyro_noise_std.^2);          % Gyro Covariance Matrix
            obj.Qbg = diag(obj.gyro_bias_noise_std.^2);    % Gyro bias Covariance Matrix
            obj.Qa = diag(obj.accel_noise_std.^2);         % Accel Covariance Matrix
            obj.Qba = diag(obj.accel_bias_noise_std.^2);   % Accel Bias Covariance Matrix
            obj.Qc = diag(obj.contact_noise_std.^2);       % Contact Covariance Matrix
            obj.Qe = diag(obj.encoder_noise_std.^2);       % Encoder Covariance Matrix
            
            % Initialize bias estimates
            obj.bg0 = obj.gyro_bias_init;
            obj.ba0 = obj.accel_bias_init;
            
            % Initialze State and Covariance
            obj.X_prev = eye(7); 
            obj.theta_prev = zeros(6,1);
            obj.P_prev = eye(21);
                        
        end % setupImpl
        
        function [mu, Sigma, enabled, K] = stepImpl(obj, EnableFilter, t, w, a, e, q_init, v_init, contact)
            % Function that creates a state vector from sensor readings.
            %
            %   Inputs:
            %       EnableFilter - flag to enable/disable the filter
            %       t            - time
            %       w            - angular velocity, {I}_w_{WI}
            %       a            - linear acceleration, {I}_a_{WI}
            %       e            - joint encoder positions
            %       e_dot        - joint encoder velocities
            %       contact      - contact indicator
            %
            %   Outputs:
            %       mu      - current state estimate, [{W}_p_{WI}, {W}_v_{WI}, R_{IW}, {W}_p_{WR}, {W}_p_{WL}, {I}_ba_{WI}, {I}_bw_{WI}]
            %       Sigma   - current covariance estimate 
            %       enabled - flag indicating when the filter is enabled
            %
            %   Author: Ross Hartley
            %   Date:   1/19/2018
            %
            
            % Wait until valid encoder signal
            if norm(e) == 0
                EnableFilter = 0; % Keep filter disabled
            end
            
            % Initialize bias
            if obj.static_bias_initialization
                if ~obj.bias_initialized
                    if norm(a) > 0 && norm(w) > 0 % Wait for valid signal
                        if obj.imu_init_count <= obj.imu_init_total_count
                            % Accumulate vector of imu data
                            Rwi = Angles.Quaternion_to_Rotation(q_init);
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
                    EnableFilter = 0; % Keep filter disabled until bias is initialized
                end
            else
                obj.bias_initialized = true;
            end
            
            % If filter is disabled, zero everything
            if ~EnableFilter
                obj.mu_prev = [zeros(6,1);[0;0;0;1]; zeros(6,1); zeros(6,1)];
                obj.Sigma_prev = eye(21,21);
                obj.filter_enabled = false;
                
                obj.X_prev = eye(7);
                obj.theta_prev = zeros(6,1);
                obj.P_prev = eye(21);
            end
            
            % If filter is enabled, initialize filter is not already initialized
            if EnableFilter && ~obj.filter_enabled
                if contact(1) == 1
                    % Initialize with left foot at 0
                    Rwi = Angles.Quaternion_to_Rotation(q_init);
                    r0 = - Rwi * p_VectorNav_to_LeftToeBottom(e); % {W}_p_{WL}
%                     r0 = zeros(3,1);
                    pR = r0 + Rwi * p_VectorNav_to_RightToeBottom(e); % {W}_p_{WR}
                    obj.mu_prev = [r0; Rwi*v_init; Angles.Rotation_to_Quaternion(Rwi'); pR; zeros(3,1); obj.ba0; obj.bg0];
                    obj.Sigma_prev = blkdiag(0.01*eye(3),0.1*eye(3), 0.1*eye(3), 0.1*eye(3), 0.1*eye(3), (5e-1*eye(3)).^2, (5e-2*eye(3)).^2);
                    obj.filter_enabled = true;
                    
                elseif contact(2) == 1
                    % Initialize with right foot at 0
                    Rwi = Angles.Quaternion_to_Rotation(q_init);
                    r0 = - Rwi * p_VectorNav_to_RightToeBottom(e); % {W}_p_{WR}
%                     r0 = zeros(3,1);
                    pL = r0 + Rwi * p_VectorNav_to_LeftToeBottom(e); % {W}_p_{WL}
                    obj.mu_prev = [r0; Rwi*v_init; Angles.Rotation_to_Quaternion(Rwi'); zeros(3,1); pL; obj.ba0; obj.bg0];
                    obj.Sigma_prev = blkdiag(0.1*eye(3),0.1*eye(3), 0.1*eye(3), 0.1*eye(3), 0.1*eye(3), (5e-1*eye(3)).^2, (5e-2*eye(3)).^2);
                    obj.filter_enabled = true;
                end
                
                % Randomize Initial Condition
%                 obj.mu_prev(7:10) = Angles.Rotation_to_Quaternion( Angles.Euler_to_Rotation([0,0,pi] + deg2rad([0,0,0]))' );
%                 obj.mu_prev(4:6) = [0.5; -0.3; 0.7];
                obj.Sigma_prev(7:9,7:9) = (deg2rad(5)^2) * eye(3);
                obj.Sigma_prev(4:6,4:6) = (0.2^2) * eye(3);
                
                % Convert to new state representation
                [obj.X_prev, obj.theta_prev] = obj.Construct_State(Angles.Quaternion_to_Rotation(obj.mu_prev(7:10))', obj.mu_prev(4:6), obj.mu_prev(1:3), obj.mu_prev(11:13), obj.mu_prev(14:16), obj.mu_prev(20:22), obj.mu_prev(17:19));
                obj.P_prev = obj.Sigma_prev([7:9,4:6,1:3,10:12,13:15,19:21,16:18],[7:9,4:6,1:3,10:12,13:15,19:21,16:18]);
            end

            % Reset Filter if flight phase happens for longer than 100ms
            if contact(1) ~= 1 && contact(2) ~= 1
                obj.flight_phase = true;
            else
                obj.t_liftoff = t;
                obj.flight_phase = false;
            end
            if (t - obj.t_liftoff) > 0.1
                obj.filter_enabled = false;
            end
            
            %% Predict state using IMU measurements            
            [R, v, p, dR, dL, bg, ba] = obj.Separate_State(obj.X_prev, obj.theta_prev);
            
            % Bias corrected IMU information
            w_k = w - bg;    % {I}_w_{WI}
            a_k = a - ba;    % {I}_a_{WI}
            
            % Base Pose Dynamics
            R_pred = R * Angles.Exp(w_k *obj.dt);
            v_pred = v + (R*a_k + obj.g)*obj.dt;
            p_pred = p + v*obj.dt + 0.5*(R*a_k + obj.g)*obj.dt^2;
            
            % Foot Position Dynamics
            dR_off = p_pred + R_pred * p_VectorNav_to_RightToeBottom(e); % {W}_p_{WR}
            dL_off = p_pred + R_pred * p_VectorNav_to_LeftToeBottom(e);  % {W}_p_{WL}
            dR_pred = contact(2)*dR + (1-contact(2))*dR_off;
            dL_pred = contact(1)*dL + (1-contact(1))*dL_off;
            
            % Bias Dynamics
            bg_pred = bg; 
            ba_pred = ba;
            
            % Construct predicted state
            [X_pred, theta_pred] = obj.Construct_State(R_pred, v_pred, p_pred, dR_pred, dL_pred, bg_pred, ba_pred);

            % Linearized invariant error dynamics
            Fc = [          zeros(3), zeros(3), zeros(3), zeros(3), zeros(3),                 -R, zeros(3);
                  Angles.skew(obj.g), zeros(3), zeros(3), zeros(3), zeros(3),  -Angles.skew(v)*R,        -R;
                            zeros(3),   eye(3), zeros(3), zeros(3), zeros(3),  -Angles.skew(p)*R, zeros(3);
                            zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), -Angles.skew(dR)*R, zeros(3);
                            zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), -Angles.skew(dL)*R, zeros(3);
                            zeros(3), zeros(3), zeros(3), zeros(3), zeros(3),          zeros(3), zeros(3);
                            zeros(3), zeros(3), zeros(3), zeros(3), zeros(3),          zeros(3), zeros(3)];

            Fk = eye(21) + Fc*obj.dt; % Discretized 
                        
            Lc = blkdiag(obj.Adjoint(obj.X_prev), eye(6));
            hR_R = R_VectorNav_to_RightToeBottom(e);
            hR_L = R_VectorNav_to_LeftToeBottom(e);
            Q = blkdiag(obj.Qg, obj.Qa, zeros(3), hR_R*(obj.Qc+(1e4*eye(3).*(1-contact(2))))*hR_R', hR_L*(obj.Qc+(1e4*eye(3).*(1-contact(1))))*hR_L', obj.Qbg, obj.Qba); 
            Qk = Fk*Lc*Q*Lc'*Fk'*obj.dt; % Discretized

            
            % Predict Covariance
            P_pred = zeros(21,21);
            if ~obj.enable_bias_estimation
                P_pred(1:15,1:15) = Fk(1:15,1:15)*obj.P_prev(1:15,1:15)*Fk(1:15,1:15)' + Qk(1:15,1:15);
            else
                P_pred = Fk*obj.P_prev*Fk' + Qk;
            end
                        
            %% Update state using encoder measurements
            
            if contact(2) == 1 && contact(1) == 1 && obj.ekf_update_enabled 
                % Double Support
                s_pR = p_VectorNav_to_RightToeBottom(e);
                s_pL = p_VectorNav_to_LeftToeBottom(e);
                
                % Measurement Model
                YR = [s_pR; 0; 1; -1; 0];
                YL = [s_pL; 0; 1; 0; -1];
                H = [zeros(3), zeros(3), -eye(3), eye(3), zeros(3), zeros(3), zeros(3);
                     zeros(3), zeros(3), -eye(3), zeros(3), eye(3), zeros(3), zeros(3)];
                 
                % Compute Kalman Gain
                JR = J_VectorNav_to_RightToeBottom(e);
                JL = J_VectorNav_to_LeftToeBottom(e);
                N = blkdiag(R_pred * JR * obj.Qe * JR' * R_pred', ...
                            R_pred * JL * obj.Qe * JL' * R_pred');
                PI = [eye(3), zeros(3,4), zeros(3,7);
                      zeros(3,7), eye(3), zeros(3,4)];
                S = H*P_pred*H' + N;
                K = (P_pred*H')/S;
                
                % Update State
                [dX, dtheta] = obj.exp(K*PI*[(X_pred*YR); (X_pred*YL)]);
                X = dX*X_pred;
                theta = theta_pred + dtheta;
                
                % Update Covariance
                P = zeros(21);
                if ~obj.enable_bias_estimation
                    tmp1 = K*H; 
                    tmp2 = K*N*K';
                    P(1:15,1:15) = (eye(15) - tmp1(1:15,1:15))*P_pred(1:15,1:15)*(eye(15) - tmp1(1:15,1:15))' + tmp2(1:15,1:15); % Joseph update form
                else
                    P = (eye(21) - K*H)*P_pred*(eye(21) - K*H)' + K*N*K'; % Joseph update form
                end
                K = K(1:15,1:3);
                
            elseif contact(2) == 1 && obj.ekf_update_enabled
                % Single Support Right    
                s_pR = p_VectorNav_to_RightToeBottom(e);

                % Measurement Model
                YR = [s_pR; 0; 1; -1; 0];
                H = [zeros(3), zeros(3), -eye(3), eye(3), zeros(3), zeros(3), zeros(3)];
                 
                % Compute Kalman Gain
                JR = J_VectorNav_to_RightToeBottom(e);
                N = R_pred * JR * obj.Qe * JR' * R_pred';
                PI = [eye(3), zeros(3,4)];
                S = H*P_pred*H' + N;
                K = (P_pred*H')/S;
               
                % Update State
                [dX, dtheta] = obj.exp(K*PI*(X_pred*YR));
                X = dX*X_pred;
                theta = theta_pred + dtheta;
                
                % Update Covariance
                P = zeros(21);
                if ~obj.enable_bias_estimation
                    tmp1 = K*H; 
                    tmp2 = K*N*K';
                    P(1:15,1:15) = (eye(15) - tmp1(1:15,1:15))*P_pred(1:15,1:15)*(eye(15) - tmp1(1:15,1:15))' + tmp2(1:15,1:15); % Joseph update form
                else
                    P = (eye(21) - K*H)*P_pred*(eye(21) - K*H)' + K*N*K'; % Joseph update form
                end
                K = K(1:15,:);
                
            elseif contact(1) == 1 && obj.ekf_update_enabled
                % Single Support Left
                s_pL = p_VectorNav_to_LeftToeBottom(e);

                % Measurement Model
                YL = [s_pL; 0; 1; 0; -1];
                H = [zeros(3), zeros(3), -eye(3), zeros(3), eye(3), zeros(3), zeros(3)];
                
                % Compute Kalman Gain
                JL = J_VectorNav_to_LeftToeBottom(e);
                N = R_pred * JL * obj.Qe * JL' * R_pred';
                PI = [eye(3), zeros(3,4)];
                S = H*P_pred*H' + N;
                K = (P_pred*H')/S;
                
                % Update State
                [dX, dtheta] = obj.exp(K*PI*(X_pred*YL));
                X = dX*X_pred;
                theta = theta_pred + dtheta;
                
                % Update Covariance
                P = zeros(21);
                if ~obj.enable_bias_estimation
                    tmp1 = K*H; 
                    tmp2 = K*N*K';
                    P(1:15,1:15) = (eye(15) - tmp1(1:15,1:15))*P_pred(1:15,1:15)*(eye(15) - tmp1(1:15,1:15))' + tmp2(1:15,1:15); % Joseph update form
                else
                    P = (eye(21) - K*H)*P_pred*(eye(21) - K*H)' + K*N*K'; % Joseph update form
                end
                K = K(1:15,:);
                
            else
                % Flight (no measurements) or update disabled
                X = X_pred;
                theta = theta_pred;
                P = P_pred;
                K = zeros(15,3);
            end
            
            % If filter is disabled, output initial values
            if ~obj.filter_enabled
                [X, theta] = obj.Construct_State(eye(3), zeros(3,1), zeros(3,1), zeros(3,1), zeros(3,1), zeros(3,1), zeros(3,1));
                P = eye(21);
            end
            
            % Overwrite bias term if estimation is disabled
            if ~obj.enable_bias_estimation
                theta = theta_pred;
            end
            
            % Store last values
            obj.X_prev = X;
            obj.theta_prev = theta;
            obj.P_prev = P;
            
            % Store values for output logging
            [R, v, p, dR, dL, bw, ba] = obj.Separate_State(X, theta);

            % Convert to original EKF format for logging
            mu = [p; v; Angles.Rotation_to_Quaternion(R'); dR; dL; ba; bw];
            Sigma = P([7:9,4:6,1:3,10:12,13:15,19:21,16:18],[7:9,4:6,1:3,10:12,13:15,19:21,16:18]);

            % Output enable flag
            enabled = double(obj.filter_enabled);
                                   
        end % stepImpl

        function [R, v, p, dR, dL, bg, ba] = Separate_State(~, X, theta)
            % Separate state vector into components
            R = X(1:3,1:3);  % Orientation
            v = X(1:3,4);    % Base Velocity
            p = X(1:3,5);    % Base Position
            dR = X(1:3,6);   % Right Foot Position
            dL = X(1:3,7);   % Left Foot Position
            bg = theta(1:3); % Gyroscope Bias
            ba = theta(4:6); % Accelerometer Bias
        end
        
        function [X, theta] = Construct_State(~, R, v, p, dR, dL, bg, ba)
            % Construct matrix from separate states
            X = [R, v, p, dR, dL; 0,0,0,1,0,0,0; 0,0,0,0,1,0,0; 0,0,0,0,0,1,0; 0,0,0,0,0,0,1];
            theta = [bg; ba];
        end
 
        function [dX, dtheta] = exp(~, v)
            % Exponential map of SE_3(3)
        	dX = expm([Angles.skew(v(1:3)), v(4:6), v(7:9), v(10:12), v(13:15); zeros(4,7)]);
            dtheta = v(16:21);
        end
        
        function AdjX = Adjoint(~, X)
            % Adjoint of SE_3(3)
            AdjX = [X(1:3,1:3), zeros(3), zeros(3), zeros(3), zeros(3);
                    Angles.skew(X(1:3,4))*X(1:3,1:3), X(1:3,1:3), zeros(3), zeros(3), zeros(3);
                    Angles.skew(X(1:3,5))*X(1:3,1:3), zeros(3), X(1:3,1:3), zeros(3), zeros(3);
                    Angles.skew(X(1:3,6))*X(1:3,1:3), zeros(3), zeros(3), X(1:3,1:3), zeros(3);
                    Angles.skew(X(1:3,7))*X(1:3,1:3), zeros(3), zeros(3), zeros(3), X(1:3,1:3)];
        end
        
        %% Define Outputs
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [mu, Sigma, enabled, K] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            mu = [22, 1];
            Sigma = [21,21];
            enabled = [1,1];
            K = [15,3];
        end % getOutputSizeImpl
        
        function [mu, Sigma, enabled, K] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            mu = 'double';
            Sigma = 'double';
            enabled = 'double';
            K = 'double';
        end % getOutputDataTypeImpl
        
        function [mu, Sigma, enabled, K] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            mu = false;
            Sigma = false;
            enabled = false;
            K = false;
        end % isOutputComplexImpl
        
        function [mu, Sigma, enabled, K] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variale-size output ports.
            mu = true;
            Sigma = true;
            enabled = true;
            K = true;
        end % isOutputFixedSizeImpl
    end % methods
end % classdef