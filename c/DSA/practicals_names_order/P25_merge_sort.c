#include <stdio.h>

void arr_print(int [], int);

void swap(int* , int* );

void merge(int [], int , int , int );

void mergeSort(int [], int , int);

void input_ar(int [], int *);
    
int main()
{   int b1[40]; //={4,2,6,8,1,5,7,3};
    int size;

    input_ar(b1,&size);
    mergeSort(b1, 0, size-1);

    printf("\nafter sorting");
    arr_print(b1,size);
    
    return 0;
}

void merge(int arr[], int l, int m, int r)
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
    {   if (L[i] <= R[j])     //change this for ASC '<=' or DESC '>='
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

void mergeSort(int arr[], int l, int r)
{   if (l < r)
    {   int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
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