function [ output ] = RightJacobian_SE3( xi )
output = Lie.LeftJacobian_SE3(-xi);
end

