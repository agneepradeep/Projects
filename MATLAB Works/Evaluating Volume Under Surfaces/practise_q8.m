clear
clc
syms x y z
Volume = int(int(16 - x^2 - 2*(y^2),y,-sqrt((16 - x^2)/2),sqrt((16 - x^2)/2)),x,-2*sqrt(2),2*sqrt(2));
disp(char(Volume))
viewSolid(z,0 + 0*x + 0*y,16 - x^2 - 2*(y^2),y,-sqrt((16 - x^2)/2),sqrt((16 - x^2)/2),x,-2*sqrt(2),2*sqrt(2))
grid on