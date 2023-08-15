function inter(X,Y)
    
    // find size of data, minimum and maximum x
    
    n=size(X,2);
    least=X(1);
    most=X(1);
    for i=2:n 
       if (X(i)<least)
          least=X(i)
       end
       if (X(i)>most)
          most=X(i)
       end
    end 
    
    // make table of divided differences
    
    table=zeros(n,n);
    table(:,1)=Y';
    for i=2:n
    for j=i:n
    table(j,i)=(table(j,i-1)-table(j-1,i-1))/(X(j)-X(j-i+1));
    end
    end
    
    // make graph of polynomial using Horner's method and plot
    
    x=[0:100]*(most-least)/100+least;
    y=table(n,n);
    for i=1:(n-1)
       y=y.*(x-X(n-i))+table(n-i,n-i);
    end
    //xbasc()
    plot2d(X,Y,style=-4)
    plot2d(x,y,style=4)

endfunction



X=[10 9 8 4 2 3]               // the x-coordinates need not be ordered
Y=[0.1 0.3 0.4 0.9 0.8 0.5]
inter(X,Y)
