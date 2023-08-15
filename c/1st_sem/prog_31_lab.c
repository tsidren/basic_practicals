#include<stdio.h>

void binary_search(int [], int, int);

void linear_search(int [], int, int);

void selection_sort(int [], int);

void bubble_sort(int [], int );

void insertion_sort(int [],int);

void arr_print(int [], int);

int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int b1[]={4,2,6,8,1,5,7,3};
    int b2[]={4,2,6,8,1,5,7,3};
    int b3[]={4,2,6,8,1,5,7,3};

    linear_search(a,8,5);
    binary_search(a,8,4);
    
    selection_sort(b1,8);
    arr_print(b1,8);
    bubble_sort(b2,8);
    arr_print(b2,8);
    insertion_sort(b3,8);
    arr_print(b3,8);

    return 0;
}

void linear_search(int arr[],int a, int b)
{ int c=0;
for(int i=0; i<a;i++)
    if(arr[i]==b)
        printf("element is on %d\n", i+1);
    else c++;
if(c==a)
    printf("element not found\n");  
}

void binary_search(int a[], int n, int x){

    int lb=0,ub=n-1, mid;
    while(lb<=ub)
    {
        mid = (lb+ub)/2;
        if(x==a[mid]){
            printf("found at %d\n", mid+1);
            break;
        }
        else if(x>a[mid])
            lb=mid+1;
        else ub = mid+1;
    }
    if(lb>ub)
        printf("not found\n");
}

void selection_sort(int a[],int n){
    int min, p, t;
    for(int i=0;i<n-1;i++)
    { min=a[i]; p=i;
        for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[min])
                {
                    min = a[j];
                    p = j;
                }
                t = a[i];
                a[i] = min;
                a[p] = t;
            }
    }
}

void bubble_sort(int a[],int n){
    int temp;
    for(int i=n-1;i>0;i--)
        for(int j=0;j<i;j++)
            if(a[j]>a[j+1])
                    {temp = a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    }
}

void insertion_sort(int a[], int n){
    int j,t;
    for(int i=1;i<n;i++)
    {j=i-1;
    t=a[i];
    while(t<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
    a[j+1]=t;
    }

}

void arr_print(int a[],int n){
printf("\n the array is: ");
for(int i = 0; i<n;i++)
    printf("%d  ", a[i]);
}