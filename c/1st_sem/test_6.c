#include <math.h>
#include <stdio.h>

double swap(double); 

int main()
{
    double i=26.5; 
   
    for(int a = 1;a <=5; a++, i=i+0.01)
    {   printf("i= %f  |  swap(i)= %f   |  i*2+0.20= %f  |  condition= %d\n", i, swap(i), i*2+0.20, swap(i)==(2*i+0.20));
        if ( swap(i)==(2*i+0.20) )
            printf("            %f\n", i); 
    }   

    // printf("%d", 53.260000==53.260000);
    return 0;
}

double swap (double t)
{   double g;
    double a, b;
    b = modf(t, &a);
    g = a/100+b*100;
    return g;
}
