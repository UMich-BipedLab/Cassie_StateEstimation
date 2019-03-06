function [ output ] = Log_SO3( A )
%LOG_SO3 Computes the vectorized log map for SO(3)
theta = acos((trace(A)-1)/2);
if (theta == 0)
    output = zeros(3,1);
    return;
end
output = Lie.unskew(theta*(A-A')/(2*sin(theta)));
end


