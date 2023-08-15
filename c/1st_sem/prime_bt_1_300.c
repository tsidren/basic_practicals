// 32.  
#include <stdio.h>
#include <ctype.h>

int main(){
    int p = 0;
    for(int i=2; i<=300; i++)
        {
        for(int j=1; j<i; j++)
            if (i%j==0)
                p++;
        if(p==1)
            printf(" %d ", i);
        p=0;
        }
    return 0;
}

// alt+up\down          move a line 
// ctrl+alt+up\down     add cursor 
// shift+alt+up         duplicate line 
// shift+alt+cursor     column selector
// ctrl+shift+[         fold code 

