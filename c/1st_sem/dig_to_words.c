#include<stdio.h>
#include<string.h>

int main(){
    char a[10][6]={"zero","one","two","three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    int b[12];
    printf("enter the number of digits: \n");
    scanf("%d", &n);
    printf("enter the numbers: \n");
    for(int i=0; i<n; i++) 
        scanf("%d", &b[i]);
    printf("the number in words is: \n");
    for(int i=0; i<n; i++) 
        printf("%s ", a[b[i]]);


printf("%s", a);


    return 0;
}