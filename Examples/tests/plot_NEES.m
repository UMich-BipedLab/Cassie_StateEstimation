%% NEES
assert(all(X_riekf.Time == X_qekf.Time))

%% Parse True State
t_true = true_state.Time;
N = length(t_true);

R_true = zeros(3,3,N); 
q_true = zeros(3,N);
v_true = zeros(3,N); vb_true = v_true;
p_true = zeros(3,N);
dR_true = zeros(3,N);
dL_true = zeros(3,N);

for i = 1:N
    % World Frame 
    Q = Quaternion(true_state.Data(i,1:4)');
    Rtmp = [1,0,0; 0,-1,0; 0,0,-1];
    R_true(:,:,i) = Q.getRotation().getValue();
    q_true(:,i) = Rotation3d(R_true(:,:,i)).getEulerAngles;
    v_true(:,i) = true_state.Data(i,8:10)';
    p_true(:,i) = true_state.Data(i,5:7)';
    
    % Body Frame 
    vb_true(:,i) = R_true(:,:,i)' * v_true(:,i);
    
    % Parameters
end

%% Compute NEES
t = X_riekf.Time;
N = length(t);
NEES_R = zeros(N,1);
NEES_Q = zeros(N,1);
for i = 1:N
    % True state
    [~,index] = min(abs(true_state.Time-t(i)));
    X_true = [R_true(:,:,index), v_true(:,index), p_true(:,index); 0,0,0,1,0; 0,0,0,0,1];
    % Right Invariant
    P = P_riekf.Data(1:9,1:9,i);
    X_est = X_riekf.Data(1:5,1:5,i);
    error = Lie.Log(X_est/X_true);
    NEES_R(i) = error'*(P\error);
    % Quaternion
    P = P_qekf.Data(1:9,1:9,i);
    X_est = X_qekf.Data(1:5,1:5,i);
    error = [Lie.Log(X_true(1:3,1:3)\X_est(1:3,1:3)); ...
                   X_true(1:3,4) - X_est(1:3,4);...
                   X_true(1:3,5) - X_est(1:3,5)];
    NEES_Q(i) = error'*(P\error);
end
chi_squared = 16.919;

fsize = 20; % font size
set(groot, 'defaultAxesTickLabelInterpreter','latex'); 
set(groot, 'defaultLegendInterpreter','latex');

figure('units','centimeters','position',[0,0,24,14]);
hold on; grid on;
plot(t, repmat(chi_squared,N,1),'k--','LineWidth',2)
plot(t, NEES_R,'LineWidth',1)
plot(t, NEES_Q,'LineWidth',1)
xlabel('time (seconds)', 'fontsize', fsize, 'Interpreter','latex')
ylabel({'Normalized Estimation','Error Squared (NEES)'}, 'fontsize', fsize, 'Interpreter','latex')
legend('Chi-squared $95\%$','Right Invariant', 'Quaternion', 'Interpreter','latex')
set(gca, 'fontsize', fsize)
% axis([0,1,-2.5,30])
print -opengl -dpng -r600 nees_simulation.png


%% Plot Orientation covariance
t = X_riekf.Time;
N = length(t);

R_riekf_3sig = zeros(3,N);
v_riekf_3sig = zeros(3,N);
p_riekf_3sig = zeros(3,N);

R_qekf_3sig = zeros(3,N);
v_qekf_3sig = zeros(3,N);
p_qekf_3sig = zeros(3,N);

phi_z_riekf_log_det = zeros(1,N);
phi_z_qekf_log_det = zeros(1,N);

for i = 1:N

    % Covariance (mapped to decoupled world frame)
    M = eye(21);
    R =  X_riekf.Data(1:3,1:3,i);
    M(4:15,4:15) = blkdiag(R,R,R,R);    
    P = M*P_riekf.Data(:,:,i)*M'; 
    
    R_riekf_3sig(:,i) = 3*sqrt(diag(P(1:3,1:3)));
    v_riekf_3sig(:,i) = 3*sqrt(diag(P(4:6,4:6)));
    p_riekf_3sig(:,i) = 3*sqrt(diag(P(7:9,7:9)));
    
    phi_z_riekf_log_det(i) = log(P(3,3));
    
    % Covariance
    P = P_qekf.Data(:,:,i); 
    
    R_qekf_3sig(:,i) = 3*sqrt(diag(P(1:3,1:3)));
    v_qekf_3sig(:,i) = 3*sqrt(diag(P(4:6,4:6)));
    p_qekf_3sig(:,i) = 3*sqrt(diag(P(7:9,7:9)));    
    
    phi_z_qekf_log_det(i) = log(P(3,3));
    
end
figure; 
hold on; grid on;
plot(t,phi_z_qekf_log_det)
plot(t,phi_z_riekf_log_det)
legend('Quaternion', 'Right Invariant')




