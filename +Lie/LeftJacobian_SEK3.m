function [ output ] = LeftJacobian_SEK3( xi )
K = (length(xi)-3)/3;

phi = xi(1:3);
theta = norm(phi);
phix = Lie.skew(phi);

J = Lie.LeftJacobian_SO3(phi);
output = J;
for i=1:K
    rhox = Lie.skew(xi(3+3*(i-1)+1:3+3*i));
    
    if (theta == 0)
        Q = 0.5*rhox;
    else
        Q = 0.5*rhox ...
            + (theta-sin(theta))/theta^3 * (phix*rhox + rhox*phix + phix*rhox*phix) ...
            + (theta^2+2*cos(theta)-2)/(2*theta^4) * (phix*phix*rhox + rhox*phix*phix - 3*phix*rhox*phix) ...
            + (4*theta+2*theta*cos(theta)-6*sin(theta))/(4*theta^5) ...
            * (phix*rhox*phix*phix + phix*phix*rhox*phix);
    end
    output = blkdiag(output, J);
    output(end-2:end,1:3) = Q;
end

end

