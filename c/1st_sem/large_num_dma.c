// 42.
#include <stdio.h>
#include <stdlib.h>

int main() {
  double *data;
  data = (double *)calloc(20, sizeof(double));
  if (data == NULL) {
  printf("Error!!! memory not allocated.");
  exit(0);
  }

  for (int i = 0; i < 20; ++i) {
  printf("Enter number%d: ", i + 1);
  scanf("%lf", data + i);
  }

  for (int i = 1; i < 20; ++i) {
    if (*data < *(data + i)) {
      *data = *(data + i);
   }
  }
  printf("Largest number = %.2lf", *data);

  free(data);
  return 0;
}