function [ output ] = LeftJacobian_SE3( xi )
%RIGHTJACOBIAN as defined in http://perpustakaan.unitomo.ac.id/repository/Associating%20Uncertainty%20With%20Three-Dimensional.pdf

Phi = xi(1:3);
phi = norm(Phi);
Rho = xi(4:6);
Phi_skew = Lie.skew(Phi);
Rho_skew = Lie.skew(Rho);
J = Lie.LeftJacobian_SO3(Phi);

if (phi == 0)
    Q = 0.5*Rho_skew;
else
    Q = 0.5*Rho_skew ...
        + (phi-sin(phi))/phi^3 * (Phi_skew*Rho_skew + Rho_skew*Phi_skew + Phi_skew*Rho_skew*Phi_skew) ...
        - (1-0.5*phi^2-cos(phi))/phi^4 * (Phi_skew*Phi_skew*Rho_skew + Rho_skew*Phi_skew*Phi_skew - 3*Phi_skew*Rho_skew*Phi_skew) ...
        - 0.5*((1-0.5*phi^2-cos(phi))/phi^4 - 3*(phi-sin(phi)-(phi^3)/6)/phi^5) ...
        * (Phi_skew*Rho_skew*Phi_skew*Phi_skew + Phi_skew*Phi_skew*Rho_skew*Phi_skew);
end
output = [J, zeros(3); Q, J];
end

