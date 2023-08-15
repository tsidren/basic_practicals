// 1!+2!+3!+4!+.....n!

#include<stdio.h>
int main(){
    int a=21123,b=10000,c;
   while(a!=0)
    { 
        c=a/b;              // a21123
        b=b/10;
        a=a%(c*b);
        printf("%d\n", c);

    }

    return 0;
}

/*
i = 1
sum = 1
j = 1  --->  2


i = 2
sum = 3 
j = 2 ---> 6

i = 3
sum = 9 
j = 6 ----> 12

i = 4
sum = 21
j = 12 ---> 

i = 
sum = 
j = 


*/
