function [output1] = Jwb_LeftToeBottom_to_RightToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = Jwb_LeftToeBottom_to_RightToeBottom_mex(var1);
    else
        coder.cinclude('Jwb_LeftToeBottom_to_RightToeBottom_src.h');
        
        output1 = zeros(3, 14);

        
        coder.ceval('Jwb_LeftToeBottom_to_RightToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
