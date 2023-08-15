#include <stdio.h>
 
void binary_search(int [], int, int);

void Linear_search(int [], int, int);

int main()
{   int a[]={1,2,3,4,5,6,7,8};
    int b1[]={4,2,6,8,1,5,7,3};
    int b2[]={4,2,6,8,1,5,7,3};
    int b3[]={4,2,6,8,1,5,7,3};
    int b4[]={4,2,6,8,1,5,7,3};
    Linear_search(a,8,5);
    binary_search(a,8,4);

    return 0;
}

void Linear_search(int arr[],int a, int b)
{   int c=0;
    for(int i=0; i<a;i++)
        if(arr[i]==b)
            printf("element is on %d\n", i+1);
        else c++;
    if(c==a)
        printf("element not found\n");  
}

void binary_search(int a[], int n, int x)
{   int lb=0,ub=n-1, mid;
    while(lb<=ub)
    {   mid = (lb+ub)/2;
        if(x==a[mid])
        {   printf("found at %d\n", mid+1);
            break;
        }
        else if(x>a[mid])
            lb=mid+1;
        else ub = mid+1;
    }
    if(lb>ub)
        printf("not found\n");
}
