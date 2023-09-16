#include <stdio.h>
#include <time.h>

void arr_gen (int  *,int );
void insertion_sort (int *,int, char);
void show (int  *,int );

int main()
{   float start_time, total_time;
   int  n = 100000;
   int  a[100000];
    arr_gen(a, n-1);
    
    printf("initial array: ");
    show(a, n);
    
    start_time = clock();
    insertion_sort(a, n, 'D');
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for insertion sort is: %f \n", total_time);
    
    printf("after sorting DESC array: ");
    show(a, n);
    
    start_time = clock();
    insertion_sort(a, n, 'A');
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for insertion sort is: %f \n", total_time);

    printf("after sorting ASC array: ");
    show(a, n);
}

void arr_gen(int  arr[],int  till)
{   for(int  i=0;i<=till;i++)
        arr[i] = i;
}

void show (int a[],int n)
{   for(int i = 0 ; i<10; i++)
        printf("%d, ", a[i]);
    printf(". . . . ");
    for(int i = n-10 ; i<n; i++)
        printf("%d, ", a[i]);
    
}

void insertion_sort (int  arr[],int n, char order)
{  int  i, key, j;
    for (i = 1; i < n; i++) 
    {   key = arr[i];
        j = i - 1;
        if (order == 'D')
            while (j >= 0 && arr[j] < key) 
            {   arr[j + 1] = arr[j];
                j = j - 1;
            }
        if (order == 'A')
            while (j >= 0 && arr[j] > key) 
            {   arr[j + 1] = arr[j];
                j = j - 1;
            }
        arr[j + 1] = key;
    }
}