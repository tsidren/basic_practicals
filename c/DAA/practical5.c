#include <stdio.h>
#include <time.h>

void arr_gen (int  *,int );
void show (int  *,int );
void swap(int *, int *);
void merge(int [], int , int , int , char);
void mergeSort(int [], int , int, char);

int main()
{   float start_time, total_time;
   int  n = 100000;
   int  a[100000];
    arr_gen(a, n-1);
    
    printf("initial array: ");
    show(a, n);
    
    start_time = clock();
    mergeSort(a, 0, n-1, 'D');
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for merge sort is: %f \n", total_time);
    
    printf("after sorting DESC array: ");
    show(a, n);
    
    start_time = clock();
    mergeSort(a, 0, n-1, 'A');
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for merge sort is: %f \n", total_time);

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


void merge(int arr[], int l, int m, int r, char b)
{   int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];

    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {   if (b == 'A')
            if (L[i] <= R[j])     //ASC
            {   arr[k] = L[i];
                i++;
            }
            else
            {   arr[k] = R[j];
                j++;
            }
        else
            if (L[i] >= R[j])     //DESC
            {   arr[k] = L[i];
                i++;
            }
            else
            {   arr[k] = R[j];
                j++;
            }
        k++;
    }

    while (i < n1)
    {   arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {   arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r, char b)
{   if (l < r)
    {   int m = l+(r-l)/2;
        mergeSort(arr, l, m, b);
        mergeSort(arr, m+1, r, b);
        merge(arr, l, m, r, b);
    }
}

void swap(int *xp, int *yp)
{   int temp = *xp;
    *xp = *yp;
    *yp = temp;
}