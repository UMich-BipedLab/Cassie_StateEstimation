%% Script to run simulation

% Reset 
clear; restoredefaultpath; clc;

% Add paths
addpath(genpath('../../../'))
addpath(genpath('../../../../CassieSimulink'));       
addpath(genpath('../../../../Cassie_Model'));       
addpath(genpath('../../../../utils'));       


%% Open Model  
mdl = 'RIEKF_test';
open_system(mdl); % Simulation model

%% Sim Model
sim(mdl);

%% Plot Results
load('true_state_v1')
plot_results;