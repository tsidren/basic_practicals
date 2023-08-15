#include <stdio.h>

int rec_area(int , int );


int main(){

    int lenght , breadth, area;
    printf("enter the dimensions of rectangle: \n");
    scanf("%d%d", &lenght, &breadth);
    area = rec_area(lenght,breadth);
    printf("the area of the rectangle will be: %d", area);


    return 0;
}


int rec_area(int a, int b)
{
    return (a*b);
}