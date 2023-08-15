#include<stdio.h>
#include<stdlib.h>


void prime(int);

int main(){
    int a=13;

    prime(a);
    return 0;
}


void prime(int a)
{
    for (int i=2;i<a;i++)
        if(a%i==0)
            { printf("not ");
              exit(0);
            }
    printf("prime");
}