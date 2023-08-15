#include <stdio.h>
 
int smallest_element_array(int [], int, int);

void selection_sort(int [], int);

void bubble_sort(int [], int );

void insertion_sort(int [],int);

void arr_print(int [], int);

void swap(int* , int*);

int main()
{   int a[]={1,2,3,4,5,6,7,8};
    int b1[]={4,2,6,8,1,5,7,3};
    int b2[]={4,2,6,8,1,5,7,3};
    int b3[]={4,2,6,8,1,5,7,3};
    int b4[]={4,2,6,8,1,5,7,3};
    
    selection_sort(b1,8);
    arr_print(b1,8);
    bubble_sort(b2,8);
    arr_print(b2,8);
    insertion_sort(b3,8);
    arr_print(b3,8);
    return 0;
}

int smallest_element_array(int x[], int y, int k)
{   int small=x[k], pos=k;
    
    for(int i=k+1;i<y;i++)
        if(x[i]<small)      // change for ASC '<' or DESC '>'  so change the function to "largest_element" :P
            {   small=x[i];
                pos = i; 
            }
    
    return pos;
}

void selection_sort(int a[],int n)
{   int min, p, t;
    
    for(int i=0;i<n;i++)
        swap(&a[i], &a[smallest_element_array(a,n,i)]);
}

/*
void selection_sort(int a[],int n)
{   int small, pos, temp;
    for(int j=0;j<n;j++)
        for(int i=j+1;i<n;i++)
                {   small=a[j], pos=j;
                    if(a[i]<small)      // change for ASC '<' or DESC '>'  so change the function to "largest_element" :P
                        {   small=a[i];
                            pos = i; 
                        }
                    temp = a[j];
                    a[j]= a[pos];
                    a[pos]= temp;
                    //swap(&a[j], &a[pos]);
                }
    
}
*/


void bubble_sort(int a[],int n) 
{   int temp;
    
    for(int i=n-1;i>0;i--)
        for(int j=0;j<i;j++)
            if(a[j]>a[j+1])        // change for ASC '>' or DESC '<'    or reverse the "i" loop    
                swap(&a[j], &a[j+1]);
}

void insertion_sort(int a[], int n)
{   int j,t;
    for(int i=1;i<n;i++)
        {   j=i-1;
            t=a[i];
            while(t>a[j] && j>=0)   // change for ASC 't<a[j]' or DESC 't>a[j]' 
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
