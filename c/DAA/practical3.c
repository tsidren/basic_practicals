#include <stdio.h>
#include <time.h>

void arr_gen (int  *,int );
void show (int  *,int );
void swap(int *, int *);
void quickSort(int [], int , int, char);
int partition(int [], int low, int high, char);

int main()
{   float start_time, total_time;
   int  n = 100000;
   int  a[100000];
    arr_gen(a, n-1);
    
    printf("initial array: ");
    show(a, n);
    
    start_time = clock();
    quickSort(a, 0,  n, 'D');
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for quick sort is: %f \n", total_time);
    
    printf("after sorting DESC array: ");
    show(a, n);
    
    start_time = clock();
    quickSort(a, 0, n, 'A');
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for quick sort is: %f \n", total_time);

    printf("after sorting ASC array: ");
    show(a, n);
    printf("\n---created by Shivanshu---");
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

void quickSort(int arr[], int low, int high, char b)    
{   if (low < high) 
        {   int pi = partition(arr, low, high, b);
            quickSort(arr, low, pi - 1, b);
            quickSort(arr, pi + 1, high, b);
        }
}

int partition(int arr[], int low, int high, char c)
{   int pivot = arr[high];
    int i = (low - 1);
    if (c == 'A')
        for (int j = low; j <= high - 1; j++) 
            if (arr[j] < pivot)    // for ASC '<' 
                swap(&arr[++i], &arr[j]);
    if (c == 'D')
        for (int j = low; j <= high - 1; j++) 
            if (arr[j] > pivot)    //  for DESC '>'
                swap(&arr[++i], &arr[j]);
    swap(&arr[i+1], &arr[high]);
    return (i + 1);
}

void swap(int *xp, int *yp)
{   int temp = *xp;
    *xp = *yp;
    *yp = temp;
}