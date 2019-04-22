function [ output ] = Log_SEK3( X )
%LOG_SEK3 Computes the vectorized log map of SEK(3)
w = Lie.Log_SO3(X(1:3,1:3));
output = [w; reshape(Lie.LeftJacobianInverse_SO3(w)*X(1:3,4:end),[],1)];
end

