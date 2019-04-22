function [q] = Rotation_to_Quaternion(R)
% Convert from Rotation Matrix to Quaternion
% https://en.wikipedia.org/wiki/Rotation_formalisms_in_three_dimensions#Quaternions
% http://www.ladispe.polito.it/corsi/Meccatronica/02JHCOR/2011-12/Slides/Shuster_Pub_1993h_J_Repsurv_scan.pdf
%
% Author:   Ross Hartley
% Date:     11/09/2017
R = R'; % convention switch
% There are 4 ways to compute a quaternion angle from a rotation matrix
a1 = 0.25*(1 + R(1,1) + R(2,2) + R(3,3));
a2 = 0.25*(1 + R(1,1) - R(2,2) - R(3,3));
a3 = 0.25*(1 - R(1,1) + R(2,2) - R(3,3));
a4 = 0.25*(1 - R(1,1) - R(2,2) + R(3,3));

max_a = max(abs([a1, a2, a3, a4]));

% Avoiding singularity
switch max_a
    case a1
        qx = 0.25 * (R(2,3) - R(3,2)) / sqrt(a1);
        qy = 0.25 * (R(3,1) - R(1,3)) / sqrt(a1);
        qz = 0.25 * (R(1,2) - R(2,1)) / sqrt(a1);
        qw = sqrt(a1);
    case a2
        qx = sqrt(a2);
        qy = 0.25 * (R(1,2) + R(2,1)) / sqrt(a2);
        qz = 0.25 * (R(1,3) + R(3,1)) / sqrt(a2);
        qw = 0.25 * (R(2,3) - R(3,2)) / sqrt(a2);
    case a3
        qx = 0.25 * (R(2,1) + R(1,2)) / sqrt(a3);
        qy = sqrt(a3);
        qz = 0.25 * (R(2,3) + R(3,2)) / sqrt(a3);
        qw = 0.25 * (R(3,1) - R(1,3)) / sqrt(a3);
    case a4
        qx = 0.25 * (R(3,1) + R(1,3)) / sqrt(a4);
        qy = 0.25 * (R(3,2) + R(2,3)) / sqrt(a4);
        qz = sqrt(a4);
        qw = 0.25 * (R(1,2) - R(2,1)) / sqrt(a4);
    otherwise
        error('Error computing quaternion from rotation matrix')
end

q = [qw; qx; qy; qz];

% Non-uniqueness of quaternions
% q = -q, so we always choose +qw by convention
if qw < 0
    q = -q;
end

end

