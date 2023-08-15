#include <stdio.h>
#include <math.h>

int top, size;

int bin_to_dec (int);
int dec_to_bin (int);

int
main ()
{
  int dec = 12;			//1100 
  int bin = 11110;		// 22
  int d, b;
  d = bin_to_dec (bin);
  //b = dec_to_bin(dec);

  printf ("\ndecimal of %d is: %d", bin, d);

  return 0;
}

int
bin_to_dec (int h)
{
  int i = 0;
  int num = 0;
  while (h > 0)
    { num = num + (int) pow (2, (h % 10) * i) * (h % 10);
      h = h / 10;
      i++;
    }
  return num;
}

int
dec_to_bin (int k)
{

  return k;
}