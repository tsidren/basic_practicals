function dydx = ode_example(x, y)
  dydx = y + x;
endfunction

x0 = 0;
y0 = 1;
xf = 2;
h = 0.1;

x = x0:h:xf;
y(1) = y0;
for i = 2:length(x)
  k1 = h*ode_example(x(i-1), y(i-1));
  k2 = h*ode_example(x(i-1)+h/2, y(i-1)+k1/2);
  k3 = h*ode_example(x(i-1)+h/2, y(i-1)+k2/2);
  k4 = h*ode_example(x(i-1)+h, y(i-1)+k3);
  y(i) = y(i-1) + (k1 + 2*k2 + 2*k3 + k4)/6;
end

plot(x, y);
xlabel('x');
ylabel('y');
title('Solution of ordinary differential equation using Scilab');
