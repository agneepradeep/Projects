clear
clc
syms x y z
Volume = int(int(sin(x)*cos(y),x,0,pi/2),y,0,pi/2);
disp(char(Volume))
viewSolid(z,0 + 0*x + 0*y,sin(x)*cos(y),y,0 + 0*x,pi/2 + 0*x,x,0,pi/2)
grid on