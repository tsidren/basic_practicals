#include<stdio.h>

void bubble_sort(int [], int );

void arr_print(int [], int);

void swap(int* , int*);

void input_ar(int [], int *);

void bub_sort(int [], int);

int main(){
int a[40], size;
int t = 1;

while(t)
{   printf("\nenter choice to perform operation. ");
    printf("\n1. bubble sort non_recursive.");
    printf("\n2. bubble sort recursive. ");
    printf("\n0. exit \n");
    scanf("%d", &t);
    
    switch(t)
    {   case 1: input_ar(a, &size); 
                bubble_sort(a, size);
                arr_print(a, size);
                break;
        case 2: input_ar(a, &size); 
                bub_sort(a, size);
                arr_print(a, size);
                break;
    }
}

return 0;
}

void bub_sort(int j[], int ss)
{   if (ss == 1)
        return;

    int count = 0;
    for (int i=0; i<ss-1; i++)
        if (j[i] > j[i+1])    // change for ASC '>' or DESC '<'    or reverse the "i" loop and the tail 
        {   swap(&j[i], &j[i+1]);
            count++;
        }
    if (count == 0)
        return;
    bub_sort(j, ss-1);
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

void bubble_sort(int a[],int n) 
{   int temp;
    
    for(int i=n-1;i>0;i--)
        for(int j=0;j<i;j++)
            if(a[j]>a[j+1])        // change for ASC '>' or DESC '<'    or reverse the "i" loop    
                swap(&a[j], &a[j+1]);
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