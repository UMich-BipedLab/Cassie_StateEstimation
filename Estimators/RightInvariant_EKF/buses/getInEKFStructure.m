function [InEKF] = getInEKFStructure()
%GETINEKFSTRUCTURE Gets bus structure for storing InEKF output
InEKF.t = 0;
InEKF.X = zeros(7);
InEKF.theta = zeros(6,1);
InEKF.P = zeros(21);
InEKF.enabled = 0;
end

