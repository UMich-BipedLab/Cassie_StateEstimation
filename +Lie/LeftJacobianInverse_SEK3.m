function [ output ] = LeftJacobianInverse_SEK3( xi )
output = inv(Lie.LeftJacobian_SEK3(xi));
end

