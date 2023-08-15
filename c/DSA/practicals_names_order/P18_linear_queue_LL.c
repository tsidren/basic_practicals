#include<stdio.h>   
#include<stdlib.h>  
struct node   
{   int data;   
    struct node *next;  
};  
struct node *front;  
struct node *rear;   
void add_ele();  
void del_ele();  
void print_queue();  
int main ()  
{   int choice=1;   
    while(choice)   
    {   printf("\nenter choice to perform operation. ");
        printf("\n1. add element in queue. ");
        printf("\n2. delete element in queue. ");
        printf("\n3. print queue. ");
        printf("\n0. exit \n"); 
        scanf("%d", &choice);  
        switch(choice)  
        {   case 1: add_ele();  
                    break;  
            case 2: del_ele();  
                    break;  
            case 3: print_queue();  
                    break;  
            default: printf("\nEnter valid choice??\n");  
        }  
    }  
    return 0;
}  
void add_ele()  
{   struct node *elem;  
    int item;   
    elem = (struct node *) malloc (sizeof(struct node));  
    if(elem == NULL)  
    {   printf("\nqueue is full, insertion cannot happen");  
        return;  
    }  
    else  
    {   printf("enter the element you want to add: ");  
        scanf("%d",&item);  
        elem -> data = item;  
        if(front == NULL)  
        {   front = elem;  
            rear = elem;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {   rear -> next = elem;  
            rear = elem;  
            rear->next = NULL;  
        } 
        printf("\n%d is added to the queue. ", item);
    }  
}     
void del_ele()  
{   struct node *elem;  
    if(front == NULL)  
    {   printf("\nqueue has no element, deletion cannot happen");  
        return;  
    }  
    else   
    {   elem = front;  
        printf("\ndeleted element was: %d.", elem -> data);
        front = front -> next;  
        free(elem);  
    }  
}  
void print_queue()  
{   struct node *elem;  
    elem = front;      
    if(front == NULL)  
        printf("\nqueue is empty.");  
    else  
    {   printf("\nqueue elements are:\n");  
        while(elem != NULL)   
        {   printf("%d, ",elem -> data);  
            elem = elem -> next;  
        }  
    }  
}  