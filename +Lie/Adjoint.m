function [ Ad ] = Adjoint( X )
%ADJOINT_SO3 Computes the matrix representation of the adjoint
[N,M] = size(X);
assert(N==M,'input matrix must be square');
assert(N>=3,'dimension of input matrix must be at least 3');
if (N==3)
    Ad = Lie.Adjoint_SO3(X);
else
    Ad = Lie.Adjoint_SEK3(X);
end
end

