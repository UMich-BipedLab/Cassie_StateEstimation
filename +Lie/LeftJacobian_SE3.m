function [ output ] = LeftJacobian_SE3( xi )
%RIGHTJACOBIAN as defined in http://perpustakaan.unitomo.ac.id/repository/Associating%20Uncertainty%20With%20Three-Dimensional.pdf

Phi = xi(1:3);
theta = norm(Phi);
phix = Lie.skew(Phi);
rhox = Lie.skew(xi(4:6));
J = Lie.LeftJacobian_SO3(Phi);

if (theta == 0)
    Q = 0.5*rhox;
else
    Q = 0.5*rhox ...
        + (theta-sin(theta))/theta^3 * (phix*rhox + rhox*phix + phix*rhox*phix) ...
        + (theta^2+2*cos(theta)-2)/(2*theta^4) * (phix*phix*rhox + rhox*phix*phix - 3*phix*rhox*phix) ...
        + (4*theta+2*theta*cos(theta)-6*sin(theta))/(4*theta^5) ...
        * (phix*rhox*phix*phix + phix*phix*rhox*phix);
end
output = [J, zeros(3); Q, J];
end

