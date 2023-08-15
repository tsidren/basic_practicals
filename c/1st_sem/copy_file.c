// 37. 
#include <stdio.h>

int main(){
    FILE *t;
    t = fopen("F:\\upgrade\\c++\\a.txt","r");
    
    FILE *s;
    s = fopen("F:\\upgrade\\c++\\b.txt","w");

    char c = getc(t);
    while (c!=EOF)
    {   putc(c, s);
        c = getc(t);
    }

    fclose(t);
    fclose(s);
    return 0 ;
}

