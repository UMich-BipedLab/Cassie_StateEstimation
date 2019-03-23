function [ output ] = RightJacobianInverse_SE3( xi )
output = inv(Lie.RightJacobian_SE3(xi));
end

