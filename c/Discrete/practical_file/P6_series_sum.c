#include<stdio.h>
int main()
{
    int i,j,r,prod=1,sum=0,count=0;
    int k;
    printf("Enter the number of terms: ");
    scanf("%d",&r);
    
    for(i=1;i<=r;i++)
    {
        k=(i*(i-1)/2);
        for(j=k+1;j<=i*(i+1)/2;j++)
            prod = prod*j;
            
        
        sum+=prod;
        prod=1;
        
        
    }
    printf("The answer is %d", sum);
}