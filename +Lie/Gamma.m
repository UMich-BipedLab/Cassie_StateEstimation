function [output] = Gamma(w,n)           
%GAMMA Summary of this function goes here
%   Detailed explanation goes here
assert(n>=0)
R = Lie.Exp_SO3(w);
A = Lie.skew(w);
theta = norm(w);
I = eye(3);

if theta < 1e-10
    output = (1/factorial(n))*I;
    return;
end

S = eye(3);
for k=1:n
    S = S + (A)^k / factorial(k);
end

if (n==0)
    output = R;
elseif (mod(n,2)) % odd
    output = (1/factorial(n))*I + ((-1)^((n+1)/2)/theta^(n+1))*A * (R - S);
else % even
    output = (1/factorial(n))*I + ((-1)^(n/2)/theta^n) * (R - S);
end


end

