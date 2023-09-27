#include <stdio.h>
#include <time.h>

void arr_gen (int  *,int );
void show (int  *,int );
void selection_sort(int [], int, char );
void swap(int* , int*);
int smallest_element_array(int x[], int y, int k, char b);

int main()
{   float start_time, total_time;
   int  n = 100000;
   int  a[100000];
    arr_gen(a, n-1);
    
    printf("initial array: ");
    show(a, n);
    
    start_time = clock();
    selection_sort(a, n, 'D');
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for selection sort is: %f \n", total_time);
    
    printf("after sorting DESC array: ");
    show(a, n);
    
    start_time = clock();
    selection_sort(a, n, 'A');
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for selection sort is: %f \n", total_time);

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

int smallest_element_array(int x[], int y, int k, char b)
{   int small=x[k], pos=k;
    
    for(int i=k+1;i<y;i++)
    {   if(b == 'A')
            if(x[i]>small )      // ASC '<'
            {   small=x[i];
                pos = i; 
            }
        if(b == 'D')
            if(x[i]<small)      //  DESC '>'  
            {   small=x[i];
                pos = i; 
            }
    }
    return pos;
}

void selection_sort(int a[],int n, char b)
{   for(int i=0;i<n;i++)
        swap(&a[i], &a[smallest_element_array(a,n,i, b)]);
}

void swap(int *xp, int *yp)
{   int temp = *xp;
    *xp = *yp;
    *yp = temp;
}