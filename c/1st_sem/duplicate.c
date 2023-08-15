#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
    
    int arr[10], i, j, k, size=10;  
      
    printf (" \n Enter %d elements of an array: \n ", size);  
    
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  
      
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            
            if ( arr[i] == arr[j])  
            {  
                 
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                 
                size--;  
                  
            
                j--;      
            }  
        }  
    }  
    printf (" \n Array elements after deletion of the duplicate elements: ");  
      
     
    for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", arr[i]);  
    }  
    return 0;  
}  

/*
 Enter 10 elements of an array:
 10
10
20
30
40
10
20
20
10
30
 
 Array elements after deletion of the duplicate elements:  10    20      30      40 
*/
