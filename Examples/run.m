%% Add Paths
clear; matlabrc; restoredefaultpath; clc;
addpath(genpath('../'));
addpath(genpath('../../agility-cassie-doc/Software')); % SimMechanics 

%% Open simulation
model = 'example_RIEKF';
open(model);

%% Run 
sim(model)

%% Plot results
load('mat/true_state.mat')
plot_results;