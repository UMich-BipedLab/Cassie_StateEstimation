function [ output ] = RightJacobian_SEK3( xi )
output = Lie.LeftJacobian_SEK3(-xi);
end

