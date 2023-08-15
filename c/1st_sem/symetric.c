#include<stdio.h>

int main(){

    int a[3][3] = {1,2,3,2,4,5,3,5,8};
    int c=0;
    printf("hi");
    for(int i=0; i<3; i++)
        for(int j=0; j<3;j++)
            if (a[i][j]==a[j][i])
                c++;

    if (c==9)
        printf("it is sym");
    else printf("it is not ");
    return 0;
}