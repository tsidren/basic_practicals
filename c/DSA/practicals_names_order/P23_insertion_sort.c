#include <stdio.h>

void insertion_sort(int [],int);

void arr_print(int [], int);

void swap(int* , int*);

void input_ar(int [], int *);

int main()
{   int b1[40]; //={4,2,6,8,1,5,7,3};
    int size;

    input_ar(b1,&size);
    insertion_sort(b1,8);

    printf("\nafter sorting");
    arr_print(b1,8);
    
    return 0;
}

void insertion_sort(int a[], int n)
{   int j,t;
    for(int i=1;i<n;i++)
        {   j=i-1;
            t=a[i];
            while(t<a[j] && j>=0)   // change for ASC 't<a[j]' or DESC 't>a[j]' 
                {   a[j+1]=a[j];
                    j--;
                }
            a[j+1]=t;
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