%% Plot covariance ellipses
clear; clc; close all;

% ---- Create points from a unit 5-sphere -----
N = 5;
phi1 = linspace(0, pi, N)';
phi2 = linspace(0, pi, N)';
phi3 = linspace(0, pi, N)';
phi4 = linspace(0, pi, N)';
phi5 = linspace(0, 2*pi, N)';

% Create mesh grid
Phi1 = zeros(N,N,N,N,N);
Phi2 = zeros(N,N,N,N,N);
Phi3 = zeros(N,N,N,N,N);
Phi4 = zeros(N,N,N,N,N);
Phi5 = zeros(N,N,N,N,N);
for index1=1:N
for index2=1:N
for index3=1:N
for index4=1:N
for index5=1:N
Phi1(index1,index2,index3,index4,index5) = phi1(index1);
Phi2(index1,index2,index3,index4,index5) = phi2(index2);
Phi3(index1,index2,index3,index4,index5) = phi3(index3);
Phi4(index1,index2,index3,index4,index5) = phi4(index4);
Phi5(index1,index2,index3,index4,index5) = phi5(index5);
end
end
end
end
end

X1_sph = cos(Phi1);
X2_sph = sin(Phi1) .* cos(Phi2);
X3_sph = sin(Phi1) .*  sin(Phi2) .* cos(Phi3);
X4_sph = sin(Phi1) .*  sin(Phi2) .* sin(Phi3) .* cos(Phi4);
X5_sph = sin(Phi1) .*  sin(Phi2) .* sin(Phi3) .* sin(Phi4) .* cos(Phi5);
X6_sph = sin(Phi1) .*  sin(Phi2) .* sin(Phi3) .* sin(Phi4) .* sin(Phi5);
sphere = [X1_sph(:), X2_sph(:), X3_sph(:), X4_sph(:), X5_sph(:), X6_sph(:)];

load('EKF_run_v1')

X_true = [quat2dcm(true_state.Data(end,1:4))', true_state.Data(end,5:7)'; 0,0,0,1];
Sigma_riekf = P_riekf.Data([1,2,3,7,8,9],[1,2,3,7,8,9],end);
Sigma_qekf = P_qekf.Data([1,2,3,7,8,9],[1,2,3,7,8,9],end);

% Chi-squared 6-DOF 95% percent confidence (0.05): 12.592
L_inekf = chol(Sigma_riekf, 'lower');
L_qekf = chol(Sigma_qekf, 'lower');
scale = sqrt(12.592);

ELLIPSOID_inekf = zeros(size(sphere,1),3); 
ELLIPSOID_qekf = zeros(size(sphere,1),3); 
for i=1:size(sphere,1)
    % Right-invariant
    xi = scale * L_inekf * sphere(i,:)';
    X = Lie.Exp(xi)*X_true; 
    ELLIPSOID_inekf(i,:) = [X(1,4), X(2,4), X(3,4)];
    
    % Quaternion
    xi = scale * L_qekf * sphere(i,:)';
    X(1:3,1:3) = X_true(1:3,1:3)*Lie.Exp(xi(1:3)); 
    X(1:3,4) = X_true(1:3,4) + xi(4:6);
    ELLIPSOID_qekf(i,:) = [X(1,4), X(2,4), X(3,4)];    
end

%%
% incremental visualization
% green = [0.2980 .6 0];
% crimson = [220,20,60]/255;
darkblue = [0 .2 .4];
% Darkgrey = [.25 .25 .25];
VermillionRed = [156,31,46]/255;
% DupontGray = [144,131,118]/255;

figure; grid on; hold on;
X_ell = reshape(ELLIPSOID_inekf(:,1), size(X1_sph));
Y_ell = reshape(ELLIPSOID_inekf(:,2), size(X1_sph));
Z_ell = reshape(ELLIPSOID_inekf(:,3), size(X1_sph));

X = reshape(X_ell(:,:,1,1,1),N,N);
Y = reshape(Y_ell(:,:,1,1,1),N,N);
Z = reshape(Z_ell(:,:,1,1,1),N,N);

h_leg{1} = surf(X, Y, Z, 'FaceColor', VermillionRed, 'EdgeColor', 'none'); alpha(.2)
axis equal

