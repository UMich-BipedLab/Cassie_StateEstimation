function [v] = unskew(Ax)
% Convert skew symmetric matrix to vector
v = [Ax(3,2); Ax(1,3); Ax(2,1)];
end