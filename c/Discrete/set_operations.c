#include <stdio.h>

void set_maker(int [],int *);

int set_checker(int [], int);

void set_input(int [], int, char); 

void set_print(int [], int, char []);

void set_union(int [], int [],int [], int, int, int *);

void set_intersection(int [], int [],int [], int, int, int *);

void set_diffrence(int [], int [],int [], int, int, int *);

void set_sym_diffrence(int [], int [],int [], int, int, int *);

void set_normal_input(int [], int, char );


int main()
{
// intialisations
int a[15], b[15], c[30], y[30], t[30], h[30];
int q, w, c1=0, u=0, o=0, p=0;
    
// input for the number of elements
printf("enter the size of both the sets: ");
scanf("%d %d", &q, &w);


//this is to remove any duplicacy
//and user enters duplicate values to a set which is wrong 
//so this set_maker() removes the duplicates and updates the size also 
/*
set_normal_input(a, q, 'A');
set_normal_input(b, w, 'B');
set_maker(a,&q);
set_maker(b,&w);
*/

// input of the set values 
//  only unique values are allows else it will ask again and again 
set_input(a,q,'A');
set_input(b,w,'B');


set_union(a,b,c,q,w,&c1);
set_intersection(a,b,y,q,w,&u);
set_diffrence(a,b,t,q,w,&o);
set_sym_diffrence(a,b,h,q,w,&p);

// printing 
set_print(a,q, "A");
set_print(b,w, "B");
set_print(c,c1, "A U B");
set_print(y,u, "a n B");
set_print(t,o, "A - B");
set_print(h,p, "A [-] B");
return 0; 
}

void set_sym_diffrence(int a[], int b[],int c[], int d, int e, int *f)
{int j[30];
int x[30];
int u=0, k=0;
    int r=*f;
    set_intersection(a,b,j,d,e,&u);
    set_union(a,b,x,d,e,&k);
    set_diffrence(x,j,c,k,u,&r);
    *f=r;
}

void set_diffrence(int a[], int b[],int c[], int d, int e, int *f)
{ int k=*f;
int count = 0; 
    for(int i=0;i<d;i++)
        {for(int j=0;j<e;j++)
            {   if(a[i]==b[j])
                    count++;
            }
        if(count==0)
            {
                c[k]=a[i];
                k++;
            }
        count=0;
        }
*f=k;

}

void set_intersection(int a[], int b[],int c[], int d, int e, int *f)
{   
    int k=*f;
    for(int i=0;i<d;i++)  
        for(int j=0;j<e;j++)
            if(a[i]==b[j])
            {   c[k]=a[i];
                k++;
            }
    *f=k;
}

void set_union(int g[], int h[],int d[], int r, int t, int *y)
{   
int count=0,c1=*y;
// mapping g to d 
    for(int i=0;i<r;i++,c1++)
        {   
            for(int j=0;j<=c1;j++)
                if(g[i]==d[j])
                    {count++;
                     c1--;
                    }    
            if(count==0)                 
                d[c1]=g[i];
            else 
                count=0;   
        }
// mapping h to d 
    for(int i=0;i<t;i++,c1++)
        {   
            for(int j=0;j<=c1;j++)
                if(h[i]==d[j])
                    {count++;
                    c1--;
                    }
            if(count==0)       
                d[c1]=h[i];
            else 
                count=0;   
            
        }
    *y=c1;
}

void set_input(int a[], int b, char c)
{
    do{
        printf("enter the unique elements of set %c: ", c);
        for(int j=0; j<b;j++)
            scanf("%d", &a[j]);
    }while(set_checker(a,b));
}

void set_normal_input(int a[], int b, char c)
{
        printf("enter the elements of set %c: ", c);
        for(int j=0; j<b;j++)
            scanf("%d", &a[j]);
    
}

void set_print(int a[], int b, char c[])
{   
    printf("\n\nset %s is: ", c);
    for(int k=0;k<b;k++)
        printf("%d, ", a[k]); 
}

void set_maker(int v[], int *u)
{    int h=*u;
    int temp;
    for(int i=h-1;i>0;i--)
        for(int j=0;j<i;j++)
            if(v[j]>v[j+1])
                {temp = v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                }

    for(int i=0;i<h;i++)
            if(v[i]==v[i+1])
            {
                for(int j=i;j<h;j++)
                { temp = v [j];
                v[j] = v[j+1];
                v[j+1] = temp;
                }
            h--;
            i--;    
            }
           
    *u=h;
}

int set_checker(int v[], int u)
{   
    for(int i=0 ; i<u; i++)
        for(int j = i+1; j < u ; j++)
            if(v[i] == v[j])
                {   printf("you've entered duplicate values please again\n");
                    return 1;
                }
    return 0;
}
