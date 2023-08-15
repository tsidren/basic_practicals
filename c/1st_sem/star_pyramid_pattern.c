// 34 
#include <stdio.h>
#include<conio.h>

void main()
{
    
//   *
//  ***
// *****
//*******

// n=4  star = 7   spaces
// n=3  star = 5    loop     00 ---->  star= 2n-1
// n-1 space      i stars 

int n=5;

for(int i=1; i<=n; i++)
{ for(int j=0; j<n-i ;j ++)
    printf(" ");
  for(int k=0; k<2*i-1; k++)
    printf("*");
  printf("\n");
}
printf("\n\n");
/*
                N   spaces   
     *          1     5
    * *         2     4
   * * *        3     3
  * * * *       4     2  
 * * * * *      5     1
* * * * * *     6     0
*/
int s=6;

for(int i=1; i<=s; i++)
{ for(int j=0; j<s-i;j++)
    printf(" ");
  for(int k=0; k<i; k++)
    printf("* ");
  printf("\n");
}




}



