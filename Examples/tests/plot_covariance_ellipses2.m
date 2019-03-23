%% Plot covariance ellipses
% clear; clc; close all;

load('EKF_run_v1')

X_true = [quat2dcm(true_state.Data(end,1:4))', true_state.Data(end,5:7)'; 0,0,0,1];
Sigma_riekf = P_riekf.Data([1,2,3,7,8,9],[1,2,3,7,8,9],end);
Sigma_qekf = P_qekf.Data([1,2,3,7,8,9],[1,2,3,7,8,9],end);

% Uniformly sample (n-1)-sphere
% n = 6;
% num_samples = 1000;
% sphere = randn(n,num_samples);
% for i=1:num_samples
%     sphere(:,i) = sphere(:,i)/norm(sphere(:,i));
% end

% create points from a unit sphere
phi = linspace(-pi, pi, 100)';
theta = linspace(-pi/2, pi/2, 100)';
[PHI, THETA] = meshgrid(phi, theta);
X_sph = cos(THETA) .* cos(PHI);
Y_sph = cos(THETA) .* sin(PHI);
Z_sph = sin(THETA);
sphere = [X_sph(:), Y_sph(:), Z_sph(:)];
sphere = [sphere, sphere];

% Chi-squared 6-DOF 95% percent confidence (0.05): 12.592
L_inekf = chol(Sigma_riekf, 'lower');
L_qekf = chol(Sigma_qekf, 'lower');
scale = sqrt(12.592);

ELLIPSOID_inekf = zeros(size(sphere,1),3); 
ELLIPSOID_qekf = zeros(size(sphere,1),3); 
for i=1:size(sphere,1)
    % Right-invariant
    xi = scale * L_inekf * sphere(i,:)'./norm(sphere(i,:)');
    X = Lie.Exp(xi)*X_true; 
    ELLIPSOID_inekf(i,:) = [X(1,4), X(2,4), X(3,4)];
    
    % Quaternion
    xi = scale * L_qekf * sphere(i,:)';
    X(1:3,1:3) = X_true(1:3,1:3)*Lie.Exp(xi(1:3)); 
    X(1:3,4) = X_true(1:3,4) + xi(4:6);
    ELLIPSOID_qekf(i,:) = [X(1,4), X(2,4), X(3,4)];    
end


% extract x,y,z matrices for plotting
darkblue = [0 .2 .4];
VermillionRed = [156,31,46]/255;
figure; grid on; hold on;
X_ell = reshape(ELLIPSOID_inekf(:,1), size(X_sph));
Y_ell = reshape(ELLIPSOID_inekf(:,2), size(Y_sph));
Z_ell = reshape(ELLIPSOID_inekf(:,3), size(Z_sph));
surf(X_ell, Y_ell, Z_ell, 'FaceColor', darkblue, 'EdgeColor', 'none'); alpha(.5)
X_ell = reshape(ELLIPSOID_qekf(:,1), size(X_sph));
Y_ell = reshape(ELLIPSOID_qekf(:,2), size(Y_sph));
Z_ell = reshape(ELLIPSOID_qekf(:,3), size(Z_sph));
surf(X_ell, Y_ell, Z_ell, 'FaceColor', VermillionRed, 'EdgeColor', 'none'); alpha(.5)
axis equal tight

figure; grid on; hold on;
plot3(ELLIPSOID_inekf(:,1), ELLIPSOID_inekf(:,2), ELLIPSOID_inekf(:,3),'b.')
plot3(ELLIPSOID_qekf(:,1), ELLIPSOID_qekf(:,2), ELLIPSOID_qekf(:,3),'r.')
axis equal
