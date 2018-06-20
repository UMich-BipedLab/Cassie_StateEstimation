%% Set sample times 
%cassieParameters = CassieParameters;
simulationInitFcn;

frequency = 1000;
EKF_SampleTime = 1/frequency;
Pose_UDP_SampleTime = 1/frequency;
IMU_UDP_SampleTime = 1/frequency;
JointState_UDP_SampleTime = 1/frequency;
Radio_UDP_SampleTime = 1/frequency;
Contact_UDP_SampleTime = 1/frequency;
Time_UDP_SampleTime = 1/frequency;

%% Injected Noise Parameters

% Set inital IMU biases
gyro_true_bias_init = [0;0;0];
accel_true_bias_init = [0;0;0];

% Set gyroscope noise std
gyro_true_noise_std = 0.000*ones(3,1); 
gyro_true_bias_noise_std = 0.000*ones(3,1);

% Set accelerometer noise std
accel_true_noise_std = 0.00*ones(3,1); 
accel_true_bias_noise_std = 0.000*ones(3,1);

% Landmark position measurement noise
landmark_true_noise_std = 0.0*ones(3,1);

% Position of landmark in world frame
landmark_positions = [1; 0;0;0];
% landmark_positions = [[1; 0;0;0],... % [Landmark_ID; {W}_p_{WL}]
%                       [2; 1;2;3],...
%                       [3; 4;5;6],...
%                       [4; 7;8;9],...
%                       [5; -7;-8;-9],...
%                       [6; -4;-5;-6],...
%                       [7; -1;-2;-3]];
                  
landmark_measurement_frequency = 1/10;

%% Filter Parameters

% Enable bias estimation and measurement updates
enable_bias_estimation = false;
static_bias_initialization = true;
ekf_update_enabled = true;
enable_static_landmarks = false;

% Set inital IMU biases
gyro_bias_init = [0;0;0];
accel_bias_init = [0;0;0];

% Set gyroscope noise std
gyro_noise_std = 0.002*ones(3,1); 
gyro_bias_noise_std = 0.001*ones(3,1);

% Set accelerometer noise std
accel_noise_std = 0.04*ones(3,1); 
accel_bias_noise_std = 0.001*ones(3,1);

% Set contact and encoder noise std
contact_noise_std = 0.05*ones(3,1);
encoder_noise_std = deg2rad(0.5)*ones(14,1); 

% Set landmark measurement noise std
landmark_noise_std = 0.01*ones(3,1);

% Priors
prior_base_pose_std = [deg2rad(50)*ones(3,1); 0.01*ones(3,1)]; % This should be set larger if using static landmarks
prior_base_velocity_std = 1.1*ones(3,1);
prior_contact_position_std = 0.1*ones(3,1);
prior_gyro_bias_std = 0.01*ones(3,1);
prior_accel_bias_std = 0.05*ones(3,1);
prior_forward_kinematics_std = 0.03*ones(3,1);





