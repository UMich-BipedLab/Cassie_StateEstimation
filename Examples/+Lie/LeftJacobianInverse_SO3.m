function [ output ] = LeftJacobianInverse_SO3( w )
%LeftJacobianInverse_SO3 as defined in http://perpustakaan.unitomo.ac.id/repository/Associating%20Uncertainty%20With%20Three-Dimensional.pdf
theta = norm(w);
A = Lie.skew(w);
if theta == 0
    output = eye(3);
    return;
end
output = eye(3) - 0.5*A + ( (1.0/(theta^2)) - (1+cos(theta))/(2.0*theta*sin(theta)) )*A*A;
end

