#include <stdio.h>
long hcf(long, long);

int main() {
  long x, y, hc, lcm;

  printf("Enter two integers\n");
  scanf("%ld%ld", &x, &y);

  hc = hcf(x, y);
  lcm = (x*y)/hc;

  printf("highest common factor of %ld and %ld = %ld\n", x, y, hc);
  printf("Least common multiple of %ld and %ld = %ld\n", x, y, lcm);

  return 0;
}

long hcf(long a, long b) {
  if (b == 0)
    return a;
  else
    return hcf(b, a % b);
}