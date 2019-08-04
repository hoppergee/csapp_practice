#include <stdio.h>

float sum_elements(float a[], unsigned length) {
  int i;
  float result = 0;

  for (i = 0; i <= length - 1; i++)
    result += a[i];
  return result;
}

int main() {
  float a[2];
  a[0] = 1.1;
  a[1] = 1.2;
  float result;
  result = sum_elements(a, 0);
  printf(" %.2f", result);
  result = sum_elements(a, 1);
  printf(" %.2f", result);
  result = sum_elements(a, 2);
  printf(" %.2f", result);
}
