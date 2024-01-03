#include <stdio.h>
#include <stdlib.h>

const int inf = 999999;
int k, a, b, u, v, n, ne = 1;
int mincost = 0;
int cost[6][6] = {{0, 5, 0, 0, 0, 2},
                  {5, 0, 6, 0, 0, 3},
                  {0, 6, 0, 8, 1, 0},
                  {0, 0, 8, 0, 4, 0},
                  {0, 0, 1, 4, 0, 2},
                  {2, 3, 0, 0, 2, 0}};
int  p[9] = {0};

int applyfind(int );
int applyunion(int ,int );

int main()
{   n = 6;
    int i, j;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            if (cost[i][j] == 0) 
                cost[i][j] = inf;   
    
    printf("\nMinimum Cost Spanning Tree: \n");
    while(ne < n) 
    {   int min_val = inf;
        for(i=0; i<n; i++) 
            for(j=0; j <n; j++) 
                if(cost[i][j] < min_val) 
                {   min_val = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
    
        u = applyfind(u);
        v = applyfind(v);
        if(applyunion(u, v) != 0) 
        {   printf("%d -> %d\n", a, b);
            mincost +=min_val;
        }
        cost[a][b] = cost[b][a] = 999;
        ne++;
    }
    printf("Minimum cost = %d",mincost);
    printf("\n---created by Shivanshu---");
    return 0;
}

int applyfind(int i)
{   while(p[i] != 0)
        i=p[i];
    return i;
}
int applyunion(int i,int j)
{   if(i!=j) 
    {   p[j]=i;
        return 1;
    }
    return 0;
}