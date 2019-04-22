function [output] = Quaternion_Multiply(p, q)
% Author:   Ross Hartley
% Date:     11/09/2017
qw = q(1); qv = q(2:4); 
output = [qw, -qv'; qv, qw*eye(3)-Angles.skew(qv)] * p;

end