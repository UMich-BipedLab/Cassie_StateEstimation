function [ output ] = Log_SE3( X )
%LOG_SE3 Computes the vectorized log map for SE(3)
w = Lie.Log_SO3(X(1:3,1:3));
output = [w; Lie.LeftJacobianInverse_SO3(w)*X(1:3,end)];
end

