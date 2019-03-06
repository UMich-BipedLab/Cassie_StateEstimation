%CASSIEID Inverse Dynamics (ID) controller for Cassie
%
% Description:
%   This implements the joint space Inverse Dynamics (ID) for the Cassie robot.
%   Currently the springs are ignored and are assumed to be rigid bodies with
%   zero deflection.

% TODO:
%   - Set method for viscous friction to validate positivity

% Copyright 2018 Agility Robotics

classdef CassieId < handle %#codegen
  
  % PUBLIC PROPERTIES ==========================================================
  properties (Access = public)
    % Pelvis transform
    T_pelvis
    % Motor viscous friction vector
    mu_v = repmat([1; 1; 1; 1; 1], 2, 1)
  end % public properties
  
  % PUBLIC METHODS =============================================================
  methods (Access = public)
    function obj = CassieId
      %CASSIEID Construct the Cassie Inverse Dynamics (ID) controller
      
      % Initialize pelvis transform
      obj.T_pelvis = Transform3d;
    end % CassieId
    
    function tau = evaluate(obj, q, dq, ddq)
      %EVALUATE Evaluate the inverse dynamics
      
      % Parse state vector into left/right portions
      qm_l = q(1:5);
      qm_r = q(6:10);
      
      % Compute joint states by assuming zero deflection in the springs
      qj_l = [0; 13*pi/180 - qm_l(4)];
      qj_r = [0; 13*pi/180 - qm_r(4)];
      
      % Define gravity vector
      g = getValue(obj.T_pelvis.getRotation\Vector3d(0, 0, -9.806));
      
      % Compute the dynamic equation matrices given the desired state
      [~, ~, G_l, M_l] = generatedLeftLegDynamics(qm_l, qj_l, g);
      [~, ~, G_r, M_r] = generatedRightLegDynamics(qm_r, qj_r, g);
      
      % Compute the constraint Jacobian given the desired state
      [~, Gc_l] = generatedLeftLegConstraints(qm_l, qj_l, 0);
      [~, Gc_r] = generatedRightLegConstraints(qm_r, qj_r, 0);
      
      % Compute the closed loop constraint Jacobians (-G_passive\G_active)
      gamma_lf = [eye(5); zeros(1,5); -Gc_l(:,7)\Gc_l(:,[1 2 3 4 5])];
      gamma_rf = [eye(5); zeros(1,5); -Gc_r(:,7)\Gc_r(:,[1 2 3 4 5])];
      
      % Compute the constrained gravity vector in motor space
      G_lf = gamma_lf.'*G_l;
      G_rf = gamma_rf.'*G_r;
      
      % Define the reflected rotor inertias
      M_f = diag([61 61 365 365 4.9 0 0].*[25 25 16 16 50 0 0].^2)/1000^2;
      
      % Compute the constrained mass matrix in motor space
      M_lf = gamma_lf.'*(M_l + M_f)*gamma_lf;
      M_rf = gamma_rf.'*(M_r + M_f)*gamma_rf;
      
      % Compute the motor torques using inverse dynamics controller
      tau = ...
        [G_lf; G_rf] + ...
        obj.mu_v.*dq + ...
        [M_lf*ddq(1:5); M_rf*ddq(6:10)];
    end % evaluate
  end % public methods
end % classdef
