function [output1] = Ce_cassie(var1,var2)
    if coder.target('MATLAB')
        [output1] = Ce_cassie_mex(var1,var2);
    else
        coder.cinclude('Ce_cassie_src.h');
        
        output1 = zeros(20, 20);

        
        coder.ceval('Ce_cassie_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
