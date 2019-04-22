function [output] = expq(w)
% Quaternion-Based Exponential Map
% http://mars.cs.umn.edu/tr/reports/Trawny05b.pdf
%
% Author:   Ross Hartley
% Date:     11/09/2017

nw = norm(w);
if nw < 1e-20
    nw = 1e-20; % Prevents divisions by 0
end
output = [cos(nw/2); sin(nw/2)*(w./nw)];

end