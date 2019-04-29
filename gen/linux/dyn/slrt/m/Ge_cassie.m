function [output1] = Ge_cassie(var1)
    if coder.target('MATLAB')
        [output1] = Ge_cassie_mex(var1);
    else
        coder.cinclude('Ge_cassie_src.h');
        
        output1 = zeros(20, 1);

        
        coder.ceval('Ge_cassie_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
