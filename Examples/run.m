%% Add Paths
clear; matlabrc; restoredefaultpath; clc;
addpath(genpath('../'));
load(fullfile('data','measurements_v2.mat'));
load('data/true_state_v2.mat')

%% Set noise parameters
EKF_InitFcn

%% Run Filters

% Random initial condition
R0 = eye(3);
v0 = zeros(3,1);

%% Run QEKF
open('example_QEKF');
sim('example_QEKF');

% Plot results
% plot_qekf;

%% Run RIEKF
open('example_RIEKF');
sim('example_RIEKF');
    
% Plot results
% plot_riekf;

%% Plot Normalized Estimation Error
% plot_NEES
