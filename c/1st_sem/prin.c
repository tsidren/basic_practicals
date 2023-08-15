#include<stdio.h>
#include<conio.h>
int main()
{
    int n,last_digit, sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    while(n!=0)
    {
        last_digit=n%10;
        n=n/10;
        if (last_digit%2!=0)
            sum = sum + last_digit;
    }
printf("%d", sum);
  
  return 0;
}