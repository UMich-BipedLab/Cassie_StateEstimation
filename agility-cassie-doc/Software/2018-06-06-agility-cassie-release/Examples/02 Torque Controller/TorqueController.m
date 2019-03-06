%TORQUECONTROLLER Torque controller
%
% Syntax:
%   Implements a MATLAB System block for use in Simulink with inputs:
%     cassieOutputs (CassieOutBus)
%   and outputs:
%     userInputs (CassieUserInBus)
%
% Description:
%   This class implements a simple torque controller for basic robot systems
%   checking. The radio is used to command torques to each motor individually.
%   This is useful for demonstrating how to command motor torques and interface
%   with the radio. Additionally this provides a way of checking motor torque
%   directions before implementing PD control in case amplifier settings have
%   been altered. The safeties will stop the joints from moving beyond the
%   specified range of motion.
%
% Radio Controls:
%   RadioButtonMap.S1 = Motor selector (1 to 10)
%   RadioButtonMap.RV = Torque command (+/- 20Nm)

% Copyright 2017-2018 Agility Robotics

classdef TorqueController < ...
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
      
      % Check if the robot is calibrated and fully operational
      if cassieOutputs.isCalibrated
        % Get local copies of common variables
        channel = cassieOutputs.pelvis.radio.channel;
        nMotors = numel(userInputs.torque);
        
        % Get the desired active motor index
        ind = clamp(ceil(nMotors*(1 + channel(RadioButtonMap.S1))/2), ...
          1, nMotors);
        
        % Set the desired motor torques
        userInputs.torque(ind) = 20*channel(RadioButtonMap.RV);
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
