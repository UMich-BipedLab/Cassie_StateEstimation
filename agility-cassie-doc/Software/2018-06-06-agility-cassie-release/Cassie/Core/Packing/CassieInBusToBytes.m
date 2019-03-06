%CASSIEINBUSTOBYTES Convert a CassieInBus bus to a byte array.

% Copyright 2018 Agility Robotics
% Generated automatically by BusModule.generatePackingSystem

classdef CassieInBusToBytes < ...
    matlab.System & ...
    matlab.system.mixin.Propagates %#codegen

  % PROTECTED METHODS =====================================================
  methods (Access = protected)
    % SYSTEM CLASS METHODS ================================================
    function setupImpl(~)
      %SETUPIMPL Initialize System object.
    end % setupImpl

    function bytes = stepImpl(~, bus)
      %STEPIMPL System output and state update equations.

      bytes = [...
        typecast(bus.pelvis.radio.channel', 'uint8')'; ...
        uint8(bus.pelvis.sto); ...
        uint8(bus.pelvis.piezoState); ...
        bus.pelvis.piezoTone; ...
        typecast(bus.leftLeg.hipRollDrive.controlWord', 'uint8')'; ...
        typecast(single(bus.leftLeg.hipRollDrive.torque)', 'uint8')'; ...
        typecast(bus.leftLeg.hipYawDrive.controlWord', 'uint8')'; ...
        typecast(single(bus.leftLeg.hipYawDrive.torque)', 'uint8')'; ...
        typecast(bus.leftLeg.hipPitchDrive.controlWord', 'uint8')'; ...
        typecast(single(bus.leftLeg.hipPitchDrive.torque)', 'uint8')'; ...
        typecast(bus.leftLeg.kneeDrive.controlWord', 'uint8')'; ...
        typecast(single(bus.leftLeg.kneeDrive.torque)', 'uint8')'; ...
        typecast(bus.leftLeg.footDrive.controlWord', 'uint8')'; ...
        typecast(single(bus.leftLeg.footDrive.torque)', 'uint8')'; ...
        typecast(bus.rightLeg.hipRollDrive.controlWord', 'uint8')'; ...
        typecast(single(bus.rightLeg.hipRollDrive.torque)', 'uint8')'; ...
        typecast(bus.rightLeg.hipYawDrive.controlWord', 'uint8')'; ...
        typecast(single(bus.rightLeg.hipYawDrive.torque)', 'uint8')'; ...
        typecast(bus.rightLeg.hipPitchDrive.controlWord', 'uint8')'; ...
        typecast(single(bus.rightLeg.hipPitchDrive.torque)', 'uint8')'; ...
        typecast(bus.rightLeg.kneeDrive.controlWord', 'uint8')'; ...
        typecast(single(bus.rightLeg.kneeDrive.torque)', 'uint8')'; ...
        typecast(bus.rightLeg.footDrive.controlWord', 'uint8')'; ...
        typecast(single(bus.rightLeg.footDrive.torque)', 'uint8')'];
    end % stepImpl

    function resetImpl(~)
      %RESETIMPL Reset System object states.
    end % resetImpl

    function name_1 = getInputNamesImpl(~)
      %GETINPUTNAMESIMPL Return input port names for System block.
      name_1 = '';
    end % getInputNamesImpl

    function name_1 = getOutputNamesImpl(~)
      %GETOUTPUTNAMESIMPL Return output port names for System block.
      name_1 = '';
    end % getOutputNamesImpl

    % PROPAGATES CLASS METHODS ============================================
    function sz_1 = getOutputSizeImpl(~)
      %GETOUTPUTSIZEIMPL Get sizes of output ports.
      sz_1 = [91, 1];
    end % getOutputSizeImpl

    function dt_1 = getOutputDataTypeImpl(~)
      %GETOUTPUTDATATYPEIMPL Get data types of output ports.
      dt_1 = 'uint8';
    end % getOutputDataTypeImpl

    function cp_1 = isOutputComplexImpl(~)
      %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
      cp_1 = false;
    end % isOutputComplexImpl

    function flag_1 = isOutputFixedSizeImpl(~)
      %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
      flag_1 = true;
    end % isOutputFixedSizeImpl
  end % methods
end % classdef