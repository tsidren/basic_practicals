// exponential calculations

#include <stdio.h>
#include <math.h>

double exponential(int, int);
long fact(int );

int main()
{   int iterations, x, t=1;
    printf("enter the value of x: ");
    scanf("%d", &x);
    while(t)
    {   printf("enter the value of iterations: ");
        scanf("%d", &iterations);
        if(iterations<10)
            printf("it is not precise. again ");
        else
            t=0;
    }
    printf("the value if exponential is: %lf ", exponential(x, iterations) );
    return 0;
}

double exponential(int x, int n)
{   double sum = 0;
    for(int i=1; i<n; i++)
        sum = sum + pow(x,i)/fact(i);
    return 1+sum;
}

long fact(int n )
{   if(n == 1)
        return 1;
    else 
        return fact(n-1)*n;
}