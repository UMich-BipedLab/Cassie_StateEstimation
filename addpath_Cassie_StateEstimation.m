%% Add paths needed to run the Right Invariant EKF
cur = fileparts(mfilename('fullpath'));

addpath(genpath(fullfile(cur, 'Estimators','RightInvariant_EKF')))
addpath(fullfile(cur, 'Images'))
addpath(fullfile(cur, 'Libraries'))