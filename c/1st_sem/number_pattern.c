// 33
#include<stdio.h>

int main(){

    int f=3;

    for(int j=0;j<f;j++)
        {for (int i=f-j;i>0;i--)
            printf("%d ", i);
        printf("\n");
        }  
    return 0;
}


/*


54321     line 1 terms 5
4321      line 2    4
321       line 3    3
21        line 4    2
1         line 5    1


*/