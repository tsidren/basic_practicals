#include<stdio.h>
#include<conio.h>
int main()
{
            int n,sum=0,ans=1;
            printf("enter number: \n");
            scanf("%d",&n);
        
            for(int i=1;i<=n;i++)
        {
            ans=ans*i;
            sum=sum + ans;
        }

            printf("the sum of the series is: %d", sum);
             return 0;

}