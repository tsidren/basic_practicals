#include <stdio.h>

void binary_search(int [], int, int);

int bin_search(int [], int, int, int, int);

void Linear_search(int [], int, int);

int input_ar(int [], int *); 


int main()
{   int a[40], size, key;
    int t = 1;
    
    while(t)
    {   printf("\nenter choice to perform operation. ");
        printf("\n1. linear search.");
        printf("\n2. binary search non_recursive. ");
        printf("\n3. binary search recursive. ");
        printf("\n0. exit \n");
        scanf("%d", &t);
        switch(t)
        {   case 1: key = input_ar(a, &size); 
                    Linear_search(a, size, key);
                    break;
            case 2: key = input_ar(a, &size); 
                    binary_search(a, size, key);
                    break;
            case 3: key = input_ar(a, &size); 
                    printf("element %d is on %d\n\n", key, bin_search(a, size, key, 0, size-1)+1);
                    break;
        }
        
    }
    return 0;
}

int input_ar(int g[], int *si)
{   int hh, siii;
    printf("enter the array size: "); 
    scanf("%d", &siii);
    
    
    printf("enter the array elements: ");
    for(int i=0; i<siii;i++)
        scanf("%d", &g[i]);
 
    printf("enter the element you want to search: ");
    scanf ("%d", &hh);
    *si = siii;
    return hh;
}


int bin_search(int h[], int size, int key, int lb, int ub)
{   int mid = (lb+ub/2);
    if(h[mid] == key)
        return mid;
    if(h[mid] < key)
        return bin_search(h, size, key, mid, lb);
    else 
        return bin_search(h, size, key, ub, mid);
        
}

void Linear_search(int arr[],int a, int b)
{   int c=0;
    for(int i=0; i<a;i++)
        if(arr[i]==b)
            printf("element %d is on %d\n\n", b, i+1);
        else c++;
    if(c==a)
        printf("element %d not found\n\n", b);  
}

void binary_search(int a[], int n, int x)
{   int lb=0, ub=n-1, mid;
    while(lb<=ub)
    {   mid = (lb+ub)/2;
        if(x==a[mid])
        {   printf("element %d is found at %d\n\n", x, mid+1);
            break;
        }
        else if(x>a[mid])
            lb=mid+1;
        else ub = mid+1;
    }
    if(lb>ub)
        printf("element %d is not found\n\n", x);
}