%NULLCONTROLLER Null controller
%
% Syntax:
%   Implements a MATLAB System block for use in Simulink with inputs:
%     cassieOutputs (CassieOutBus)
%   and outputs:
%     userInputs (CassieUserInBus)
%
% Description:
%   This controller can be used as a template to start the construction of new
%   controllers. It shows how to implement a MATLAB System class that interfaces
%   with the Simulink model and buses. The controller recieves the cassieOutputs
%   structure as a input and returns the userInputs as a output. The structure
%   of these buses can be explored by running the following commands in the
%   MATLAB command window:
%
%     cassieOutputs = CassieModule.getOutStruct
%     userInputs = CassieModule.getUserInStruct
%
%  Even though this controller commands zero torque, the underlying software
%  safeties are still engaged. This means when the motor power is on and the STO
%  is disabled, the robot will apply torque to keep motors within the specified
%  range of motion.

% Copyright 2017-2018 Agility Robotics

classdef NullController < ...
    matlab.System & ...
    matlab.system.mixin.Propagates & ...
    matlab.system.mixin.SampleTime %#codegen
  
  % PROTECTED METHODS ==========================================================
  methods (Access = protected)
    % SYSTEM CLASS METHODS =====================================================
    function setupImpl(~)
      %SETUPIMPL Initialize System object
    end % setupImpl
    
    function userInputs = stepImpl(~, cassieOutputs)
      %STEPIMPL System output and state update equations
      
      % Initialize user input structure
      userInputs = CassieModule.getUserInStruct;
      
      % Get the EtherCAT master state
      masterState = cassieOutputs.pelvis.targetPc.etherCatStatus(2);
      
      % Check if the EtherCAT master state is fully operational
      if masterState == EtherCatMasterState.OP
        % Set the first element of the telemetry vector to one
        userInputs.telemetry(1) = ones(1, 1, 'int16');
      end % if
      
      % Check if the robot is calibrated and fully operational
      if cassieOutputs.isCalibrated
        % Set the second element of the telemetry vector to one
        userInputs.telemetry(2) = ones(1, 1, 'int16');
      end % if
    end % stepImpl
    
    function resetImpl(~)
      %RESETIMPL Reset System object states
    end % resetImpl
    
    function name_1 = getInputNamesImpl(~)
      %GETINPUTNAMESIMPL Return input port names for System block
      name_1 = '';
    end % getInputNamesImpl
    
    function name_1 = getOutputNamesImpl(~)
      %GETOUTPUTNAMESIMPL Return output port names for System block
      name_1 = '';
    end % getOutputNamesImpl
    
    % PROPAGATES CLASS METHODS =================================================
    function sz_1 = getOutputSizeImpl(~)
      %GETOUTPUTSIZEIMPL Get sizes of output ports
      sz_1 = [1, 1];
    end % getOutputSizeImpl
    
    function dt_1 = getOutputDataTypeImpl(~)
      %GETOUTPUTDATATYPEIMPL Get data types of output ports
      dt_1 = 'CassieUserInBus';
    end % getOutputDataTypeImpl
    
    function cp_1 = isOutputComplexImpl(~)
      %ISOUTPUTCOMPLEXIMPL Complexity of output ports
      cp_1 = false;
    end % isOutputComplexImpl
    
    function flag_1 = isOutputFixedSizeImpl(~)
      %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports
      flag_1 = true;
    end % isOutputFixedSizeImpl
  end % protected methods
end % classdef
