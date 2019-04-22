function [output1] = Jp_hip_abduction_left(var1)
    if coder.target('MATLAB')
        [output1] = Jp_hip_abduction_left_mex(var1);
    else
        coder.cinclude('Jp_hip_abduction_left_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_hip_abduction_left_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
