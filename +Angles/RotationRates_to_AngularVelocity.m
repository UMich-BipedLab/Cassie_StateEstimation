function [ w ] = RotationRates_to_AngularVelocity(q,dR)
% Compute angular velocity in frame B. dR is the time derivative of rotation 
% matrix d/dt(RxRyRz) rotating vectors in frame B to frame A. 
% 
% Author:   Ross Hartley
% Date:     06/23/2017

% Compute Rotation matrix
switch numel(q)
    case 9
        R = q;
    case 4
        R = Angles.Quaternion_to_Rotation(q);
    case 3
        R = Angles.Euler_to_Rotation(q);
    otherwise
        Error('Unrecognized orientation type');
end
% Compute angular velocity
w = Angles.unskew(R'*dR);
end

