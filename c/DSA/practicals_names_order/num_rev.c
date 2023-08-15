#include <stdio.h>
#include <string.h>

int top, size;

void print_rev(int []);
void staK_num(int [], int);

int main()
{   int a=1456;
    int b[10];
    printf("initially our number was %d\n", a);
    staK_num(b,a);
    print_rev(b);
    
    return 0;
}


void staK_num(int g[],int h)
{   int temp, i=0;
    while(h>0)
        {   temp=h%10;
            h=h/10;
            g[i]=temp;
            i++;
        }
    top=i;
}

void print_rev(int b[])
{   for(int i=0;i<top;i++)
        printf("%d", b[i]);
}
/*

//same thing just in string 
//number is not saved 
#include <stdio.h>
#include <string.h>

int top;

void print_rev(char []);

int main()
{   char a[]={"1234567"};
    top=strlen(a)-1;
    
    print_rev(a);
    
    return 0;
}

void print_rev(char b[])
{   for(int i=top;i>=0;i--)
        printf("%c", b[i]);
}


*/




