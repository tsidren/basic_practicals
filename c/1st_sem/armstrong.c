#include<stdio.h>
#include<math.h>
int main()
{   int a,c=0,d,b;
    printf("enter a number to check: \n");
    scanf("%d", &a);
    d=a;
    do
    {
        b=a%10;
        c=c+pow(b,3);
        a=a/10;
        
    } while (a!=0);
    
    if(c==d)
    printf("\n it is armstrong");
    else
    printf("\n it is not");


    return 0;
}
