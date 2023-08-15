#include<stdio.h>
#include<string.h>

int main(){
    char a[40];
    int temp;
    printf("enter the string: \n");
    scanf("%[^\n]%*c", a);

    for(int i=0;a[i]!='\0';i++)
    {   if(a[i]==' ')
        {for(int j=i;a[j]!='\0';j++)
            a[j]=a[j+1];
        }
    }       


    printf("new sting is: %s", a);
    printf("\n it has %d characters", strlen(a));

    return 0;
}