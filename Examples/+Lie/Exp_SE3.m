function [ X ] = Exp_SE3( xi )
%EXP Computes the vectorized exponential map (at the identity) as defined in:
% http://ethaneade.com/lie.pdf

w = xi(1:3);
u = xi(4:6);
X = [Lie.Exp_SO3(w), Lie.LeftJacobian_SO3(w)*u; zeros(1,3), 1];

end

