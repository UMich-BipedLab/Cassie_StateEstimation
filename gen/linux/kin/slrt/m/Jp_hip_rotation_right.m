function [output1] = Jp_hip_rotation_right(var1)
    if coder.target('MATLAB')
        [output1] = Jp_hip_rotation_right_mex(var1);
    else
        coder.cinclude('Jp_hip_rotation_right_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_hip_rotation_right_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
