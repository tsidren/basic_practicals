#include <stdio.h>

void arr_print(int [], int);

void swap(int *, int *);

void quickSort(int [], int , int );

int partition(int [], int low, int high);

void input_ar(int [],int *);
   
int main()
{   int b4[40]; //={4,2,6,8,1,5,7,3};
    int size;
    input_ar(b4, &size);

    quickSort(b4, 0, size-1);

    printf("after sorting ");

    arr_print(b4, size);

    return 0;
}


void quickSort(int arr[], int low, int high)    
{   if (low < high) 
        {   int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
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

int partition(int arr[], int low, int high)
{   int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) 
        if (arr[j] > pivot)    // change this for ASC '<' or DESC '>'
            swap(&arr[++i], &arr[j]);
        
    swap(&arr[i+1], &arr[high]);
    return (i + 1);
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