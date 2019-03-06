function [ output ] = RightJacobianInverse_SO3( w )
%RIGHTJACOBIANINVERSE as defined in http://www.roboticsproceedings.org/rss11/p06.pdf

theta = norm(w);
A = Lie.skew(w);

if theta == 0
    output = eye(3);
    return;
end

output = eye(3) + 0.5*A + ( (1.0/(theta^2)) - (1+cos(theta))/(2.0*theta*sin(theta)) )*A*A;

end

