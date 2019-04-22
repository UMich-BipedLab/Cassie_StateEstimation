clc; close all

% Load data
load('EKF_run_v1')
X_true = [quat2dcm(true_state.Data(end,1:4))', true_state.Data(end,5:7)'; 0,0,0,1];
Sigma_riekf = P_riekf.Data([1,2,3,7,8,9],[1,2,3,7,8,9],end);
Sigma_qekf = P_qekf.Data([1,2,3,7,8,9],[1,2,3,7,8,9],end);


% swap the orientation and position order!
C = zeros(6);
C(1:3, 1:3) = Sigma_riekf(4:6, 4:6);
C(4:6, 4:6) = Sigma_riekf(1:3, 1:3);
C(1:3, 4:6) = Sigma_riekf(4:6, 1:3);
C(4:6, 1:3) = Sigma_riekf(1:3, 4:6);
Sigma_riekf = C;

C = zeros(6);
C(1:3, 1:3) = Sigma_qekf(4:6, 4:6);
C(4:6, 4:6) = Sigma_qekf(1:3, 1:3);
C(1:3, 4:6) = Sigma_qekf(4:6, 1:3);
C(4:6, 1:3) = Sigma_qekf(1:3, 4:6);
Sigma_qekf = C;


% se(3) generators; twist = vec(v, omega).
% R^3 standard basis
e1 = [1;0;0];
e2 = [0;1;0];
e3 = [0;0;1];
% se(3) (SE(3) Lie algebra) infinitesimal generators
G1 = zeros(4);
G1(1,4) = 1;
G2 = zeros(4);
G2(2,4) = 1;
G3 = zeros(4);
G3(3,4) = 1;
G4 = [skew(e1), zeros(3,1)
    zeros(1,4)];
G5 = [skew(e2), zeros(3,1)
    zeros(1,4)];
G6 = [skew(e3), zeros(3,1)
    zeros(1,4)];

% SE(3) Adjoint
Ad = @(X) [X(1:3,1:3), skew(X(1:3,4))*X(1:3,1:3); zeros(3), X(1:3,1:3)];

L_inekf = chol(Sigma_riekf, 'lower');
L_qekf = chol(Sigma_qekf, 'lower');

% create confidence ellipsoid
% first create points from a unit sphere
phi = linspace(-pi, pi, 100)';
theta = linspace(-pi/2, pi/2, 100)';
[PHI, THETA] = meshgrid(phi, theta);
X_sph = cos(THETA) .* cos(PHI);
Y_sph = cos(THETA) .* sin(PHI);
Z_sph = sin(THETA);
sphere = [X_sph(:), Y_sph(:), Z_sph(:)];
sphere = [sphere, zeros(size(sphere))];


% Chi-squared 6-DOF 95% percent confidence (0.05): 12.592
scale = sqrt(12.592);

% incremental visualization
% green = [0.2980 .6 0];
% crimson = [220,20,60]/255;
darkblue = [0 .2 .4];
% Darkgrey = [.25 .25 .25];
VermillionRed = [156,31,46]/255;
% DupontGray = [144,131,118]/255;

fsize = 20; % font size
set(groot, 'defaultAxesTickLabelInterpreter','latex');
set(groot, 'defaultLegendInterpreter','latex');

h_leg = []; % legend handle
figure; hold on
% h_leg{1} = plot3(path.x, path.y, path.z, '-', 'color', Darkgrey, 'linewidth', 3);
grid on, axis auto equal%, axis([-6 6 -1 5])
xlabel('$x_1$', 'fontsize', fsize, 'Interpreter','latex')
ylabel('$x_2$', 'fontsize', fsize, 'Interpreter','latex')
zlabel('$x_3$', 'fontsize', fsize, 'Interpreter','latex')
set(gca, 'fontsize', fsize)
axis equal, view(-5,10)

% plot sample mean and particles
% h_leg{2} = plot3(p(1,:), p(2,:), p(3,:), '.','Color', [green, .25], 'markersize', 14);
% h_leg{3} = plot3(mu(1,4), mu(2,4), mu(3,4), 'o', 'color', crimson, 'MarkerFaceColor', crimson, 'markersize', 8);

% main loop; iterate over the control inputs and move the robot
ELLIPSOID = zeros(size(sphere,1),3); % covariance ellipse on manifold (nonlinear)
ELLIPSOID_q = zeros(size(sphere,1),3); % first order covariance ellipse on manifold (nonlinear)

for j = 1:size(sphere,1)
    % InEKF sample covariance on SE(3)
    ell_se3_vec = scale * L_inekf * sphere(j,:)';
    % retract and left-translate the ellipse on Lie algebra to SE(3) using Lie exp map
    temp = expm(G1 * ell_se3_vec(1) + G2 * ell_se3_vec(2) + G3 * ell_se3_vec(3) + ...
        G4 * ell_se3_vec(4) + G5 * ell_se3_vec(5) + G6 * ell_se3_vec(6))*X_true;
    ELLIPSOID(j,:) = [temp(1,4), temp(2,4), temp(3,4)];
    
    % QEKF sample covariance
    ell_vec = scale * L_qekf * sphere(j,:)';
    ELLIPSOID_q(j,:) = X_true(1:3,4)' + ell_vec(1:3)';
end

% plot the ellipsoids
% extract x,y,z matrices for plotting
X_ell = reshape(ELLIPSOID(:,1), size(X_sph));
Y_ell = reshape(ELLIPSOID(:,2), size(Y_sph));
Z_ell = reshape(ELLIPSOID(:,3), size(Z_sph));
h_leg{1} = surf(X_ell, Y_ell, Z_ell, 'FaceColor', VermillionRed, 'EdgeColor', 'none'); alpha(.2)

% extract x,y,z matrices for plotting
X_ell = reshape(ELLIPSOID_q(:,1), size(X_sph));
Y_ell = reshape(ELLIPSOID_q(:,2), size(Y_sph));
Z_ell = reshape(ELLIPSOID_q(:,3), size(Z_sph));
h_leg{2} = surf(X_ell, Y_ell, Z_ell, 'FaceColor', darkblue, 'EdgeColor', 'none'); alpha(.2)

% plot3(mu(1,4), mu(2,4), mu(3,4), 'o', 'color', [crimson, 0.7], 'MarkerFaceColor', crimson, 'markersize', 8)
% drawnow limitrate
% pause(0.1)

legend('InEKF covariance', 'QEKF covariance')
% legend([h_leg{1}, h_leg{2}], 'InEKF covariance', 'QEKF covariance', 'location', 'best', 'fontsize', 14)
axis equal tight
% figuresize(21,21,'cm')
% print -opengl -dpng -r600 banana_is_gaussian_se3.png



% define SE(3) methods
function X = skew(x)
% vector to skew R^3 -> so(3)
X = [   0,  -x(3),  x(2);
    x(3),      0,  -x(1);
    -x(2), x(1),   0];
end

function x = unskew(X)
% so(3) -> R^3
x = [X(3,2); X(1,3); X(2,1)];
end

function X = hat(x)
% hat: R^6 -> se(3)
X = [skew(x(4:6)), x(1:3); 0 0 0 0];
end

function x = wedge(X)
% wedge: se(3) -> R^6
x = [X(1:3,4); unskew(X(1:3,1:3))];
end
