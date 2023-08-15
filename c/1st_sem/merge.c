#include <stdio.h>
int main()
{ int n1,n2,n3;           
    printf("\nEnter the size of first array ");
    scanf("%d",&n1);
    printf("\nEnter the size of second array ");
    scanf("%d",&n2);
    
    n3=n1+n2;
    printf("\nEnter the sorted array elements");
    int a[n1],b[n2],c[n3];     
    for(int i=0;i<n1;i++)     
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    int k=n1;
    printf("\nEnter the sorted array elements");
    for(int i=0;i<n2;i++)      
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    printf("\nThe merged array..\n");
    for(int i=0;i<n3;i++)
    printf("%d ",c[i]);        
    
    printf("\nAfter sorting...\n");
    for(int i=0;i<n3;i++)         
    {
        int temp;
        for(int j=i+1; j<n3 ;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }   
    
    for(int i=0 ; i<n3 ; i++)      
    {
        printf(" %d ",c[i]);
    }
    return 0;   
}

/*

Enter the size of first array 4

Enter the size of second array 3

Enter the sorted array elements1  
2
3
4

Enter the sorted array elements1
2
3

The merged array..
1 2 3 4 1 2 3
After sorting...
 4  3  3  2  2  1  1
*/
