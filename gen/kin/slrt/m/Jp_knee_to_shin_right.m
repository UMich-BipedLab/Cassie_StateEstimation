function [output1] = Jp_knee_to_shin_right(var1)
    if coder.target('MATLAB')
        [output1] = Jp_knee_to_shin_right_mex(var1);
    else
        coder.cinclude('Jp_knee_to_shin_right_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_knee_to_shin_right_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
