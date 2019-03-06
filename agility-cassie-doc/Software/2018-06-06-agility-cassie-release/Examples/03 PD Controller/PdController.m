%PDCONTROLLER PD controller
%
% Syntax:
%   Implements a MATLAB System block for use in Simulink with inputs:
%     cassieOutputs (CassieOutBus)
%   and outputs:
%     userInputs (CassieUserInBus)
%     userLog (double(20,1))
%
% Description:
%   This class implements a simple PD controller for basic robot systems
%   checking. The gains can be edited on the fly using the system block dialog
%   in the simulator or using Simulink Real-Time Explorer interface when on
%   hardware. This is useful for checking and tuning joint level PD gains. The
%   desired position corresponds to a crouched standing pose.

% Copyright 2017-2018 Agility Robotics

classdef PdController < ...
    matlab.System & ...
    matlab.system.mixin.Propagates & ...
    matlab.system.mixin.SampleTime %#codegen
  
  % CONSTANT PROPERTIES ========================================================
  properties (Constant)
    % Motor positions for a nominal standing pose [rad]
    standingPose = repmat([0; 0; 0.5; -1.2; -1.6], 2, 1)
  end % constant properties
  
  % PUBLIC PROPERTIES ==========================================================
  properties
    % Position Error Gains
    Kp = zeros(5,1)
    % Velocity Error Gains
    Kv = zeros(5,1)
  end % public properties
  
  % PROTECTED PROPERTIES =======================================================
  properties (Access = protected)
    % PD controller
    pd
  end % protected properties
  
  % PROTECTED METHODS ==========================================================
  methods (Access = protected)
    % SYSTEM CLASS METHODS =====================================================
    function setupImpl(obj)
      %SETUPIMPL Initialize System object
      
      % Initialize the PD controller object
      obj.pd = CassiePd;
      obj.pd.setDesiredPosition(obj.standingPose);
      obj.pd.setDesiredVelocity(zeros(10,1));
    end % setupImpl
    
    function [userInputs, userLog] = stepImpl(obj, cassieOutputs)
      %STEPIMPL System output and state update equations
      
      % Initialize the user input structure
      userInputs = CassieModule.getUserInStruct;
      
      % Check if the robot is calibrated and fully operational
      if cassieOutputs.isCalibrated
        % Update the PD controller current state
        obj.pd.update(cassieOutputs);
        
        % Set the PD gains
        obj.pd.setPositionErrorGain(repmat(obj.Kp, 2, 1));
        obj.pd.setVelocityErrorGain(repmat(obj.Kv, 2, 1));
        
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
