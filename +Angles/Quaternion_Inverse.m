function [ qinv ] = Quaternion_Inverse( q )
% Takes the inverse of the quaternion
qinv = [q(4);-q(1:3)];
end

