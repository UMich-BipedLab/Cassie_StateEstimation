%% Set sample times 
EKF_SampleTime = 1/2000;

%% Injected Noise Parameters 
% https://www.vectornav.com/products/vn-100/specifications
% https://github.com/ethz-asl/kalibr/wiki/IMU-Noise-Model

% % Set inital IMU biases
gyro_true_bias_init = [0;0;0];
accel_true_bias_init = [0;0;0];

% Set gyroscope noise std 
gyro_true_noise_std = 0.000061087*ones(3,1); % Continuous-Time (VectorNav: 0.000061087)
gyro_true_bias_noise_std = 0.0*ones(3,1);   

% Set accelerometer noise std  
accel_true_noise_std = 0.0013734*ones(3,1);  % Continuous-Time (VectorNav: 0.0013734)
accel_true_bias_noise_std = 0.0*ones(3,1);

% Set encoder noise std
encoder_true_noise_std = deg2rad(0.0)*ones(14,1);  % Discrete-Time

%% Filter Parameters (Continuous-Time)

% Enable measurement updates
ekf_update_enabled = true;

% Set inital IMU biases
% gyro_bias_init = [0;0;0];
% accel_bias_init = [0;0;0];

% Set gyroscope noise std
gyro_noise_std = 0.000061087*ones(3,1); % Continuous-Time
gyro_bias_noise_std = 0.001*ones(3,1);

% Set accelerometer noise std
accel_noise_std = 0.0013734*ones(3,1);  % Continuous-Time
accel_bias_noise_std = 0.001*ones(3,1);

% Set contact and encoder noise std
contact_noise_std = 0.01*ones(3,1);    % Continuous-Time
encoder_noise_std = deg2rad(1)*ones(14,1);   % Discrete-Time

% Priors
prior_base_pose_std = [deg2rad(5);deg2rad(5);deg2rad(1); 0.1*ones(3,1)]; 
prior_base_velocity_std = 1*ones(3,1);
prior_contact_position_std = 1*ones(3,1);
prior_gyro_bias_std = 0.00001*ones(3,1);
prior_accel_bias_std = 0.00001*ones(3,1);
prior_forward_kinematics_std = 0.03*ones(3,1); % Discrete-Time

   

