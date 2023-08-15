#include <stdio.h>

int main()
{   int arr[100];
    int i, x, pos, n;
    
    printf("enter number of element in array \n");
    scanf("%d", &n);
    
    printf("enter elements of array \n");
    for (i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    printf("enter element to be inserted ");
    scanf("%d", &x);
    
    printf("enter position at which number is to be inserted ");
    scanf("%d", &pos);
    n++;
    
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
        
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}