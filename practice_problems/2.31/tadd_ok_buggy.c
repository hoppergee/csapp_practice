#include <stdio.h>

/* For two's complement addition */
/* Determine whether arguments can be added ithout overflow */
int tadd_ok(int x, int y) {
  int sum = x + y;
  return (sum-x == y) && (sum-y == x);
}

void output_result(int expect_result, int x, int y, int result) {
  printf("when result < %d or %d tadd_ok(x, y)\n", x, y);
  printf("should return %d\n", expect_result);
  printf("real return %d\n", result);
  printf("\n");
}

int main() {
  int x = 2147483647;
  int y = 2147483647;
  output_result(0, x, y, tadd_ok(x, y));

  int sum = x + y;
  printf("sum = 2147483647 + 2147483647 = %d\n", sum);
  printf("sum - x = %d\n", sum - x);
  printf("sum - y = %d\n", sum - y);
  printf("\n");

  x = 10;
  y = 10;
  output_result(1, x, y, tadd_ok(x, y));

  x = -2147483648;
  y = -2147483648;
  output_result(0, x, y, tadd_ok(x, y));

  sum = x + y;
  printf("sum = -2147483648 + -2147483648 = %d\n", sum);
  printf("sum - x = %d\n", sum - x);
  printf("sum - y = %d\n", sum - y);
  printf("\n");

  x = 10;
  y = -2147483648;
  output_result(1, x, y, tadd_ok(x, y));

  x = -10;
  y = 2147483647;
  output_result(1, x, y, tadd_ok(x, y));
}