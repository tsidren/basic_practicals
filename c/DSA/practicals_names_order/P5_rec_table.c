#include<stdio.h>

void MultiplicationTable(int, int);

int main()
{   int num;

    printf("Enter a number you want table for: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d is:",num);
    MultiplicationTable(num, 1);
}

void MultiplicationTable(int num, int i)
{   printf("\n");
    printf("%d X %d = %d", num, i, num*i);
    
    if(i<10)
        return MultiplicationTable(num, i+1);
}
