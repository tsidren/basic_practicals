#include<stdio.h>
#include<time.h>

float knapsackSol(float *, float *, int , int );

int main()
{   float totalValue;
    float weight[50] = {2,1,3,2};
    float profit[50] = {12,10,20,15};
    int n = 7; 
    int capacity = 5;
    
    printf("\nKnapsack problems using Greedy Algorithm:");
    long t1 = clock();
    totalValue = knapsackSol(weight,profit,n,capacity);
    long t2 = clock();
    printf("\nThe maximum value is :%f\n",totalValue);  
    float time = (double)(t2-t1)/CLOCKS_PER_SEC;
    printf("\nTime taken for algorithm is: %f", time); 
    printf("\n---created by Shivanshu---");
    return 0;
}

float knapsackSol(float weight[], float profit[], int n, int capacity)
{   float ratio[50], temp, totalValue=0;
    for(int i=0;i<n;i++)
        ratio[i]=profit[i]/weight[i];  
    for (int i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++) 
            if (ratio[i] < ratio[j]) 
            {   temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
    int i;
    for (i = 0; i < n; i++) 
        if (weight[i] > capacity)
            break;
        else 
        {   totalValue = totalValue + profit[i];
            capacity = capacity - weight[i];
        }
     
    if (i < n)
        totalValue = totalValue + (ratio[i]*capacity);
    return totalValue;
}