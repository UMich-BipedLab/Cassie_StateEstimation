function [output1] = Jp_RightToeBottom_to_LeftToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = Jp_RightToeBottom_to_LeftToeBottom_mex(var1);
    else
        coder.cinclude('Jp_RightToeBottom_to_LeftToeBottom_src.h');
        
        output1 = zeros(3, 14);

        
        coder.ceval('Jp_RightToeBottom_to_LeftToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
