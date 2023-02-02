clear
clc
syms y
f = y^3;
g = y^2;
Area = int(f-g,y,0,1);
fprintf("Area between the curves %s and %s is %s",char(f),char(g),char(abs(Area)))
Y1 = 0:0.01:1;
Y2 = Y1;
X1 = subs(f,y,Y1);
X2 = subs(g,y,Y2);
plot(X1,Y1,'g','Linewidth',1.5)
hold on
plot(X2,Y2,'y','Linewidth',1.5)
legend(char(f),char(g))
grid on
xlabel('X-axis')
ylabel('Y-axis')
hold off