%% Plot Right-Invariant EKF results

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

%% Parse Estimated State RIEKF
M = length(X_riekf_multi);
R_riekf = cell(1,M);
q_riekf = cell(1,M);
v_riekf = cell(1,M);
vb_riekf = cell(1,M);
p_riekf = cell(1,M);
bg_riekf = cell(1,M);
ba_riekf = cell(1,M);

for k=1:M
    disp(['Loading riekf results: ', num2str(k)])
    X_riekf = X_riekf_multi{k};
    Theta_riekf = Theta_riekf_multi{k};
    
    t_riekf = X_riekf.Time;
    N = length(t_riekf);

    R_riekf{k} = zeros(3,3,N); 
    q_riekf{k} = zeros(3,N);
    v_riekf{k} = zeros(3,N); 
    vb_riekf{k} = v_riekf{k};
    p_riekf{k} = zeros(3,N);

    for i = 1:N
        % World Frame Estimates
        R_riekf{k}(:,:,i) = X_riekf.Data(1:3,1:3,i);
        q_riekf{k}(:,i) = Rotation3d(R_riekf{k}(:,:,i)).getEulerAngles;
        v_riekf{k}(:,i) = X_riekf.Data(1:3,4,i);
        p_riekf{k}(:,i) = X_riekf.Data(1:3,5,i);

        % Body Frame Estimates
        vb_riekf{k}(:,i) = R_riekf{k}(:,:,i)' * v_riekf{k}(:,i);

        % Parameters
        bg_riekf{k}(:,i) = Theta_riekf.Data(1:3,1,i);
        ba_riekf{k}(:,i) = Theta_riekf.Data(4:6,1,i);
    end
end

%% Parse Estimated State QEKF
M = length(X_qekf_multi);
R_qekf = cell(1,M);
q_qekf = cell(1,M);
v_qekf = cell(1,M);
vb_qekf = cell(1,M);
p_qekf = cell(1,M);
bg_qekf = cell(1,M);
ba_qekf = cell(1,M);

for k=1:M
    disp(['Loading qekf results: ', num2str(k)])
    X_qekf = X_qekf_multi{k};
    Theta_qekf = Theta_qekf_multi{k};
    
    t_qekf = X_qekf.Time;
    N = length(t_qekf);

    R_qekf{k} = zeros(3,3,N); 
    q_qekf{k} = zeros(3,N);
    v_qekf{k} = zeros(3,N); 
    vb_qekf{k} = v_qekf{k};
    p_qekf{k} = zeros(3,N);

    for i = 1:N
        % World Frame Estimates
        R_qekf{k}(:,:,i) = X_qekf.Data(1:3,1:3,i);
        q_qekf{k}(:,i) = Rotation3d(R_qekf{k}(:,:,i)).getEulerAngles;
        v_qekf{k}(:,i) = X_qekf.Data(1:3,4,i);
        p_qekf{k}(:,i) = X_qekf.Data(1:3,5,i);

        % Body Frame Estimates
        vb_qekf{k}(:,i) = R_qekf{k}(:,:,i)' * v_qekf{k}(:,i);

        % Parameters
        bg_qekf{k}(:,i) = Theta_qekf.Data(i,1:3,1);
        ba_qekf{k}(:,i) = Theta_qekf.Data(i,4:6,1);
    end
end




%% Orientation Plot
figure(1)
TrueLine = 'k-';
TrueLineWidth = 2;
EstimatedLineWidth = 1;

