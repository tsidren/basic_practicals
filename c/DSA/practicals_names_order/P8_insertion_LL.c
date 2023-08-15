#include<stdio.h>
#include<stdlib.h>

struct node
{   struct node * next;
    int data;
};

struct node * insertatstart(struct node *, int);
struct node * insertafternode(struct node *, int, struct node *);
struct node * insertatend(struct node *, int);
void traversal(struct node *);

int main()
{   struct node * head;
    struct node * second;
    struct node * third;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 11;
    third->next = NULL;

    head = insertatstart(head, 5);
    
    head = insertatend(head, 14);
    
    head = insertafternode(head, 9, second);
    
    traversal(head);

    return 0;
} 

struct node * insertatstart(struct node *head, int data)
{   struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node * insertafternode(struct node *head, int data, struct node * ptr)
{   struct node * p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    
    p->next = ptr->next->next;    
    ptr->next = p;
    
    return head;
}

struct node * insertatend(struct node *head, int data)
{   struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p = head;
    
    while(p->next != NULL)
        p = p->next;

    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    
    return head;
}

void traversal(struct node * ptr)
{   while(ptr != NULL)
        {   printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
    printf("\n");
}