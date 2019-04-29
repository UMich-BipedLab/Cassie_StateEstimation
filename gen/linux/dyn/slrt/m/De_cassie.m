function [output1] = De_cassie(var1)
    if coder.target('MATLAB')
        [output1] = De_cassie_mex(var1);
    else
        coder.cinclude('De_cassie_src.h');
        
        output1 = zeros(20, 20);

        
        coder.ceval('De_cassie_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
