function [ Ad ] = Adjoint_SE3( X )
%ADJOINT_SE3 Computes the adjoint of SE(3)
Ad = [X(1:3,1:3), zeros(3); ...
      Lie.skew(X(1:3,4))*X(1:3,1:3), X(1:3,1:3)];
end

