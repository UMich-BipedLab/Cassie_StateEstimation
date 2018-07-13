%% Plot Right-Invariant EKF results

%% Parse Estimated State
t = X.Time;
N = length(t);

R = zeros(3,3,N); 
q = zeros(3,N);
v = zeros(3,N); vb = v;
p = zeros(3,N);
dR = zeros(3,N);
dL = zeros(3,N);
bg = zeros(3,N);
ba = zeros(3,N);

for i = 1:N
    % World Frame Estimates
    R(:,:,i) = X.Data(1:3,1:3,i);
    q(:,i) = Rotation3d(R(:,:,i)).getEulerAngles;
    v(:,i) = X.Data(1:3,4,i);
    p(:,i) = X.Data(1:3,5,i);
    dR(:,i) = X.Data(1:3,6,i);
    dL(:,i) = X.Data(1:3,7,i);
    
    % Body Frame Estimates
    vb(:,i) = R(:,:,i)' * v(:,i);
    
    % Parameters
    bg(:,i) = theta.Data(1:3,1,i);
    ba(:,i) = theta.Data(4:6,1,i);
end

%% Parse True State
t_true = position.Time;
N = length(t_true);

R_true = zeros(3,3,N); 
q_true = zeros(3,N);
v_true = zeros(3,N); vb_true = v_true;
p_true = zeros(3,N);
dR_true = zeros(3,N);
dL_true = zeros(3,N);

for i = 1:N
    % World Frame 
    Q = Quaternion(orientation.Data(i,:)');
    Rtmp = [1,0,0; 0,-1,0; 0,0,-1];
    R_true(:,:,i) = Rtmp * Q.getRotation().getValue() * Rtmp;
    q_true(:,i) = Rotation3d(R_true(:,:,i)).getEulerAngles;
    v_true(:,i) = velocity.Data(i,:)';
    p_true(:,i) = position.Data(i,:)';
    
    % Body Frame 
    vb_true(:,i) = R_true(:,:,i)' * v_true(:,i);
    
    % Parameters
    
end

%% Orientation Plot
figure(1)
EstimateLine = 'r-';
TrueLine = 'k--';
LineWidth = 2;

ax1 = subplot(3,1,1);
grid on; hold on;
plot(t, rad2deg(q(1,:)), EstimateLine, 'LineWidth', LineWidth)
plot(t_true, rad2deg(q_true(1,:)), TrueLine, 'LineWidth', LineWidth)
title('Orientation - Yaw')
ylabel('degrees')

ax2 = subplot(3,1,2);
grid on; hold on;
plot(t, rad2deg(q(2,:)), EstimateLine, 'LineWidth', LineWidth)
plot(t_true, rad2deg(q_true(2,:)), TrueLine, 'LineWidth', LineWidth)
title('Orientation - Pitch')
ylabel('degrees')

ax3 = subplot(3,1,3);
grid on; hold on;
plot(t, rad2deg(q(3,:)), EstimateLine, 'LineWidth', LineWidth)
plot(t_true, rad2deg(q_true(3,:)), TrueLine, 'LineWidth', LineWidth)
title('Orientation - Roll')
ylabel('degrees')
xlabel('time (sec)')

linkaxes([ax1,ax2,ax3],'x');


%% Velocity Plot
figure(2)
EstimateLine = 'r-';
TrueLine = 'k--';
LineWidth = 2;

subplot(3,1,1)
grid on; hold on;
plot(t, vb(1,:), EstimateLine, 'LineWidth', LineWidth)
plot(t_true, vb_true(1,:), TrueLine, 'LineWidth', LineWidth)
title('Velocity (Body) - x')
ylabel('m/s')

ax2 = subplot(3,1,2);
grid on; hold on;
plot(t, vb(2,:), EstimateLine, 'LineWidth', LineWidth)
plot(t_true, vb_true(2,:), TrueLine, 'LineWidth', LineWidth)
title('Velocity (Body) - y')
ylabel('m/s')

ax3 = subplot(3,1,3);
grid on; hold on;
plot(t, vb(3,:), EstimateLine, 'LineWidth', LineWidth)
plot(t_true, vb_true(3,:), TrueLine, 'LineWidth', LineWidth)
title('Velocity (Body) - z')
ylabel('m/s')
xlabel('time (sec)')

linkaxes([ax1,ax2,ax3],'x');


%% Position Plot
figure(3)
EstimateLine = 'r-';
TrueLine = 'k--';
LineWidth = 2;

ax1 = subplot(3,1,1);
grid on; hold on;
plot(t, p(1,:), EstimateLine, 'LineWidth', LineWidth)
plot(t_true, p_true(1,:), TrueLine, 'LineWidth', LineWidth)
title('Position (Body) - x')
ylabel('m')

ax2 = subplot(3,1,2);
grid on; hold on;
plot(t, p(2,:), EstimateLine, 'LineWidth', LineWidth)
plot(t_true, p_true(2,:), TrueLine, 'LineWidth', LineWidth)
title('Position (Body) - y')
ylabel('m')

ax3 = subplot(3,1,3);
grid on; hold on;
plot(t, p(3,:), EstimateLine, 'LineWidth', LineWidth)
plot(t_true, p_true(3,:), TrueLine, 'LineWidth', LineWidth)
title('Position (Body) - z')
ylabel('m')
xlabel('time (sec)')

linkaxes([ax1,ax2,ax3],'x');



