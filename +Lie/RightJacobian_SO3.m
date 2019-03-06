function [ output ] = RightJacobian_SO3( w )
%RIGHTJACOBIAN as defined in http://www.roboticsproceedings.org/rss11/p06.pdf
theta = norm(w);
A = Lie.skew(w);
if theta == 0
    output = eye(3);
    return;
end
output = eye(3) - ((1-cos(theta))/theta^2)*A + ((theta-sin(theta))/theta^3)*A*A;
end

