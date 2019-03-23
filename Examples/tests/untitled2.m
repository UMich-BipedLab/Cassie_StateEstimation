%% Plot log determinant of covariance
load('EKF_run_v1')

% X_true = [quat2dcm(true_state.Data(end,1:4))', true_state.Data(end,5:7)'; 0,0,0,1];
% Sigma_riekf = P_riekf.Data([1,2,3,7,8,9],[1,2,3,7,8,9],end);
% Sigma_qekf = P_qekf.Data([1,2,3,7,8,9],[1,2,3,7,8,9],end);


t = P_riekf.Time;
N = length(t);

logdet_p = zeros(N,1);
logdet_phiz = zeros(N,1);
for i=1:N
   P_right = P_riekf.Data(1:15,1:15,i);
   X_bar = X_riekf.Data(:,:,i);
   R_bar = X_bar(1:3,1:3);
   P_left = Lie.Adjoint(inv(X_bar))*P_right*Lie.Adjoint(inv(X_bar));
   M = blkdiag(eye(3),R_bar,R_bar,R_bar,R_bar);
   P = M*P_left*M';
   Cov_p = P([1,2,3,7,8,9],[1,2,3,7,8,9]);
   Cov_phiz = P_right(3,3);
   logdet_p(i) = log(det(Cov_p));
   logdet_phiz(i) = log(det(Cov_phiz));
end


figure;
hold on; grid on;
plot(t, logdet_p);
xlabel('time')
ylabel('log det position')


figure;
hold on; grid on;
plot(t, logdet_phiz);
xlabel('time')
ylabel('log det phi z')

