clear
clc
syms x
f = x;
g = x^2 - 2*x;
Area = int(f-g,x,0,3);
fprintf('Area between the curves %s and %s is %s',char(f),char(g),char(abs(Area)))
X1 = 0:0.01:3;
X2 = X1;
Y1 = subs(f,x,X1);
Y2 = subs(g,x,X2);
plot(X1,Y1,'r','Linewidth',1.5)
hold on
plot(X2,Y2,'c','Linewidth',1.5)
legend(char(f),char(g))
grid on
xlabel('X-axis')
ylabel('Y-axis')
hold off
