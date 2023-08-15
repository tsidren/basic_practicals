a = 0.3
//a = input("enter the phase: ");
clf
clc

x = [0:0.5:2*%pi];
y = [0:0.5:2*%pi];

phase = a*%pi;

y = sin(x);
z = sin(phase+x);
t = y + z;

//plot(x,y,'b','LineWidth',3);
//plot(x,z,'r','LineWidth',3);
//plot(x,t,'g','LineWidth',3);

plot(x,y,'.b-');
plot(x,z,'b-.');
plot(x,t,'g','LineWidth',3);

xgrid;
xlabel('x');
ylabel('sin(x), sin(pi+x), sum');
title('plot of sin(x), sin(pi+x) and sum');
legend('sin(x)', 'sin(pi+x)', 'sum', 3);




