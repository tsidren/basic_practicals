#include<stdio.h>

int top, size;
void add_ele(int [], int);
void print_stack(int []);
void del_ele(int []);
int check_emptiness();
int check_space();
int peek_stac(int []);

int main()
{       
    top = -1;
    size = 5;
    int a[size];
    
    int t = 1;
    int d;
    int choice; 
    
    while(t)
    {   printf("\n 1. insertions in stack.");
        printf("\n 2. print the stack. ");
        printf("\n 3. delete element.");
        printf("\n 4. to get the top most element.");
        printf("\n 0. to exit program. ");
        printf("\n\n enter the choice of you operation: ");
        scanf("%d", &choice);
        
        switch (choice)
        {   case 1:
                printf("enter the element you want to insert: ");
                scanf("%d", &d);
                add_ele(a, d);
                break;
            case 0:
                t=0;
                break;
            case 2:
                print_stack(a);
                break;
            case 3:
                del_ele(a);
                break;
            case 4:
                printf("top most element is: %d", peek_stac(a));
                break;    
        }
    }


    /*
    add_ele(a,5);
    add_ele(a,3);
    add_ele(a,6);
    add_ele(a,8);
    add_ele(a,1);
    add_ele(a,2);
    add_ele(a,3);
    add_ele(a,7);
    add_ele(a,6);
    add_ele(a,9);
    print_stack(a);

    del_ele(a);
    del_ele(a);
    del_ele(a);
    print_stack(a);
    del_ele(a);
    del_ele(a);
    
    del_ele(a);
    del_ele(a);
    del_ele(a);

    print_stack(a);
    */
    return 0;
}

int peek_stac(int g[])   //  for knowing the last element
{   return g[top];
}

int check_emptiness()
{   if(top == -1)
        return 1;
    else return 0;
}

int check_space()
{   if(top == size-1)
        return 1;
    else return 0;
}

void add_ele(int b[], int x)
{   if(check_space())
        printf("\nstack is full, insertion of %d cannot happen", x);
    else
        {   top++;
            b[top]=x;
        }
}

void print_stack(int b[])
{   if(check_emptiness())
        printf("\nstack is empty.");
    else {  printf("\nstack elements are:\n");
    for(int i=top ; i>=0; i--)
        printf("%d\n", b[i]);
    }
}

void del_ele(int b[])
{   if(check_emptiness())
        printf("\nstack has no element, deletion cannot happen");
    else 
        {   printf("deleted element was: %d \n", b[top]);
            top--;
        }
}
