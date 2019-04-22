%% Generate functon to convert angular velocity to roll/pitch/yaw rates
PATH = '';
if ~exist(PATH,'dir')
    mkdir(PATH);
end

syms qx qy qz real
syms dqx dqy dqz real
q = [qz; qy; qx];
dq = [dqz; dqy; dqx];

% Rotation from world to body
R = Angles.Euler_to_Rotation(q);
% Time Derivative of Rotation Matrix
dR = sym(zeros(3, 3));
for i = 1:3
    for j = 1:3
        Rij = R(i, j);
        dRij = jacobian(Rij, q) * dq;
        dR(i, j) = dRij;
    end
end
% Solve for angular velocity in the body frame
% https://arxiv.org/pdf/1609.06088.pdf
Sw = simplify(R'*dR);
angular_velocity = Angles.unskew(Sw);

%% After looking at solution
syms wx wy wz
w = [wx; wy; wz];

answer = solve(w == angular_velocity, dq); % Cannot pitch 90 deg or equation breaks down
rpy_rates = simplify([answer.dqz; answer.dqy; answer.dqx]);

matlabFunction(rpy_rates, 'File', [PATH, 'AngularVelocity_to_EulerRates'], 'Vars', {q,w}, 'Outputs', {'dq'});
matlabFunction(angular_velocity, 'File', [PATH, 'EulerRates_to_AngularVelocity'], 'Vars', {q,dq}, 'Outputs', {'w'});





