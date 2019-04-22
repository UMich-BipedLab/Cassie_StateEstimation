function [ output ] = LeftJacobian_SO3( w )
%LEFTJACOBIAN as defined in http://perpustakaan.unitomo.ac.id/repository/Associating%20Uncertainty%20With%20Three-Dimensional.pdf
theta = norm(w);
A = Lie.skew(w);
if theta == 0
    output = eye(3);
    return;
end
output = eye(3) + ((1-cos(theta))/theta^2)*A + ((theta-sin(theta))/theta^3)*A^2;
end

