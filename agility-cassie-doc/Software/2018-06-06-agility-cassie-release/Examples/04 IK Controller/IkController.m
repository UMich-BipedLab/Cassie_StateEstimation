%IKCONTROLLER Inverse kinematics (IK) controller
%
% Syntax:
%   Implements a MATLAB System block for use in Simulink with inputs:
%     cassieOutputs (CassieOutBus)
%   and outputs:
%     userInputs (CassieUserInBus)
%     userLog (double(20,1))
%
% Description:
%   This class implements an inverse kinematics (IK) controller using a bounded
%   Nonlinear Least Squares (NLS) solver to enforce joint limits. The position
%   of the feet relative to the pelvis are commanded using the radio joysticks
%   and sliders.
%
% Radio Controls:
%   RadioButtonMap.LV = Left leg X position (m)
%   RadioButtonMap.LH = Left leg Y position (m)
%   RadioButtonMap.LS = Left leg Z position (m)
%   RadioButtonMap.RV = Right leg X position (m)
%   RadioButtonMap.RH = Right leg Y position (m)
%   RadioButtonMap.RS = Right leg Z position (m)

% Copyright 2017-2018 Agility Robotics

classdef IkController < ...
    matlab.System & ...
    matlab.system.mixin.Propagates & ...
    matlab.system.mixin.SampleTime %#codegen
  
  % PRIVATE PROPERTIES =========================================================
  properties (Access = private)
    % Proportional-Derivative (PD) controller
    pd
    % Inverse kinematics (IK) solver
    ik
  end % private properties
  
  % PROTECTED METHODS ==========================================================
  methods (Access = protected)
    % SYSTEM CLASS METHODS =====================================================
    function setupImpl(obj)
      %SETUPIMPL Initialize System object
      
      % Initialize the PD controller object
      obj.pd = CassiePd;
      obj.pd.setPositionErrorGain(repmat([200; 200; 200; 200; 200], 2, 1));
      obj.pd.setVelocityErrorGain(repmat([10; 10; 20; 20; 10], 2, 1));
      
      % Initialize the IK solver object
      obj.ik = CassieIk;
    end % setupImpl
    
    function [userInputs, userLog] = stepImpl(obj, cassieOutputs)
      %STEPIMPL System output and state update equations
      
      % Initialize the user input structure
      userInputs = CassieModule.getUserInStruct;
      
      % Check if the robot is calibrated and fully operational
      if cassieOutputs.isCalibrated
        % Get local copies of common variables
        ch = cassieOutputs.pelvis.radio.channel;
        
        % Define the foot zero positions wrt the pelvis frame
        p = [0; 0.135; -0.75];
        
        % Define the amplitude the feet can sweep through
        A = [0.5; 0.135; 0.35];
        
        % Set the desired left foot transform
        obj.ik.T_leg_l = Transform3d(Vector3d(...
          p(1) + A(1)*ch(RadioButtonMap.LV), ...
          p(2) - A(2)*ch(RadioButtonMap.LH), ...
          p(3) + A(3)*ch(RadioButtonMap.LS)));
        
        % Set the desired right foot transform
        obj.ik.T_leg_r = Transform3d(Vector3d(...
          p(1) + A(1)*ch(RadioButtonMap.RV), ...
          - p(2) - A(2)*ch(RadioButtonMap.RH), ...
          p(3) + A(3)*ch(RadioButtonMap.RS)));
        
        % Solve the inverse kinematics problem
        [q_des, dq_des] = obj.ik.evaluate;
        
        % Update the PD controller current state
        obj.pd.update(cassieOutputs);
        
        % Set the desired motor positions from the IK solver
        obj.pd.setDesiredPosition(q_des);
        obj.pd.setDesiredVelocity(dq_des);
        
        % Set the desired motor torques using a PD control law
        userInputs.torque = obj.pd.evaluate;
      end % if
      
      % Return the motor position and velocity error in the user log
      userLog = [...
        obj.pd.getPositionError;
        obj.pd.getVelocityError];
    end % stepImpl
    
    function resetImpl(~)
      %RESETIMPL Reset System object states
    end % resetImpl
    
    function name_1 = getInputNamesImpl(~)
      %GETINPUTNAMESIMPL Return input port names for System block
      name_1 = '';
    end % getInputNamesImpl
    
    function [name_1, name_2] = getOutputNamesImpl(~)
      %GETOUTPUTNAMESIMPL Return output port names for System block
      name_1 = '';
      name_2 = '';
    end % getOutputNamesImpl
    
    % PROPAGATES CLASS METHODS =================================================
    function [sz_1, sz_2] = getOutputSizeImpl(~)
      %GETOUTPUTSIZEIMPL Get sizes of output ports
      sz_1 = [1, 1];
      sz_2 = [20, 1];
    end % getOutputSizeImpl
    
    function [dt_1, dt_2] = getOutputDataTypeImpl(~)
      %GETOUTPUTDATATYPEIMPL Get data types of output ports
      dt_1 = 'CassieUserInBus';
      dt_2 = 'double';
    end % getOutputDataTypeImpl
    
    function [cp_1, cp_2] = isOutputComplexImpl(~)
      %ISOUTPUTCOMPLEXIMPL Complexity of output ports
      cp_1 = false;
      cp_2 = false;
    end % isOutputComplexImpl
    
    function [flag_1, flag_2] = isOutputFixedSizeImpl(~)
      %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports
      flag_1 = true;
      flag_2 = true;
    end % isOutputFixedSizeImpl
  end % protected methods
end % classdef
