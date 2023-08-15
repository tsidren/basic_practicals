#include <stdio.h>
#include <math.h>

void power_set(char [], int);

int main()
{   char l[20];
    int ele;
        
    power_set(l,ele);

    return 0;
}


void power_set(char a[], int b)
{   int y = pow(2, b);
    
    printf("NULL");
    for(int i=0; i<y; i++)
        {   for(int j=0; j<b; j++)
                {   if(i & (1<<j))
                        printf("%c", a[j]);
                }
                printf("\n");
        }