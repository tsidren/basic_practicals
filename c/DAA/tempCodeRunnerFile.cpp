#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

void arr_gen (int  *,int );
void show (int  *,int );
void swap(int *, int *);
void quickSort(int [], int , int, char);
int partition(int [], int low, int high, char);
void value_gen(int [],int, int);

int main()
{   float start_time, total_time;
    int  a[10000];

    value_gen(a, 1, 100);
    // value_gen(a, 100, 1000);
    // value_gen(a, 2, 20);
    
    printf("\n---created by Shivanshu---");
}

void value_gen(int  arr[],int  start, int end)
{   FILE* fptr = fopen("filename.txt", "a+");
    FILE* fptr2 = fopen("filename2.txt", "a+");
    for(int i = start; i<end; i++)
    {   float start_time, total_time;
        int  n = i;
        int  a[i];
        
        arr_gen(a, n-1);

        start_time = clock();
        quickSort(a, 0, n, 'A');
        total_time = (clock()-start_time)/CLOCKS_PER_SEC;
        // printf("%f, %d \n", total_time, n);
        show(a, n);
        fprintf(fptr, "time taken: %f array size was: %d \n", total_time, n);
        fprintf(fptr2, "%f %d ", total_time, n);
    }
    fclose(fptr);
    fclose(fptr2);
}


void arr_gen(int  arr[],int  till)
{   for(int  i=0;i<=till;i++)
        arr[i] = rand();
}

void show (int a[],int n)
{
//   for(int i = 0 ; i<10; i++)
//         printf("%d, ", a[i]);
//     printf(". . . . ");
//     for(int i = n-10 ; i<n; i++)
//         printf("%d, ", a[i]);
    for(int i = 0 ; i<n; i++)
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