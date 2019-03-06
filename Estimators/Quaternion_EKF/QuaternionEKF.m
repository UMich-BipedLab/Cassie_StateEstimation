% State Estimator
classdef QuaternionEKF < matlab.System & matlab.system.mixin.Propagates %#codegen
    
    % Public, tunable properties
    properties
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
    
    % PROTECTED PROPERTIES ==================================================
    properties (Access = protected)
    end % properties
    
    % PRIVATE PROPERTIES
    properties(Access = private)
        x_prev;              % State vector
        P_prev;              % Covariance of state
        t_prev;              % time
        filter_enabled; % Flag that specifies if the filter is enabled
        
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
    
    % Pre-computed constants
    properties(Access = private, Constant)
        g = [0;0;-9.81];             % Gravity vector
    end
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
            obj.filter_enabled = false;
            
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
                                        
            % Initialze State and Covariance
            obj.x_prev = [1;zeros(21,1)];
            obj.P_prev = eye(21);
            
            % Variables to store previous measurements
            obj.t_prev = 0;
                        
        end % setupImpl
        
        function [x, P, enabled] = stepImpl(obj, enable, t, w, a, encoders, contact, x_init)
            % Quaternion-based EKF
            %
            %   Inputs:
            %       EnableFilter - flag to enable/disable the filter
            %       t            - time
            %       w            - angular velocity
            %       a            - linear acceleration
            %       encoders     - joint encoder positions
            %       contact      - contact indicator
            %
            %   Outputs:
            %       x   - current state mean, 
            %       P   - current state covariance 
            %       enabled - flag indicating when the filter is enabled
            %
            %   Author: Ross Hartley
            %   Date:   3/6/2019
            %
                        
            % Wait until valid encoder signal and t_prev is set
            if norm(encoders) == 0 || obj.t_prev == 0
                enable = 0; % Keep filter disabled
            end
           
            % Enable filter
            if ~enable
                % If filter trigger is disabled, zero everything
                obj.x_prev = [1;zeros(21,1)]; % for quaternion
                obj.P_prev = eye(21);
                obj.filter_enabled = false;
            elseif ~obj.filter_enabled && (contact(1) == 1 || contact(2) == 1)
                % If filter trigger is enabled, initialize filter is not already initialized
                obj.x_prev = x_init;
                obj.P_prev = obj.P_prior;
                obj.filter_enabled = true;
            end
            
            %% Predict state using IMU measurements
            [q, v, p, dL, dR, bg, ba] = obj.Separate_States(obj.x_prev);
            
            % Bias corrected IMU information
            dt = t-obj.t_prev;
            w = w - bg;
            a = a - ba;
