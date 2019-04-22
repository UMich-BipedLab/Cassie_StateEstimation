function [ypr] = Quaternion_to_Euler(q)
% Function to compute the Euler Lie (Rx*Ry*Rz) from a given quaternion
[N,M] = size(q);
assert(N==4 || M==4, 'Incorrect dimensions detected')

if (M == 4)
    q = q';
    [N,M] = size(q);
end

ypr = zeros(3,M);
for i = 1:M
    ypr(:,i) = Anlges.Rotation_to_Euler(Anlges.Quaternion_to_Rotation(q(:,i)));
end

end