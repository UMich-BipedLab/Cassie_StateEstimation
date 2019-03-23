function [ output ] = RightJacobianInverse_SEK3( xi )
output = inv(Lie.RightJacobian_SEK3(xi));
end

