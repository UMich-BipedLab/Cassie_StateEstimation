function [output1] = Jp_LeftToeFront(var1)
    if coder.target('MATLAB')
        [output1] = Jp_LeftToeFront_mex(var1);
    else
        coder.cinclude('Jp_LeftToeFront_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_LeftToeFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
