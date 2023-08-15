#include<stdio.h>

int front, size, rear;
void add_ele(int []);
void print_queue(int []);
void del_ele(int []);
int check_emptiness();
int check_space();

int main()
{       
    front = 0;
    rear = 0;
    size = 5;
    int a[size];
    int t = 1;
    
    while(t)
    {   printf("\nenter choice to perform operation. ");
        printf("\n1. add element in queue. ");
        printf("\n2. delete element in queue. ");
        printf("\n3. print queue. ");
        printf("\n0. exit \n");
        scanf("%d", &t);
        
        switch(t)
        {   case 1: add_ele(a);
                    break;
            case 2: del_ele(a);
                    break;
            case 3: print_queue(a);
                    break;
        }
    }
    return 0;
}

int check_emptiness()
{   if(rear == front)
        return 1;
    else return 0;
}

int check_space()
{   if(rear == size || (rear-front) == size)
        return 1;
    else return 0;
}

void add_ele(int b[])
{   int x;
    if(check_space())
        printf("\nqueue is full, insertion cannot happen");
    else
        {   printf("enter the element you want to add: ");
            scanf("%d", &x);
            printf("\n%d is added to the queue. ", x);
            b[rear]=x;
            rear++;
        }
}

void print_queue(int b[])
{   if(check_emptiness())
        printf("\nqueue is empty.");
    else 
    {   printf("\nqueue elements are:\n");
        for(int i=front ; i<rear; i++)
            printf("%d, ", b[i]);
    }
}

void del_ele(int b[])
{   if(check_emptiness())
        printf("\nqueue has no element, deletion cannot happen");
    else 
        {   printf("\ndeleted element was: %d.", b[front]);
            front++;
        }
}
