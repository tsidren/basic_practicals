// 44. 
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) 
{ 
    int n, i;
    unsigned long long factorial = 1;
  
    n = atol (argv[1]);  // this is neccessary at it read everything in string   so we need to convert it. 
  
 
    for (i = 1; i <= n; ++i)
    {
     factorial *= i;
    } 
 
    printf ("Factorial of %d = %llu", n, factorial);

}


/*
change directory to file                        cd                    d:       cd up\c\1st_sem
then compile/load program                       gcc  file_name.c      gcc factorial_in_cmd.c -o factorial_in_cmd
then pass arguments to the program if any       file argument         factorial_in_cmd 5
then it will show the desired output. 



or just give the arguments from the VScode 
run one time 
 cd "d:\up\c\1st_sem\" ; if ($?) { gcc factorial_in_cmd.c -o factorial_in_cmd } ; if ($?) { .\factorial_in_cmd}
change this to 
 cd "d:\up\c\1st_sem\" ; if ($?) { gcc factorial_in_cmd.c -o factorial_in_cmd } ; if ($?) { .\factorial_in_cmd 5}

 it will give output for argument 5 



*/