%             gx = Lie.skew(obj.g);
            wx = Lie.skew(w);
            ax = Lie.skew(a);
            
            % Base Pose Dynamics
            R = Quaternion(q).getRotation().getValue();
            R_pred = R*Lie.Exp(w*dt);
            q_pred = Rotation3d(R_pred).getQuaternion().getValue();
            v_pred = v + (R*a + obj.g)*dt;
            p_pred = p + v*dt + 0.5*(R*a + obj.g)*dt^2;
            
            % Foot Position Dynamics
            dL_off = p_pred + R_pred * p_VectorNav_to_LeftToeBottom(encoders); 
            dR_off = p_pred + R_pred * p_VectorNav_to_RightToeBottom(encoders); 
            dL_pred = contact(1)*dL + (1-contact(1))*dL_off;
            dR_pred = contact(2)*dR + (1-contact(2))*dR_off;
            
            % Bias Dynamics
            bg_pred = bg; 
            ba_pred = ba;
              
            % Linearized error dynamics
            F = [      -wx, zeros(3), zeros(3), zeros(3), zeros(3),  -eye(3), zeros(3);
                     -R*ax, zeros(3), zeros(3), zeros(3), zeros(3), zeros(3),       -R;
                  zeros(3),   eye(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                  zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                  zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                  zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                  zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3)];
                      
            G = blkdiag(eye(3), R, zeros(3), R, R, eye(3), eye(3));
            
            hR_R = R_VectorNav_to_RightToeBottom(encoders);
            hR_L = R_VectorNav_to_LeftToeBottom(encoders);
            Q = blkdiag(obj.Qg, obj.Qa, zeros(3), hR_L*(obj.Qc+(1e4*eye(3).*(1-contact(1))))*hR_L',  hR_R*(obj.Qc+(1e4*eye(3).*(1-contact(2))))*hR_R', obj.Qbg, obj.Qba); 
                      
            Phi = expm(F*dt); % approximate
            Qd = Phi*G*Q*G'*Phi'*dt; % approximate

            % Predicted state
            x_pred = [q_pred; v_pred; p_pred; dL_pred; dR_pred; bg_pred; ba_pred];
            P_pred = Phi*obj.P_prev*Phi' + Qd;
            
            %% Update state using encoder measurements            
            y = []; H = []; N = [];
            if (obj.ekf_update_enabled)
                % Left Contact
                if (contact(1) == 1)
                    y = vertcat(y, p_VectorNav_to_LeftToeBottom(encoders) - R_pred'*(dL_pred - p_pred));
                    H = vertcat(H, [Lie.skew(R_pred'*(dL_pred - p_pred)), zeros(3), -R_pred', R_pred', zeros(3), zeros(3), zeros(3)]);
                    J = Jp_VectorNav_to_LeftToeBottom(encoders);
                    N = blkdiag(N, J*obj.Qe *J' + obj.Np);
                end
                % Right Contact
                if (contact(2) == 1)
                    y = vertcat(y,p_VectorNav_to_RightToeBottom(encoders) - R_pred'*(dR_pred - p_pred));
                    H = vertcat(H, [Lie.skew(R_pred'*(dR_pred - p_pred)), zeros(3), -R_pred', zeros(3), R_pred', zeros(3), zeros(3)]);                
                    J = Jp_VectorNav_to_RightToeBottom(encoders);
                    N = blkdiag(N, J*obj.Qe *J' + obj.Np);
                end
            end            
           
           % Correct State
            if isempty(y)
                % No measurements
                x = x_pred;
                P = P_pred;
            else
                % Compute measurement update
                S = H*P_pred*H' + N;   % Innovation covariance
                K = (P_pred*H')/S;     % Kalman gain
                delta_x = K*y;             % Correction vector
                % Update the state
                x = obj.Compose(x_pred, delta_x);
                % Update Covariance
                I = eye(21);
                P = (I-K*H)*P_pred*(I-K*H)' + K*N*K'; % Joseph update form
            end

            % If filter is disabled, output initial values
            if ~obj.filter_enabled
                x = [1;zeros(21,1)]; % for quaternion
                P = eye(21);
            end
                       
            % Store last values
            obj.t_prev = t;
            obj.x_prev = x;
            obj.P_prev = P;
            
            % Output enable flag
            enabled = double(obj.filter_enabled);
            
        end % stepImpl

        
        function [q, v, p, dL, dR, bg, ba] = Separate_States(~, x) 
            % Separate state vector into components
            q = x(1:4);   % Orientation
            v = x(5:7);    % Velocity
            p = x(8:10);    % Position
            dL = x(11:13); % Left Foot Position
            dR = x(14:16); % Right Foot Position
            ba = x(17:19); % Accel Bias
            bg = x(20:22); % Gyro Bias
        end
        
        function [x] = Compose(obj, x_bar, delta_x)
            % Update state prediction with error correction vector
            [q_bar, v_bar, p_bar, dL_bar, dR_bar, bg_bar, ba_bar] = obj.Separate_States(x_bar);
            R_bar = Quaternion(q_bar).getRotation().getValue();
            q = Rotation3d(R_bar*Lie.Exp(delta_x(1:3))).getQuaternion().getValue();
            v = v_bar + delta_x(4:6);
            p = p_bar + delta_x(7:9);
            dL = dL_bar + delta_x(10:12);
            dR = dR_bar + delta_x(13:15);
            bg = bg_bar + delta_x(16:18);
            ba = ba_bar + delta_x(19:21);

            x = [q; v; p; dL; dR; bg; ba];
        end
    
        
        %% Define Outputs
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [x, P, enabled] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            x = [22, 1];
            P = [21,21];
            enabled = [1,1];
        end % getOutputSizeImpl
        
        function [x, P, enabled] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            x = 'double';
            P = 'double';
            enabled = 'double';
        end % getOutputDataTypeImpl
        
        function [x, P, enabled] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            x = false;
            P = false;
            enabled = false;
        end % isOutputComplexImpl
        
        function [x, P, enabled] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variale-size output ports.
            x = true;
            P = true;
            enabled = true;
        end % isOutputFixedSizeImpl
    end % methods
end % classdef