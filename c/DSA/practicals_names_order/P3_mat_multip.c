#include<stdio.h>

int main()
{   int a[3][3], b[3][3], c[3][3], i, j, k;
    
    printf("enter the elements of first matrix.");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);
            
    printf("enter the elements of second matrix.");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &b[i][j]);
        
    for(i=0; i<3; i++)
       for(j=0; j<3; j++)
           {    c[i][j] = 0;
                for(k=0; k<3; k++)
                    c[i][j] += a[i][k] * b[k][j];     
            }
    
    printf("matrix after multiplication is: ");
    for(i=0; i<3; i++)
        {   printf("\n");
            for(j=0; j<3; j++)
                printf("%d\t", c[i][j]);
        }
return 0;
} 