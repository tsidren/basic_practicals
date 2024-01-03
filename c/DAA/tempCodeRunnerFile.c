#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#define N 4

void printSolution(int [][N]);
bool isSafe(int [][N], int , int );
bool solveNQUtil(int [][N], int );
bool solveNQ();

int main()
{  long t1 = clock();
   solveNQ();
   long t2 = clock();  
   float time = (double)(t2-t1)/CLOCKS_PER_SEC;    
   printf("\nTime taken for algorithm is: %f", time); 
   printf("\n---created by Shivanshu---");
   return 0;
}
void printSolution(int board[N][N])
{   for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) 
            if(board[i][j])
                printf("Q ");
            else
                printf(". ");
        printf("\n");
    }
}
bool isSafe(int board[N][N], int row, int col)
{   int i, j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;
    return true;
}
bool solveNQUtil(int board[N][N], int col)
{   if (col >= N)
        return true;
    for (int i = 0; i < N; i++) 
        if (isSafe(board, i, col)) 
        {   board[i][col] = 1;
            if (solveNQUtil(board, col + 1))
                return true;
            board[i][col] = 0;
        }
    return false;
}
bool solveNQ()
{   int board[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
 
    if (solveNQUtil(board, 0) == false) 
    {   printf("Solution does not exist");
        return false;
    }
    printSolution(board);
    return true;
}