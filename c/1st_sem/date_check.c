#include<stdio.h>
#include<string.h>

struct date
{ int date;
    char month[20];
    int year;
};

int main()
{
    struct date a,b;
    printf("enter the first date: \n");
    scanf("%d%s%d", &a.date,&a.month,&a.year);

    printf("enter the second date: \n");
    scanf("%d%s%d", &b.date,&b.month,&b.year);
    
    if(a.date==b.date&&!strcmpi(a.month, b.month)&&a.year==b.year)
        printf("equal");
    else printf("unequal");

    return 0;
}