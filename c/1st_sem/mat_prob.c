#include <stdio.h>
#include <math.h>

int main()
{
    int df;
    
    for(int i = 100;i <=20000; i++)
    { 
    df = i/100 + i%100*(pow(10, (int)(log10(i))-1 ) );
    
    if (df==(2*i+20))
    printf("%f", i/100.0); 
        
    }
    return 0;
}
