// 45. 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

     int n1=atoi(argv[1]);
     int n2=atoi(argv[2]);
     int n3=atoi(argv[3]);
     int n4=atoi(argv[4]);
     int n5=atoi(argv[5]);
     int sum = n1+n2+n3+n4+n5;
     printf("sum is: %d \n", sum);

     return 0;
}

/*

type this in VScode's terminal 
cd "d:\up\c\1st_sem\" ; if ($?) { gcc sum_num_in_cmd.c -o sum_num_in_cmd } ; if ($?) { .\sum_num_in_cmd 1 2 3 4 5}

*/

