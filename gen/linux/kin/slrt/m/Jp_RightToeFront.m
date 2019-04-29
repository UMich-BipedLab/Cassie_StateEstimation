function [output1] = Jp_RightToeFront(var1)
    if coder.target('MATLAB')
        [output1] = Jp_RightToeFront_mex(var1);
    else
        coder.cinclude('Jp_RightToeFront_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_RightToeFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
