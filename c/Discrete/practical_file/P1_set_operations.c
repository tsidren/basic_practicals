#include <stdio.h>

int set_checker(int [], int);
void set_input(int [], int, char); 
void set_print(int [], int, char []);
void set_union(int [], int [],int [], int, int, int *);
void set_intersection(int [], int [],int [], int, int, int *);
void set_diffrence(int [], int [],int [], int, int, int *);
void set_sym_diffrence(int [], int [],int [], int, int, int *);
void set_normal_input(int [], int, char );

int main()
{   int a[15], b[15], c[30], y[30], t[30], h[30];
    int q, w, c1=0, u=0, o=0, p=0;

    printf("enter the size of both the sets: ");
    scanf("%d %d", &q, &w);

    set_input(a, q, 'A');
    set_input(b, w, 'B');


    set_union(a, b, c, q, w, &c1);
    set_intersection(a, b, y, q, w, &u);
    set_diffrence(a, b, t, q, w, &o);
    set_sym_diffrence(a, b, h, q, w, &p);

    set_print(a, q, "A");
    set_print(b, w, "B");
    set_print(c, c1, "A U B");
    set_print(y, u, "a n B");
    set_print(t, o, "A - B");
    set_print(h, p, "A [-] B");
    return 0; 
}

void set_sym_diffrence(int a[], int b[],int c[], int d, int e, int *f)
{   int j[30];
    int x[30];
    int u=0, k=0;
    int r=*f;
    
    set_intersection(a, b, j, d, e, &u);
    set_union(a, b, x, d, e, &k);
    set_diffrence(x, j, c, k, u, &r);
    *f = r;
}

void set_diffrence(int a[], int b[],int c[], int d, int e, int *f)
{   int k=*f;
    int count = 0; 
        for(int i=0; i<d; i++)
            {   for(int j=0; j<e; j++)
                    if(a[i] == b[j])
                        count++;
                    
                if(count == 0)
                    {   c[k] = a[i];
                        k++;
                    }
                count=0;
            }
    *f=k;

}

void set_intersection(int a[], int b[],int c[], int d, int e, int *f)
{   int k=*f;
    for(int i=0; i<d; i++)  
        for(int j=0; j<e; j++)
            if(a[i] == b[j])
            {   c[k] = a[i];
                k++;
            }
    *f = k;
}

void set_union(int g[], int h[],int d[], int r, int t, int *y)
{   int count=0,c1=*y;
    // mapping g to d 
    for(int i=0; i<r; i++, c1++)
        {   for(int j=0; j<=c1; j++)
                if(g[i] ==  d[j])
                    {   count++;
                        c1--;
                    }    
            if(count == 0)                 
                d[c1] = g[i];
            else 
                count = 0;   
        }
    // mapping h to d 
    for(int i=0; i<t; i++, c1++)
        {   for(int j=0; j<=c1; j++)
                if(h[i] == d[j])
                    {   count++;
                        c1--;
                    }
            if(count == 0)       
                d[c1] = h[i];
            else 
                count = 0;     
        }
    *y = c1;
}

void set_input(int a[], int b, char c)
{   do{ printf("enter the unique elements of set %c: ", c);
        for(int j=0; j<b; j++)
            scanf("%d", &a[j]);
      }while(set_checker(a, b));
}

void set_normal_input(int a[], int b, char c)
{   printf("enter the elements of set %c: ", c);
    for(int j=0; j<b; j++)
        scanf("%d", &a[j]);
}

void set_print(int a[], int b, char c[])
{   printf("\n\nset %s is: ", c);
    for(int k=0; k<b; k++)
        printf("%d, ", a[k]); 
}

int set_checker(int v[], int u)
{   for(int i=0 ; i<u; i++)
        for(int j = i+1; j<u ; j++)
            if(v[i] == v[j])
                {   printf("you've entered duplicate values please again\n");
                    return 1;
                }
    return 0;
}
