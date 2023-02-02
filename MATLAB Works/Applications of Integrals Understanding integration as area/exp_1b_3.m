clear
clc
syms y
f = y^2;
g = 2 + y;
Area = int(g-f,y,0,2);
fprintf('Area between the curves %s and %s is %s',char(f),char(g),char(Area));
Y = 0:0.01:2;
F = subs(f,y,Y);
G = subs(g,y,Y);
plot(F,Y,'b','LineWidth',1.5)
hold on
plot(G,Y,'g','Linewidth',1.5)
legend(char(f),char(g))
grid on
xlabel('X-Axis');
ylabel('Y-Axis');
hold off