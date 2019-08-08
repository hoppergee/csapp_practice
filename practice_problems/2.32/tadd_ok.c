#include <stdio.h>

/* For two's complement addition */
/* Determine whether arguments can be added ithout overflow */
int tadd_ok(int x, int y) {
  int sum = x + y;
  int negative_overflow = x < 0 && y < 0 && sum >= 0;
  int positive_overflow = x > 0 && y > 0 && sum <= 0;
  return !negative_overflow && !positive_overflow;
}

void output_result(int expect_result, int x, int y, int result) {
  printf("when result < %d or %d tadd_ok(x, y)\n", x, y);
  printf("should return %d\n", expect_result);
  printf("real return %d\n", result);
  printf("\n");
}
