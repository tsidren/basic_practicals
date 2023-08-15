
w = [0:0.001:10];

//x = sin(%pi+w) + sin(w) + sin(a*%pi+w);
t = sin(2*w)

function [x] = fcc(u)
    x = sin(%pi+w) + sin(2*w) + sin(u*%pi+w);
endfunction


for a=0:0.01:6
    clf
    plot(w, fcc(a),'LineWidth',3);
    plot(w, t,'r', 'LineWidth',3);
    //sleep(16);
end


