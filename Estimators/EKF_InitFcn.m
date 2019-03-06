%% Set sample times 
EKF_SampleTime = 1/2000;

%% Injected Noise Parameters

% % Set inital IMU biases
% gyro_true_bias_init = [0;0;0];
% accel_true_bias_init = [0;0;0];
% 
% % Set gyroscope noise std
% gyro_true_noise_std = 0.000*ones(3,1); 
% gyro_true_bias_noise_std = 0.000*ones(3,1);
% 
% % Set accelerometer noise std
% accel_true_noise_std = 0.00*ones(3,1); 
% accel_true_bias_noise_std = 0.000*ones(3,1);

%% Filter Parameters

% Enable bias estimation and measurement updates
% static_bias_initialization = true;
ekf_update_enabled = true;

% Set inital IMU biases
% gyro_bias_init = [0;0;0];
% accel_bias_init = [0;0;0];

% Set gyroscope noise std
gyro_noise_std = 0.1*ones(3,1); 
gyro_bias_noise_std = 0.001*ones(3,1);

% Set accelerometer noise std
accel_noise_std = 0.1*ones(3,1); 
accel_bias_noise_std = 0.001*ones(3,1);

% Set contact and encoder noise std
contact_noise_std = 0.05*ones(3,1);
encoder_noise_std = deg2rad(0.5)*ones(14,1); 

% Priors
prior_base_pose_std = [deg2rad(15)*ones(3,1); 0.01*ones(3,1)]; 
prior_base_velocity_std = 1*ones(3,1);
prior_contact_position_std = 1*ones(3,1);
prior_gyro_bias_std = 0.01*ones(3,1);
prior_accel_bias_std = 0.05*ones(3,1);
prior_forward_kinematics_std = 0.03*ones(3,1);

   

