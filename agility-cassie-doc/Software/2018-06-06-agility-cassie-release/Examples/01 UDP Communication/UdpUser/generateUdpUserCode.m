function generateUdpUserCode()
  %GENERATEUDPUSERCODE Generates C code needed by user computer UDP example
  %
  % Run this function to create the C headers and implementation files needed to
  % compile the udpuser example program.

  % Copyright 2018 Agility Robotics
  
  % Output directory for generated files
  outdir = [fileparts(mfilename('fullpath')) '/'];
  
  % Generate C files for CassieOutBus and CassieUserInBus
  CodegenModule.generatePackingCode(...
    CassieModule.getOutStruct('annotated'), outdir, 'singlefloats');
  CodegenModule.generatePackingCode(...
    CassieModule.getUserInStruct('annotated'), outdir, 'singlefloats');
end % generateUdpUserCCode
