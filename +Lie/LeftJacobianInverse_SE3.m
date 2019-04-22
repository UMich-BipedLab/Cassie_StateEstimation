function [ output ] = LeftJacobianInverse_SE3( xi )
%RIGHTJACOBIAN as defined in http://perpustakaan.unitomo.ac.id/repository/Associating%20Uncertainty%20With%20Three-Dimensional.pdf

output = inv(Lie.LeftJacobian_SE3(xi));

end

