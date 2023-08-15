// 38.
#include <stdio.h>
//#include <ctype.h>


int main(){
    FILE *t;
    t = fopen("F:\\upgrade\\c++\\number_file.txt","r");
    
    FILE *s;
    s = fopen("F:\\upgrade\\c++\\square_file.txt","w");

    char c = getc(t);
    int f; 
    while (c!=EOF)
    { fseek(t, -1, SEEK_CUR);
    fscanf(t, "%d", &f);  
    fprintf(s, "%d ", f*f);
    c = getc(t);
    }
    
    fclose(t);
    fclose(s);
    return 0 ;
}

