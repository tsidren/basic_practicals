// this is correct 
// when we don't want to save the changes 
// little complex O(2n^2)
// scroll down for diffrent approach 

#include <stdio.h>

struct student
{   char name[30];
    int roll;
    int marks;
};


void bubble_sort(int [], int);


void main()
{ struct student a[]= {
        {"shi", 1, 50},
        {"asd", 4, 60},
        {"qwe", 2, 90},
        {"zxc", 3, 70}
    };

int arr[4],temp;
for(int i=0;i<4;i++)
    arr[i]=a[i].marks;
bubble_sort(arr,4);

for(int k=0; k<4;k++)
    for(int j=0; j<4; j++)
        if(arr[k]==a[j].marks)
            printf("\nname= %s, roll= %d, marks=%d", a[j].name, a[j].roll, a[j].marks);

}


void bubble_sort(int a[],int n){
    int temp;
    for(int i=n-1;i>0;i--)
        for(int j=0;j<i;j++)
            if(a[j]<a[j+1])
                {temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                }
}
/*
// this is also correct 
// better in complexity  O(n^2)
// and also changes the struct all together instead of just printing in order 

#include <stdio.h>
#include <string.h>


struct student
{   char name[30];
    int roll;
    int marks;
};


void sor(struct student [], int);

void sw(struct student *, struct student *);


void main()
{ struct student a[]= {
        {"shi", 1, 50},
        {"asd", 4, 60},
        {"qwe", 2, 90},
        {"zxc", 3, 70}
    };

    sor(a,4);
    for(int j=0; j<4; j++)
        printf("\nname= %s, roll= %d, marks=%d", a[j].name, a[j].roll, a[j].marks);


}

void sw(struct student *er, struct student *rt)
{
    struct student temp;
    temp.marks = er->marks;
    temp.roll = er->roll;
    strcpy(temp.name, er->name);
    er->marks=rt->marks;
    er->roll=rt->roll;
    strcpy(er->name,rt->name);
    rt->marks=temp.marks;
    rt->roll=temp.roll;
    strcpy(rt->name,temp.name);

}


void sor(struct student gg[],int n)
{   
    int temp;
    for(int i=n-1;i>0;i--)
        for(int j=0;j<i;j++)
            if(gg[j].marks<gg[j+1].marks)
                sw(&gg[j], &gg[j+1]);


}

*/