
#include<stdio.h>

int main()
{
    int Arr1[200][200],Arr2[200][200],Sum[200][200]={0};
    int n,m,k,l;
    printf("Enter the no of rows of Arr1\n");
    scanf("%d",&n);
    printf("Enter the no of columns of Arr1\n");
    scanf("%d",&m);
    printf("Enter the no of rows of Arr2\n");
    scanf("%d",&k);
    printf("Enter the no of columns of Arr2\n");
    scanf("%d",&l);
    if(n!=k)
    {
        printf("Addition not posssible.");
    }
    else if(m!=l)
    {
        printf("Addition not posssible.");
    }
    
    else 
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                printf("enter the element of A%d%d : ",i,j);
                scanf("%d",&Arr1[i][j]);
            }
        }
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<l;j++)
            {
                printf("enter the element of B%d%d : ",i,j);
                scanf("%d",&Arr2[i][j]);
            }
        }
    
    
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               Sum[i][j]=Arr1[i][j] + Arr2[i][j];
            }
        }
        printf("Sum of Array is:\n");
   for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                printf("%d   ",Sum[i][j]);
                
            }
            printf('\n');
        }

    }
    return 0;
}