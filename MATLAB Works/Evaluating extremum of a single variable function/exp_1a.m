clear
clc
syms x;
F(x) = input('Type The Function :');
Limits = input('Type Limits [a,b] :');
LowerLimit = Limits(1);
UpperLimit = Limits(2);
X = linspace(LowerLimit,UpperLimit,1000);
[lmax_f,MaxId] = findpeaks(double(F(X)));
lmax_x = round(X(MaxId),4);
LocalMaxima = double(F(lmax_x));
[lmin_f,MinId] = findpeaks(double(-F(X)));
lmin_x = round(X(MinId),4);
LocalMinima = double(F(lmin_x));
disp('Local maximum occur at x = ')
disp(lmax_x)
disp('The Local Maximum value(s) of the function are')
disp(LocalMaxima)
disp('Local Minima occur at x = ')
disp(lmin_x)
disp('The Local Minimum value(s) of the function are')
disp(LocalMinima)

GlobalMaxima = 0;
GlobalMaxima_Point = 0;
GlobalMinima = 0;
GlobalMinima_Point = 0;

for i = LowerLimit:0.1:UpperLimit
    if F(i) >= GlobalMaxima
        GlobalMaxima = F(i);
        GlobalMaxima_Point = i;
    elseif F(i) < GlobalMinima
        GlobalMinima = F(i);
        GlobalMinima_Point = i;
    end
end
disp('The Global Maxima occur at x = ')
disp(GlobalMaxima_Point)
disp(['The Global Maximum value is ',char(GlobalMaxima)])
disp('The Global Minima occur at x = ')
disp(GlobalMinima_Point)
disp(['The Global Minimum value is ',char(GlobalMinima)])

plot(X,F(X),'c','Linewidth',1.2)
hold on
plot(lmax_x,LocalMaxima,'ob','Linewidth',2,'MarkerSize',8)
plot(lmin_x,LocalMinima,'oy','Linewidth',2,'MarkerSize',8)
plot(GlobalMaxima_Point,GlobalMaxima,'og','Linewidth',2,'MarkerSize',8)
plot(GlobalMinima_Point,GlobalMinima,'or','Linewidth',2,'MarkerSize',8)
title(char(F(x)))
legend(char(F(x)),'Local Maxima','Local Minima','Global Maxima','Global Minima')
xlabel('X-Axis')
ylabel('Y-Axis')
grid on
hold off
