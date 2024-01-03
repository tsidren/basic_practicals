#include <stdio.h>
#include <time.h>

void arr_gen (int  *,int );
void show (int  *,int );
int getMax(int *, int);
void countSort(int *, int);

int main()
{   float start_time, total_time;
   int  n = 100000;
   int  a[100000];
    arr_gen(a, n-1);
    
    printf("initial array: ");
    show(a, n);
    
    start_time = clock();
    countSort(a, n);
    total_time = (clock()-start_time)/CLOCKS_PER_SEC;
    printf("\n\ntotal time for selection sort is: %f \n", total_time);
    
    printf("after sorting ASC array: ");
    show(a, n);
    
    printf("\n---created by Shivanshu---");
}


void arr_gen(int  arr[],int  till)
{   for(int  i=0;i<=till/3;i++)
        {arr[i] = till-i;
        arr[i+till/3] = till-i;
        arr[i+till*2/3] = till -i;
        }
        
}

void show (int a[],int n)
{   for(int i = 0 ; i<3; i++)
        printf("%d, ", a[i]);
    printf(". . . . ");
    for(int i = n/3 ; i<(n/3+3); i++)
        printf("%d, ", a[i]);
    printf(". . . . ");
    for(int i = 2*n/3 ; i<(2*n/3+3); i++)
        printf("%d, ", a[i]);
    printf(". . . . ");
    for(int i = n-3 ; i<n; i++)
        printf("%d, ", a[i]);
}

int getMax(int a[], int n) {  
   int max = a[0]; 
   for(int i = 1; i<n; i++)   
      if(a[i] > max)  
         max = a[i];  
   return max;  
}  
  
void countSort(int a[], int n) 
{  
   int output[n+1];  
   int max = getMax(a, n);  
   int count[max+1]; 
  
  
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0;  
  }  
    
  for (int i = 0; i < n; i++) 
  {  
    count[a[i]]++;  
  }  
  
   for(int i = 1; i<=max; i++)   
      count[i] += count[i-1];   
    
  for (int i = n - 1; i >= 0; i--) {  
    output[count[a[i]] - 1] = a[i];  
    count[a[i]]--;  
}  
  
   for(int i = 0; i<n; i++) {  
      a[i] = output[i]; 
   }  
}  