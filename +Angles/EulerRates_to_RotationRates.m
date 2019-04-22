function [dR] = EulerRates_to_RotationRates(q, dq)
% Compute time derivative of rotation matrix d/dt(RxRyRz)
% Author:   Ross Hartley
% Date:     06/23/2017

Rx = Angles.Rx(q(3));
Ry = Angles.Ry(q(2));
Rz = Angles.Rz(q(1));
dRx = Angles.Rx(q(3))*dq(3)*Angles.skew([1;0;0]);
dRy = Angles.Ry(q(2))*dq(2)*Angles.skew([0;1;0]);
dRz = Angles.Rz(q(1))*dq(1)*Angles.skew([0;0;1]);
dR = dRx*Ry*Rz + Rx*dRy*Rz + Rx*Ry*dRz;
end

