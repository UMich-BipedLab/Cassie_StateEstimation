%% Add Paths
clear; matlabrc; restoredefaultpath; clc;

% Add agility robotics code path
AGILITY_CODE_PATH = '../../agility-cassie-doc';
addpath(genpath(AGILITY_CODE_PATH));

% Add paths for this code and load example measurements
addpath(genpath('../'));
load(fullfile('data','measurements_v2.mat'));
load('data/true_state_v2.mat')

% Set noise parameters
EKF_InitFcn

%% Run RIEKF
open('example_RIEKF');
sim('example_RIEKF');
    
% Plot results
plot_riekf;

%% Run QEKF
% open('example_QEKF');
% sim('example_QEKF');
%     
% % Plot results
% plot_qekf;