ax1 = subplot(3,2,1);
grid on; hold on;
plot(t_true, rad2deg(q_true(1,:)), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(q_riekf)
    plot(t_riekf, rad2deg(q_riekf{k}(1,:)), 'LineWidth', EstimatedLineWidth)
end
title('Orientation - Yaw')
ylabel('degrees')

ax2 = subplot(3,2,2);
grid on; hold on;
plot(t_true, rad2deg(q_true(1,:)), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(q_qekf)
    plot(t_riekf, rad2deg(q_qekf{k}(1,:)), 'LineWidth', EstimatedLineWidth)
end
title('Orientation - Yaw')
ylabel('degrees')

ax3 = subplot(3,2,3);
grid on; hold on;
plot(t_true, rad2deg(q_true(2,:)), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(q_riekf)
    plot(t_riekf, rad2deg(q_riekf{k}(2,:)), 'LineWidth', EstimatedLineWidth)
end
title('Orientation - Pitch')
ylabel('degrees')

ax4 = subplot(3,2,4);
grid on; hold on;
plot(t_true, rad2deg(q_true(2,:)), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(q_qekf)
    plot(t_riekf, rad2deg(q_qekf{k}(2,:)), 'LineWidth', EstimatedLineWidth)
end
title('Orientation - Pitch')
ylabel('degrees')

ax5 = subplot(3,2,5);
grid on; hold on;
plot(t_true, rad2deg(q_true(3,:)), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(q_riekf)
    plot(t_riekf, rad2deg(q_riekf{k}(3,:)), 'LineWidth', EstimatedLineWidth)
end
title('Orientation - Roll')
ylabel('degrees')
xlabel('time (sec)')

ax6 = subplot(3,2,6);
grid on; hold on;
plot(t_true, rad2deg(q_true(3,:)), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(q_qekf)
    plot(t_riekf, rad2deg(q_qekf{k}(3,:)), 'LineWidth', EstimatedLineWidth)
end
title('Orientation - Roll')
ylabel('degrees')
xlabel('time (sec)')

linkaxes([ax1,ax2,ax3,ax4,ax5,ax6],'x');
linkaxes([ax1,ax2,ax3,ax4,ax5,ax6],'y');


%% Velocity Plot
figure(2)
TrueLine = 'k-';
TrueLineWidth = 2;
EstimatedLineWidth = 1;

ax1 = subplot(3,2,1);
grid on; hold on;
plot(t_true, vb_true(1,:), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(vb_riekf)
    plot(t_riekf, vb_riekf{k}(1,:), 'LineWidth', EstimatedLineWidth)
end
title('Velocity (Body) - x')
ylabel('m/s')

ax2 = subplot(3,2,2);
grid on; hold on;
plot(t_true, vb_true(1,:), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(vb_qekf)
    plot(t_riekf, vb_qekf{k}(1,:), 'LineWidth', EstimatedLineWidth)
end
title('Velocity (Body) - x')
ylabel('m/s')

ax3 = subplot(3,2,3);
grid on; hold on;
plot(t_true, vb_true(2,:), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(vb_riekf)
    plot(t_riekf, vb_riekf{k}(2,:), 'LineWidth', EstimatedLineWidth)
end
title('Velocity (Body) - y')
ylabel('m/s')

ax4 = subplot(3,2,4);
grid on; hold on;
plot(t_true, vb_true(2,:), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(vb_qekf)
    plot(t_riekf, vb_qekf{k}(2,:), 'LineWidth', EstimatedLineWidth)
end
title('Velocity (Body) - y')
ylabel('m/s')

ax5 = subplot(3,2,5);
grid on; hold on;
plot(t_true, vb_true(3,:), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(vb_riekf)
    plot(t_riekf, vb_riekf{k}(3,:), 'LineWidth', EstimatedLineWidth)
end
title('Velocity (Body) - z')
ylabel('m/s')
xlabel('time (sec)')

ax6 = subplot(3,2,6);
grid on; hold on;
plot(t_true, vb_true(3,:), TrueLine, 'LineWidth', TrueLineWidth)
for k=1:length(vb_qekf)
    plot(t_riekf, vb_qekf{k}(3,:), 'LineWidth', EstimatedLineWidth)
end
title('Velocity (Body) - z')
ylabel('m/s')
xlabel('time (sec)')

linkaxes([ax1,ax2,ax3,ax4,ax5,ax6],'x');
linkaxes([ax1,ax2,ax3,ax4,ax5,ax6],'y');





