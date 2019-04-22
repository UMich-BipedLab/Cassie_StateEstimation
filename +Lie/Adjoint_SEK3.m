function [ Ad ] = Adjoint_SEK3( X )
%ADJOINT_SE3 Computes the matrix representation of the Adjoint of SEK(3)
N = size(X,1)-3;
Ad = X(1:3,1:3);
for i=1:N
    Ad = blkdiag(Ad,X(1:3,1:3));
    Ad(end-2:end,1:3) = Lie.skew(X(1:3,3+i))*X(1:3,1:3);
end
end
