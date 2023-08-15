#include<stdio.h>

int front, size, rear;
void add_ele(int []);
void print_queue(int []);
void del_ele(int []);
int check_emptiness();
int check_space();

int main()
{   front = -1;
    rear = -1;
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
{   if(front == -1)
        return 1;
    else return 0;
}

int check_space()
{   if((rear+1)%size == front)
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
            if(front == -1 && front != 0)
                {   front = 0;
                    rear = 0;
                }
            else if(rear == size-1 && front !=0)
                    rear = 0;
                 else rear = (rear + 1) % size;
            b[rear] = x;
            printf("%d is added to the queue. ", x);
        }
}

void print_queue(int b[])
{   if(check_emptiness())
        printf("\nqueue is empty.");
    else 
    {   
        /*
        printf("\nqueue elements are:\n");
        printf("         [size = %d, front = %d, rear = %d]         ", size, front, rear);
        for(int i=front ; i<=rear && i!=rear+1 ; i = (i+1) % size)
            {   printf("%d, ", b[i]);
                printf("        [i = %d]      ", i);
            }
        */
        printf("\nqueue elements are:\n");
        if (rear >= front)
            for (int i = front; i <= rear; i++)
                printf("%d, ",b[i]);
        else
        {   for (int i = front; i < size; i++)
                printf("%d, ", b[i]);
            for (int i = 0; i <= rear; i++)
                printf("%d, ", b[i]);
        }

    }
}

void del_ele(int b[])
{   if(check_emptiness())
        {   printf("\nqueue has no element, deletion cannot happen");  
            return;
        }      
    printf("\ndeleted element was: %d.", b[front]);
    if(front == rear)
        front = rear + 1;
    else if(front == size - 1)
            front = 1;
         else front++;  
}
