// 39. 
#include <stdio.h>
#include <ctype.h>


int main(){
    FILE *t;
    t = fopen("F:\\upgrade\\c++\\number_file.txt","r");
    
    FILE *s;
    s = fopen("F:\\upgrade\\c++\\ODD.txt","w");
    
    FILE *u;
    u = fopen("F:\\upgrade\\c++\\EVEN.txt","w");

    char c = getc(t);
    int f; 
    while (c!=EOF)
    { fseek(t, -1, SEEK_CUR);
    fscanf(t, "%d", &f);
     
    if(f%2==0)
    fprintf(u, "%d ", f);
    else 
    fprintf(s, "%d ", f);
    c = getc(t);
    }
    
    fclose(u);
    fclose(t);
    fclose(s);
    return 0 ;
}

