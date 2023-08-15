#include<stdio.h> // shreya singh, CSAI, 2100971520050
int front, MAXsize, rear;
void add_ele(int []);
void print_queue(int []);
void del_ele(int []);
int check_emptiness();
int check_space();
int main()
{   front = 0;
    rear = 0;
    MAXsize = 5;
    int a[MAXsize];
    int choice = 1;
    while(choice)
    {   printf("\nenter choice to perform operation. ");
        printf("\n1. add element in queue. ");
        printf("\n2. delete element in queue. ");
        printf("\n3. print queue. ");
        printf("\n0. exit \n");
        scanf("%d", &choice);
        switch(choice)
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

void add_ele(int b[])
{   int input;
    if(rear == MAXsize)
        printf("\nqueue is full, insertion cannot happen");
    else
        {   printf("enter the element you want to add: ");
            scanf("%d", &input);
            printf("\n%d is added to the queue. ", input);
            b[rear]=input;
            rear++;
        }
}
void print_queue(int b[])
{   if(rear == front)
        printf("\nqueue is empty.");
    else 
    {   printf("\nqueue elements are:\n");
        for(int i=front ; i<rear; i++)
            printf("%d, ", b[i]);
    }
}
void del_ele(int b[])
{   if(rear == front)
        printf("\nqueue has no element, deletion cannot happen");
    else 
        {   printf("\ndeleted element was: %d.", b[front]);
            front++;
        }
}
