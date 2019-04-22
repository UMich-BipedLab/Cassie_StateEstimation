function [output1] = Jvs_VectorNav_to_LeftToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = Jvs_VectorNav_to_LeftToeBottom_mex(var1);
    else
        coder.cinclude('Jvs_VectorNav_to_LeftToeBottom_src.h');
        
        output1 = zeros(3, 14);

        
        coder.ceval('Jvs_VectorNav_to_LeftToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
