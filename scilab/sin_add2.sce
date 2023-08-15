

y = 0
//y = y + (4/%pi)*(sin(n*%pi*/10));
function ss()
    
endfunction
clf
clc

x = 0:0.01:25
for n=1:2:1000
    clf
    y = y + (4/%pi)*(sin(n*%pi*x/10)/n);
    plot(x, y,'LineWidth',3);
    sleep(300);
end

plot(x, y,'LineWidth',3);
