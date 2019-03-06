function [X] = RightJacobianInverse(xi)
%RightJacobian Computes the right Jacobian inverse
N = length(xi);
assert(N>=3,'dimension of input vector must be at least 3');
assert(mod(N,3)==0, 'dimension of input vector must be a multiple of 3');
if (N==3)
    X = Lie.RightJacobianInverse_SO3(xi);
else
    X = Lie.RightJacobianInverse_SEK3(xi);
end
end

