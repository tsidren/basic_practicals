 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact (int);
int per_ (int, int);
int com_ (int, int);

int main ()
{ int h, n, r;
  printf("enter the choice you want to do\n");
  printf("1. permutations\n");
  printf("2. combination\n");
  printf("3. to exit\n enter the choice: ");
  scanf("%d", &h);

  while(h!=3)
    { switch(h)
        { case 1: 
            printf("you've chosen permutations\n now enter 'n' and 'r':  ");
            scanf("%d %d", &n , &r);
            printf("the answer is: %d\n", per_(n,r));
          break;
          case 2: 
            printf("you've chosen combinations\n now enter 'n' and 'r':  ");
            scanf("%d %d", &n , &r);
            printf("the answer is: %d\n", com_(n,r));
          break;
          default: printf("wrong input check again. \n");
        }
  printf("enter the choice you want to do\n");
  printf("1. permutations\n");
  printf("2. combination\n");
  printf("3. to exit\n");
  scanf("%d", &h);
    }
  return 0;
}

int fact (int a)
{ if(a < 0)
    {printf("selections cannot be more than given.");
    exit(0);
    }
  if(a==0) 
    return 1;
  if (a == 1)
    return a;
  else
    return fact (a - 1) * a;
}

int per_ (int a, int b)
{ int c;
  c = pow(a,b); 
  return c;
}

int com_ (int a, int b)
{ int c;
  c = fact (b+a-1) / (fact (b) * fact (a - 1));
  return c;
}