%CASSIEPD Proportional-Derivative (PD) controller for Cassie
%
% Description:
%   This implements a Proportional-Derivative (PD) controller for the Cassie
%   robot.

% Copyright 2018 Agility Robotics

classdef CassiePd < handle %#codegen
  
  % PROTECTED PROPERTIES =======================================================
  properties (Access = protected)
    % Position error gains
    Kp = zeros(10,1)
    % Velocity error gains
    Kv = zeros(10,1)
    % Desired position vector
    q_des = zeros(10,1)
    % Desired velocity vector
    dq_des = zeros(10,1)
    % Current position vector
    q = zeros(10,1)
    % Current velocity vector
    dq = zeros(10,1)
  end % protected properties
  
  % PUBLIC METHODS =============================================================
  methods (Access = public)
    function update(obj, cassieOutputs)
      %UPDATE Update the PD controller
      
      % Set the current position and velocity vectors
      obj.q = CassieModule.getDriveProperty(cassieOutputs, 'position');
      obj.dq = CassieModule.getDriveProperty(cassieOutputs, 'velocity');
    end % update
    
    function ddq = evaluate(obj)
      %EVALUATE Evaluate the PD controller
      ddq = - obj.Kp.*obj.getPositionError - obj.Kv.*obj.getVelocityError;
    end % evaluate
  end % public methods
  
  % GET/SET METHODS ============================================================
  methods
    function e = getPositionError(obj)
      %GETPOSITIONERROR Get position error
      e = obj.q - obj.q_des;
    end % getPositionError
    
    function de = getVelocityError(obj)
      %GETVELOCITYERROR Get velocity error
      de = obj.dq - obj.dq_des;
    end % getVelocityError
    
    function setPositionErrorGain(obj, Kp)
      %SETPOSITIONERRORGAIN Set the position error gain
      validateattributes(Kp, {'numeric'}, {'nonnegative', 'size', [10, 1]}, '');
      obj.Kp = Kp;
    end % setPositionErrorGain
    
    function setVelocityErrorGain(obj, Kv)
      %SETVELOCITYERRORGAIN Set the velcoity error gain
      validateattributes(Kv, {'numeric'}, {'nonnegative', 'size', [10, 1]}, '');
      obj.Kv = Kv;
    end % setVelocityErrorGain
    
    function setDesiredPosition(obj, q_des)
      %SETDESIREDPOSITION Set the desired position
      validateattributes(q_des, {'numeric'}, {'size', [10, 1]}, '');
      lb = CassieCore.motorPositionLowerLimit;
      ub = CassieCore.motorPositionUpperLimit;
      obj.q_des = median([lb, q_des, ub], 2);
    end % setDesiredPosition
    
    function setDesiredVelocity(obj, dq_des)
      %SETDESIREDVELOCITY Set the desired velocity
      validateattributes(dq_des, {'numeric'}, {'size', [10, 1]}, '');
      obj.dq_des = dq_des;
      %TODO: Add velocity limits
      %lb = CassieCore.motorVelocityLowerLimit;
      %ub = CassieCore.motorVelocityUpperLimit;
      %obj.dq_des = median([lb, dq_des, ub], 2);
    end % setDesiredVelocity
  end % get/set methods
end % classdef
