function [R] = Quaternion_to_Rotation(q)
% Converts a quaternion to a rotation matrix
% http://mars.cs.umn.edu/tr/reports/Trawny05b.pdf
%
% Author:   Ross Hartley
% Date:     03/23/2019
if (size(q,2)==4)
   q = q'; 
end
qw = q(1); qv = q(2:4); 
R = (2*qw^2-1)*eye(3) - 2*qw*Lie.skew(qv) + 2*(qv*qv');
R = R'; % Switch to Hamilton convention from JPL

end

