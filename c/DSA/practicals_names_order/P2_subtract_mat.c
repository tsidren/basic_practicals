#include<stdio.h>

int main()
{   int n, m;
    printf("enter the size of matrix.\n");
    scanf("%d %d", &n, &m);
    int a[n][m], b[n][m], i, j;
    int c[n][m];
    
    printf("enter the elements of first matrix. ");
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    
    printf("enter the elements of second matrix. ");
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            {   scanf("%d", &b[i][j]);
                c[i][j] = a [i][j] - b[i][j];
            }
    printf("subtraction of matrix is: ");
    for(i=0; i<n; i++)
        {   printf("\n");
            for(j=0; j<m; j++)
                printf("%d\t", c[i][j]);
        }
    return 0;
} 