#include <stdio.h>

int OR_gate(int, int);
int AND_gate(int, int);
int XOR_gate(int, int);
int not_gate(int);
int XNOR_gate(int, int);

void truth_table(int );
void or__table();
void and__table();
void xor__table();
void not__table();
void xnor__table();


int main()
{   int t=1;
    while(t != 0 )
    {   printf("1. OR\n");
        printf("2. AND\n");
        printf("3. XOR\n");
        printf("4. NOT\n");
        printf("5. XNOR\n");
        printf("0. exit\n");
        printf("enter the operation you want to see truth table for: ");
        scanf("%d", &t);
        truth_table(t);
            
    }
    return 0;
}


void truth_table(int a)
{   switch(a)
    {   case 1: or__table();printf("\ntable for OR \n\n");break;
        case 2: and__table();printf("\ntable for AND \n\n"); break;
        case 3: xor__table();printf("\ntable for XOR \n\n"); break;
        case 4: not__table();printf("\ntable for NOT \n\n"); break;
        case 5: xnor__table();printf("\ntable for XNOR \n\n"); break;
    }
}

void or__table()
{   int a=0, b=0; 
    printf("A  B  ans\n");
    for(int i=0;i<4;i++)
        {printf("%d  %d  %d\n", a, b, OR_gate(a,b));
        if(i%2==0)
            b=1;
        else b=0;
        if(i>=1)
            a=1;
        else a=0;
        }
}

void and__table()
{   int a=0, b=0; 
    printf("A  B  ans\n");
    for(int i=0;i<4;i++)
        {printf("%d  %d  %d\n", a, b, AND_gate(a,b));
        if(i%2==0)
            b=1;
        else b=0;
        if(i>=1)
            a=1;
        else a=0;
        }
}

void xor__table()
{   int a=0, b=0; 
    printf("A  B  ans\n");
    for(int i=0;i<4;i++)
        {printf("%d  %d  %d\n", a, b, XOR_gate(a,b));
        if(i%2==0)
            b=1;
        else b=0;
        if(i>=1)
            a=1;
        else a=0;
        }
}

void not__table()
{   printf("A  ans\n");
    for(int i=0;i<2;i++)
        printf("%d   %d\n", i, not_gate(i));
        
            
}

void xnor__table()
{   int a=0, b=0; 
    printf("A  B  ans\n");
    for(int i=0;i<4;i++)
        {printf("%d  %d  %d\n", a, b, XNOR_gate(a,b));
        if(i%2==0)
            b=1;
        else b=0;
        if(i>=1)
            a=1;
        else a=0;
        }
}

int XNOR_gate(int h,int i)
{   return not_gate(XOR_gate(h,i));
}

int OR_gate(int a, int b)
{    return a|b;  
}

int AND_gate(int a, int b)
{   return a&b;
}

int XOR_gate(int a, int b)
{
    return a^b;
}

int not_gate(int a)
{   if(a == 0)
        return 1;
    else 
        return 0;
}
