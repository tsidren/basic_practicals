#include<stdio.h>

int fac(int);

int main(){
    int n=6;
    //printf("enter the number: \n");
    // scanf("%d", &n);

    printf("the factorial is: %d", fac(n));

    return 0;
}

int fac(int a)
{   if(a==1)
        return a;
    else
        return a*fac(a-1);
}