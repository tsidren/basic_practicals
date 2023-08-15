#include<stdio.h>

int main(){

    int a=0;
    for(int i=1;i<=10;i++)
        a = a + 8*i;
    printf("%d", a);

    return 0; 
}