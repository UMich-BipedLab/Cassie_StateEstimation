function [xi] = Log(X)
%LOG Computes the vectorized log map
[N,M] = size(X);
assert(N==M,'input matrix must be square');
assert(N>=3,'dimension of input matrix must be at least 3');
if (N==3)
    xi = Lie.Log_SO3(X);
else
    xi = Lie.Log_SEK3(X);
end
end

