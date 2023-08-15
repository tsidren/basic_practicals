#include <stdio.h>
 
int smallest_element_array(int [], int, int);

void selection_sort(int [], int);

void arr_print(int [], int);

void swap(int* , int*);

void input_ar(int [], int *);

int main()
{   int b1[40]; //={4,2,6,8,1,5,7,3};
    int size;
    input_ar(b1,&size);
    selection_sort(b1,8);
    printf("\nafter sorting");
    arr_print(b1,8);

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
{   for(int i=0;i<n;i++)
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