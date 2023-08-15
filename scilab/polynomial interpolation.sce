x = [0, 1, 2, 3];
y = [1, 4, 9, 16];
xx = linspace(0, 3, 100);
yy = interp1(x, y, xx, 'spline');
plot(x, y, 'o', xx, yy);
xlabel('x');
ylabel('y');
title('Interpolation using spline method');
