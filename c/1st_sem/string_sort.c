#include<stdio.h>
#include<string.h>

int main(){
    char a[20];
    int n = strlen(a),temp;
    printf("enter the string: \n");
    scanf("%s", &a);

    for(int i=n-1;i>0;i--)
    for(int j=0;j<i;j++)
        if(a[j]>a[j+1])
           {
            temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }      


printf("ordered string is: %s", a);


    return 0;
}