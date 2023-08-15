#include <stdio.h>
#include <iostream>


void printS(int);
void prints(int);
void printsss(int);


int main()
{   printS(10);
    prints(10);
    printsss(10);
    
    return 1;
}

void printsss(int c)
{   //std::string star(c, '*');   //std::string  star(c, "*");
    std::string spac(c-2, ' ');

    for(int i=0; i<c; i++)
        if(i == 0 || i == c-1)
            std::cout << std::string(c,'*') << std::endl;
        else
            std::cout <<"*"<< spac <<"*"<< std::endl;
}

void prints(int b)
{   for(int r = 0; r<b; r++)
    {   for (int c = 0; c<b; c++)
            if(r==0 || r == b-1 || c==0 || c== b-1)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
}

void printS(int a)
{   for (int i = 0; i< a; i++)
        {   if (i == 0 || i == a-1)
                for (int j = 0; j<a; j++)
                    printf("*");
            else
                for (int k = 0; k<a; k++)
                    if (k == 0 || k==a-1)
                        printf("*");
                    else printf(" ");
            printf("\n");
        }
}