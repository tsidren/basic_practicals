#include<stdio.h>
#include<stdlib.h>

void insert_node(struct node *, int, int);
struct node* create_node();
void print_LL(struct node *);


struct node
{   int data;
    struct node *next;
    struct node *prev;
};

int main()
{   struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    
    //create_node(head, 123);

    return 1; 
}

void print_LL(struct node *y)
{   while(y!=NULL)
        {   printf("%d, ", y->data);
            y=y->next;
        }
}

struct node * create_node()
{   return (struct node *)malloc(sizeof(struct node));
}

void insert_node(struct node *a, int item, int key) // before a specific node value
{   struct node *h;
    h = create_node();
    h->data=item;
    h->next=NULL;
    h->prev=NULL;

    if(a == NULL)
        a = h;
    else 
        {   struct node *q= a;
            while(q->next->data!=key)
                q=q->next;
            //q->next=h;
            //h->prev=q;
            //h->next=q->next;           q      h      q+1{key}
            q->next=h;        
            h->prev=q;        
            h->next=q->next;    
            q->next->prev=h;
        }
}

void del_node(struct node *j)  // last node
{   struct node *g= j, *pre;

    while(g->next!=NULL)
        {   g=g->next;

        }

    
}


