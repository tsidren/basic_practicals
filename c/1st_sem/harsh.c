#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int i,fact=1;
    for(i=5;i>0;i--)
    {
    fact *=i;
    }
    
    printf( "factorial is %d",fact);
    getch();
}