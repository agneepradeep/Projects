clear
clc
syms x
f = x^3 - 2*x +5;
Area = int(f,x,1,2);
disp(char(abs(Area)))
X1 = 1:0.01:2;
Y1 = subs(f,x,X1);
plot(X1,Y1,'c','Linewidth',1.5);
hold on
grid on
legend(char(f))
title(char(f))
grid on
xlabel('X-axis')
ylabel('Y-axis')
hold off
