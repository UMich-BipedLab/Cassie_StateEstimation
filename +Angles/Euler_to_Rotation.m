function [R] = Euler_to_Rotation(ypr)
% Convert from Euler Angles (RzRyRx) to Rotation Matrix
R = Angles.Rz(ypr(1)) * Angles.Ry(ypr(2)) * Angles.Rx(ypr(3));
end

