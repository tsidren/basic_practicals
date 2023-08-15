#include <stdio.h>

int main(){
    // int a=0;
    // for(int i=1;i<=10;i++)
    //     a += i;
    // printf("%d", a);

    int b=0,i=1;
    do{
        b += i;
        i++;
    }while(i<=10);

    printf("%d", b);


    return 0;
}