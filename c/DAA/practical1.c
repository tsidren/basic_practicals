#include <stdio.h>
#include <time.h>

void arr_gen (int *, int);
void linear_search (int*, int, int);
int binarySearch (int [],int ,int ,int );

int main()
{   float start_time, total_time;
    int n = 100000;
    int a[100000];
    arr_gen(a, n-1);
    
    start_time = clock();
    linear_search(a, n, n-2);
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\ntotal time for linear search is: %f ", total_time);
    
    start_time = clock();
    printf("\nelement found at index %d", binarySearch(a, 0, n, (n/2)+(n/4)+1));
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\ntotal time for binary search is: %f ", total_time);
    printf("\n---created by Shivanshu---");
    return 0;
}

void arr_gen(int arr[], int till)
{   for(int i=0;i<till;i++)
        arr[i] = i;
}

void linear_search (int a[],int size,int key)
{   for(int i=0; i<size;i++)
        if(key==a[i])
            printf("element found at index %d", i);
}

int binarySearch(int arr[],int l,int r,int x)
{   if (r >= l) 
    {   int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        else
            return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
