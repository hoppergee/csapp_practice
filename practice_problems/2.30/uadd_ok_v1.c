#include <stdio.h>

/* For two's complement addition */
/* Determine whether arguments can be added ithout overflow */
int uadd_ok(int x, int y) {
  if (x > 0 && y > 0)
    return x + y > 0;
  if (x < 0 && y < 0)
    return x + y < 0;
  return 1;
}

void output_result(int expect_result, int x, int y, int result) {
  printf("when result < %d or %d uadd_ok(x, y)\n", x, y);
  printf("should return %d\n", expect_result);
  printf("real return %d\n", result);
  printf("\n");
}

int main() {
  int x = 2147483647;
  int y = 2147483647;

  output_result(0, x, y, uadd_ok(x, y));

  x = 10;
  y = 10;
  output_result(1, x, y, uadd_ok(x, y));

  x = -2147483648;
  y = -2147483648;
  output_result(0, x, y, uadd_ok(x, y));

  x = 10;
  y = -2147483648;
  output_result(1, x, y, uadd_ok(x, y));

  x = -10;
  y = 2147483647;
  output_result(1, x, y, uadd_ok(x, y));
}