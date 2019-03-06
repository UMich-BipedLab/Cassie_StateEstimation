function [X] = Exp_SEK3(xi)
%EXP Computes the vectorized exponential map of SEK(3)
K = (length(xi)-3)/3;
w = xi(1:3);
X = eye(3+K);
X(1:3,:) = [Lie.Exp_SO3(w), Lie.LeftJacobian_SO3(w)*reshape(xi(4:end),3,[])];
end

