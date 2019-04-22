function [q] = Euler_to_Quaternion(ypr)
% Function to compute the quaternion from Euler angles (RzRyRx)
q = Angles.Rotation_to_Quaternion(Angles.Euler_to_Rotation(ypr));
end