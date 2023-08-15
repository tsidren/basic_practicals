// 43.   run in online compiler 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tranMatrix;
    int row, col;

    printf("Enter rows and columns in the matrix: ");
    scanf("%d%d", &row, &col);

    tranMatrix = (int *)calloc(row * col, sizeof(int));

    printf("Enter the rows and column value in matrix format: \n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", tranMatrix + (i * col + j) * sizeof(int));

    printf("Transpose of matrix is: \n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
            printf("%d ", *(tranMatrix + (j * col + i) * sizeof(int)));
        printf("\n");
    }
    free(tranMatrix);
    return 0;
}
