function [] = plot_InEKF(log)

N = length(log.t);

t = log.t;
X = reshape(log.X,7,7,N);
theta = log.theta;
P = reshape(log.P,21,21,N);
enabled = log.enabled;

ypr = zeros(3,N);
vw = reshape(X(1:3,4,:),3,N);
vb = zeros(3,N);
p = reshape(X(1:3,5,:),3,N);
dL = reshape(X(1:3,6,:),3,N);
dR = reshape(X(1:3,7,:),3,N);
for i = 1:N
    R = Rotation3d(X(1:3,1:3,i));
    ypr(:,i) = rad2deg(R.getEulerAngles());
    vb(:,i) = X(1:3,1:3,i)'*vw(:,i);
end

%% Plots
lw = 2;

figure;
h(1) = subplot(3,2,1); grid on; hold on;
plot(t, ypr(1,:), 'LineWidth', lw)
title('Orientation - Yaw')
ylabel('deg')
h(2) = subplot(3,2,3); grid on; hold on;
plot(t, ypr(2,:), 'LineWidth', lw)
title('Orientation - Pitch')
ylabel('deg')
h(3) = subplot(3,2,5); grid on; hold on;
plot(t, ypr(3,:), 'LineWidth', lw)
title('Orientation - Roll')
ylabel('deg')
xlabel('time (s)')


h(4) = subplot(3,2,2); grid on; hold on;
plot(t, vb(1,:), 'LineWidth', lw);
title('IMU Velocity - x (body frame)')
ylabel('m/s')
h(5) = subplot(3,2,4); grid on; hold on;
plot(t, vb(2,:), 'LineWidth', lw)
title('IMU Velocity - y (body frame)')
ylabel('m/s')
h(6) = subplot(3,2,6); grid on; hold on;
plot(t, vb(3,:), 'LineWidth', lw)
title('IMU Velocity - z (body frame)')
ylabel('m/s')
xlabel('time (s)')


figure;
h(7) = subplot(3,3,1); grid on; hold on;
plot(t, p(1,:), 'LineWidth', lw)
title('IMU Position - x')
ylabel('m')
h(8) = subplot(3,3,4); grid on; hold on;
plot(t, p(2,:), 'LineWidth', lw)
title('IMU Position - y')
ylabel('m')
h(9) = subplot(3,3,7); grid on; hold on;
plot(t, p(3,:), 'LineWidth', lw)
title('IMU Position - z')
ylabel('m')
xlabel('time (s)')

h(10) = subplot(3,3,2); grid on; hold on;
plot(t, dL(1,:), 'LineWidth', lw)
title('Left Foot Position - x')
ylabel('m')
h(11) = subplot(3,3,5); grid on; hold on;
plot(t, dL(2,:), 'LineWidth', lw)
title('Left Foot Position - y')
ylabel('m')
h(12) = subplot(3,3,8); grid on; hold on;
plot(t, dL(3,:), 'LineWidth', lw)
title('Left Foot Position - z')
ylabel('m')
xlabel('time (s)')

h(13) = subplot(3,3,3); grid on; hold on;
plot(t, dR(1,:), 'LineWidth', lw)
title('Right Foot Position - x')
ylabel('m')
h(14) = subplot(3,3,6); grid on; hold on;
plot(t, dR(2,:), 'LineWidth', lw)
title('Right Foot Position - y')
ylabel('m')
h(15) = subplot(3,3,9); grid on; hold on;
plot(t, dR(3,:), 'LineWidth', lw)
title('Right Foot Position - z')
ylabel('m')
xlabel('time (s)')

figure;
h(16) = subplot(3,2,1); grid on; hold on;
plot(t, theta(1,:), 'LineWidth', lw)
title('Gyroscope Bias - x')
ylabel('rad/s')
h(17) = subplot(3,2,3); grid on; hold on;
plot(t, theta(2,:), 'LineWidth', lw)
title('Gyroscope Bias - y')
ylabel('rad/s')
h(18) = subplot(3,2,5); grid on; hold on;
plot(t, theta(3,:), 'LineWidth', lw)
title('Gyroscope Bias - z')
ylabel('rad/s')
xlabel('time (s)')

h(19) = subplot(3,2,2); grid on; hold on;
plot(t, theta(1,:), 'LineWidth', lw)
title('Accelerometer Bias - x')
ylabel('m/s^2')
h(20) = subplot(3,2,4); grid on; hold on;
plot(t, theta(2,:), 'LineWidth', lw)
title('Accelerometer Bias - y')
ylabel('m/s^2')
h(21) = subplot(3,2,6); grid on; hold on;
plot(t, theta(3,:), 'LineWidth', lw)
title('Accelerometer Bias - z')
xlabel('time (s)')
ylabel('m/s^2')

linkaxes(h,'x')

end