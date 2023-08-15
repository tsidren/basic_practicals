#include <stdio.h>

void selection_sort(int [], int);

int smallest_element_array(int [], int, int);

void selection_sort(int [], int);

void arr_print(int [], int);

void swap(int *xp, int *yp);

int main()
{   int a[]={10,2,1,4,5,3,7,8,9};
    int b = 9;

    printf(" [ %d ]   ", smallest_element_array(a,b,0));

    printf(" [ %d ]  ", smallest_element_array(a,b,4));

    selection_sort(a,8);
    arr_print(a,8);


    return 0;
}


int smallest_element_array(int x[], int y, int k)
{   int small=x[k], pos=k;
    for(int i=k+1;i<y;i++)
        if(x[i]<small)
            {
                small=x[i];
                pos = i; 
            }
    return pos;
}

void selection_sort(int a[],int n){
    int min, p, t;
    for(int i=0;i<n;i++)
    swap(&a[i], &a[smallest_element_array(a,n,i)]);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void arr_print(int a[],int n){
printf("\n the array is: ");
for(int i = 0; i<n;i++)
    printf("%d  ", a[i]);
}