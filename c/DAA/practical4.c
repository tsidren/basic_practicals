#include <stdio.h>
#include <time.h>

void arr_gen (int  *,int );
void show (int  *,int );
void swap(int *, int *);
void heapSort(int [], int, char);
void heapify(int [], int, int, char);

int main()
{   float start_time, total_time;
   int  n = 100000;
   int  a[100000];
    arr_gen(a, n-1);
    
    printf("initial array: ");
    show(a, n);
    
    start_time = clock();
    heapSort(a, n, 'D');
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for heap sort is: %f \n", total_time);
    
    printf("after sorting DESC array: ");
    show(a, n);
    
    start_time = clock();
    heapSort(a, n, 'A');
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for heap sort is: %f \n", total_time);

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

void heapify(int arr[], int N, int i, char b)
{   int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (b == 'A')
    {   if (left < N && arr[left] > arr[largest])     //  ASC 
            largest = left;
        if (right < N && arr[right] > arr[largest])    //  ASC 
            largest = right;
    }
    else 
    {   if (left < N && arr[left] < arr[largest])     //   DESC 
            largest = left;
        if (right < N && arr[right] < arr[largest])    //  DESC 
            largest = right;
    }
    if (largest != i) 
    {   swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest, b);
    }
}

void heapSort(int arr[], int N, char b)
{   // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i, b);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) 
    {   swap(&arr[0], &arr[i]);
        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0, b);
    }
}

void swap(int *xp, int *yp)
{   int temp = *xp;
    *xp = *yp;
    *yp = temp;
}