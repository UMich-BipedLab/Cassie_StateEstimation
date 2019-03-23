function [ output ] = LeftJacobian_SEK3( xi )
K = (length(xi)-3)/3;

Phi = xi(1:3);
phi = norm(Phi);
Phi_skew = Lie.skew(Phi);

J = Lie.LeftJacobian_SO3(Phi);
output = J;
for i=1:K
    Rho_skew = Lie.skew(xi(3+3*(i-1)+1:3+3*i));
    
    if (phi == 0)
        Q = 0.5*Rho_skew;
    else
        Q = 0.5*Rho_skew ...
            + (phi-sin(phi))/phi^3 * (Phi_skew*Rho_skew + Rho_skew*Phi_skew + Phi_skew*Rho_skew*Phi_skew) ...
            - (1-0.5*phi^2-cos(phi))/phi^4 * (Phi_skew*Phi_skew*Rho_skew + Rho_skew*Phi_skew*Phi_skew - 3*Phi_skew*Rho_skew*Phi_skew) ...
            - 0.5*((1-0.5*phi^2-cos(phi))/phi^4 - 3*(phi-sin(phi)-(phi^3)/6)/phi^5) ...
            * (Phi_skew*Rho_skew*Phi_skew*Phi_skew + Phi_skew*Phi_skew*Rho_skew*Phi_skew);
    end
    output = blkdiag(output, J);
    output(end-2:end,1:3) = Q;
end

end

