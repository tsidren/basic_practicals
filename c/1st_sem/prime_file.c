// 40. 
#include <stdio.h>
#include <ctype.h>


int check_prime(int);

int main(){
    FILE *s;
    s = fopen("F:\\upgrade\\c++\\prime.txt","w");

    char c = getc(s);
    int f; 

    for(int i=2; i<=100; i++)
        {
            if(check_prime(i))
                fprintf(s, "%d ", i);
        }


    fclose(s);
    return 0 ;
}

int check_prime(int a)
{   int p = 0;
    for(int j=1; j<a; j++)
        if (a%j==0)
            p++;
    if(p>1)
        return 0;
    else 
        return 1; 
}