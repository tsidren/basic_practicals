#include <stdio.h>

void arr_print(int [], int);

void swap(int* , int* );

void heapSort(int [], int);

void heapify(int [], int, int);

void input_ar(int [], int *);
    
int main()
{   int b1[40]; //={4,2,6,8,1,5,7,3};
    int size;

    input_ar(b1,&size);
    heapSort(b1,8);

    printf("\nafter sorting");
    arr_print(b1,8);
    
    return 0;
}

void heapify(int arr[], int N, int i)
{   int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left] > arr[largest])     //  change ASC "arr[left]>arr[largest]"       DESC "arr[left]<arr[largest}"
        largest = left;

    if (right < N && arr[right] > arr[largest])    //  change ASC "arr[right]>arr[largest]"       DESC "arr[right]<arr[largest}"
        largest = right;

    if (largest != i) 
    {   swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
    }
}

void heapSort(int arr[], int N)
{   // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) 
    {   swap(&arr[0], &arr[i]);
        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}

void arr_print(int a[],int n)
{   printf("\n the array is: ");
    for(int i = 0; i<n;i++)
        printf("%d  ", a[i]);
}

void swap(int *xp, int *yp)
{   int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void input_ar(int g[], int *si)
{   int hh, siii;
    printf("enter the array size: "); 
    scanf("%d", &siii);
    
    printf("enter the array elements: ");
    for(int i=0; i<siii;i++)
        scanf("%d", &g[i]);
    
    *si = siii;

}