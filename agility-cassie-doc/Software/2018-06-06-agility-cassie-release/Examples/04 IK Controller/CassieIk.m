%CASSIEIK Inverse Kinematics (IK) solver for Cassie
%
% Description:
%   This implements a Inverse Kinematics (IK) solver for the Cassie robot.
%   Currently the springs are ignored and are assumed to be rigid bodies with
%   zero deflection.

% Copyright 2018 Agility Robotics

classdef CassieIk < handle %#codegen
  
  % PUBLIC PROPERTIES ==========================================================
  properties (Access = public)
    % Desired task-space states
    T_pelvis, V_pelvis, A_pelvis
    % Desired task-space states
    T_leg_l, V_leg_l, A_leg_l
    % Desired task-space states
    T_leg_r, V_leg_r, A_leg_r
  end % public properties
  
  % PROTECTED PROPERTIES =======================================================
  properties (Access = protected)
    % Nonlinear least squares function
    nlsFunction
    % Nonlinear least squares problem
    nlsProblem
    % Nonlinear least squares solver
    nlsSolver
  end % protected properties
  
  % PUBLIC METHODS =============================================================
  methods (Access = public)
    function obj = CassieIk
      %CASSIEIK Construct the Cassie Inverse Kinematics (IK) solver
      
      % Initialize the inverse kinematics nonlinear least squares function
      obj.nlsFunction = LegIKFunction;
      
      % Initialize the inverse kinematics nonlinear least squares problem
      obj.nlsProblem = NonlinearLeastSquaresProblem(...
        obj.nlsFunction, ...
        CassieCore.motorPositionLowerLimit, ...
        CassieCore.motorPositionUpperLimit);
      
      % Initialize the inverse kinematics nonlinear least squares solver
      obj.nlsSolver = NonlinearLeastSquaresSolver(obj.nlsProblem);
      obj.nlsSolver.setIterationLimit(5);
      obj.nlsSolver.setGTolerance(sqrt(eps));
      obj.nlsSolver.setXTolerance(sqrt(eps));
      
      % Initialize desired pelvis properties
      obj.T_pelvis = Transform3d;
      obj.V_pelvis = SpatialMotionVector;
      obj.A_pelvis = SpatialMotionVector;
      
      % Initialize desired pelvis properties
      obj.T_leg_l = Transform3d;
      obj.V_leg_l = SpatialMotionVector;
      obj.A_leg_l = SpatialMotionVector;
      
      % Initialize desired pelvis properties
      obj.T_leg_r = Transform3d;
      obj.V_leg_r = SpatialMotionVector;
      obj.A_leg_r = SpatialMotionVector;
    end % CassieIk
    
    function [q, dq, ddq] = evaluate(obj)
      %EVALUATE Evaluate the inverse kinematics
      
      if nargout >= 1
        % Set the desired relative foot transforms in the NLS function
        obj.nlsFunction.leftFootTransform = obj.T_pelvis\obj.T_leg_l;
        obj.nlsFunction.rightFootTransform = obj.T_pelvis\obj.T_leg_r;
        
        % Solve the inverse kinematics problem
        obj.nlsSolver.solve;
        
        % Get the desired motor positions from the inverse kinematics solver
        q = obj.nlsSolver.getSolution;
      end % if
      
      if nargout >= 2
        % Parse the state vector into its left/right components
        qm_l = q(1:5);
        qm_r = q(6:10);
        
        % Compute the joint states by assuming zero deflection in the springs
        qj_l = [0; 13*pi/180 - qm_l(4)];
        qj_r = [0; 13*pi/180 - qm_r(4)];
        
        % Compute the current forward kinematics
        [~, J_l] = generatedLeftLegKinematics(qm_l, qj_l);
        [~, J_r] = generatedRightLegKinematics(qm_r, qj_r);
        
        % Convert the open chain Jacobian into the constrained Jacobian with the
        % achilles rod constraint
        Jc_l = [J_l(:,1:3), J_l(:,4) - J_l(:,7), J_l(:,5)];
        Jc_r = [J_r(:,1:3), J_r(:,4) - J_r(:,7), J_r(:,5)];
        
        % Compute the desired motor velocities
        dq = [...
          Jc_l\getValue(getRotation(obj.T_pelvis\obj.T_leg_l)*(obj.V_leg_l - obj.T_leg_l\obj.T_pelvis*obj.V_pelvis)); ...
          Jc_r\getValue(getRotation(obj.T_pelvis\obj.T_leg_r)*(obj.V_leg_r - obj.T_leg_r\obj.T_pelvis*obj.V_pelvis))];
      end % if
      
      if nargout >= 3
        % Parse the state vector into left/right portions
        dqm_l = dq(1:5);
        dqm_r = dq(6:10);
        
        % Compute joint states by assuming zero deflection in the springs
        dqj_l = [0; - dqm_l(4)];
        dqj_r = [0; - dqm_r(4)];
        
        % Compute current forward kinematics
        dJ_l = generatedLeftLegJacobianTimeDerivative(qm_l, qj_l, dqm_l, dqj_l);
        dJ_r = generatedRightLegJacobianTimeDerivative(qm_r, qj_r, dqm_r, dqj_r);
        
        % Compute the motor Jacobian with the achilles rod constraint
        dJc_l = [dJ_l(:,1:3), dJ_l(:,4) - dJ_l(:,7), dJ_l(:,5)];
        dJc_r = [dJ_r(:,1:3), dJ_r(:,4) - dJ_r(:,7), dJ_r(:,5)];
        
        % Compute the desired motor accelerations
        % TODO: This needs to be corrected to account for frame differences
        ddq = [...
          Jc_l\getValue(obj.T_pelvis.getRotation*(obj.A_leg_l - obj.A_pelvis) - SpatialMotionVector(dJc_l*dqm_l)); ...
          Jc_r\getValue(obj.T_pelvis.getRotation*(obj.A_leg_r - obj.A_pelvis) - SpatialMotionVector(dJc_r*dqm_r))];
      end % if
    end % evaluate
  end % public methods
end % classdef
