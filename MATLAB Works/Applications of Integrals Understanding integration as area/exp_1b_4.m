clear
clc
syms x
f = x^3 - 2*x +5;
Area = int(f,x,1,2);
fprintf('Area between the curves %s and x = 1 and x = 2 is %s', char(f),char(abs(Area)))
X1 = 0:0.01:3;
Y1 = subs(f,x,X1);
plot(X1,Y1,'c','Linewidth',1.5);
G2 = 1 + 0*x;
X2 = 0:0.01:subs(f,x,3);
Y2 = subs(G2,x,X2);
G3 = 2 + 0*x;
Y3 = subs(G3,x,X2);
hold on
grid on
plot(Y2,X2,'r','Linewidth',1.5);
plot(Y3,X2,'g','Linewidth',1.5);
legend(char(f),'x = 1','x = 2')
title(char(f))
grid on
xlabel('X-axis')
ylabel('Y-axis')
hold off