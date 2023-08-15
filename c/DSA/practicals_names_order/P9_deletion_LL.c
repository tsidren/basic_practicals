#include<stdio.h>
#include<stdlib.h>

struct node
{   struct node * next;
    int data;
};

struct node * deleteatend(struct node *);
struct node * deleteinbetween(struct node *, int);
struct node * deleteatstart(struct node *);
void traversal(struct node *);

int main()
{   struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    head->data=2;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=5;
    third->next=fourth;

    fourth->data=7;
    fourth->next=NULL;

    traversal(head);

    head=deleteatstart(head);

    head=deleteinbetween(head,2);

    head=deleteatend(head);

    traversal(head);

    return 0;
}

void traversal(struct node * ptr)
{   while(ptr != NULL)
        {   printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
    printf("\n");
}

struct node * deleteatstart(struct node * head)
{   struct node * ptr = head;
    head = head->next;
    
    free(ptr);
    return head;
}

struct node * deleteinbetween(struct node * head, int index)
{   struct node * p = head;
    struct node * q = head->next;
    
    for(int i=0; i<index-1; i++)
        {   p = p->next;
            q = q->next;
        }
    p->next = q->next;
    
    free(q);
    return head;
}

struct node * deleteatend(struct node * head)
{
    struct node * p = head;
    struct node * q = head->next;
    
    while(q->next != NULL)
        {   p = p->next;
            q = q->next;
        }
    p->next = NULL;
    
    free(q);
    return head;
}