%% Add Paths
clear; matlabrc; restoredefaultpath; clc;
addpath(genpath('../'));
load(fullfile('data','measurements_v1.mat'));
load('data/true_state_v1.mat')

%% Set initial condition
EKF_InitFcn

%% Run Filters
N = 10;
X_riekf_multi = cell(1,N);
Theta_riekf_multi = cell(1,N);
X_qekf_multi = cell(1,N);
Theta_qekf_multi = cell(1,N);

% Run multiple simulations
for i=1:N
    disp(['Trial: ', num2str(i)])
    
    % Random initial condition
    R0 = Lie.Exp(mvnrnd(zeros(3,1),diag(prior_base_pose_std(1:3))^2));
    v0 = mvnrnd(zeros(3,1),diag(prior_base_velocity_std(1:3))^2);

    % Run QEKF
    model = 'example_QEKF';
    open(model);
    sim(model)

    % Run RIEKF
    model = 'example_RIEKF';
    open(model);
    sim(model)
    
    % Store Data
    X_riekf_multi{i} = X_riekf;
    Theta_riekf_multi{i} = Theta_riekf;
    X_qekf_multi{i} = X_qekf;
    Theta_qekf_multi{i} = Theta_qekf;
end

%% Plot results
% plot_results;
plot_multi_results