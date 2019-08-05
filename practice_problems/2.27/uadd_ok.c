#include <stdio.h>

/* Determine whether arguments can be added ithout overflow */
int uadd_ok(unsigned x, unsigned y) {
  unsigned result;
  result = x + y;
  return !(result < x || result < y);
}

void output_result(unsigned expect_result, unsigned x, unsigned y, unsigned result) {
  printf("when result < %d or %d uadd_ok(x, y)\n", x, y);
  printf("should return %d\n", expect_result);
  printf("real return %d\n", result);
  printf("\n");
}

int main() {
  unsigned x = 4294967295;
  unsigned y = 4294967295;

  output_result(0, x, y, uadd_ok(x, y));

  x = 10;
  y = 4294967295;
  output_result(0, x, y, uadd_ok(x, y));

  x = 10;
  y = 10;
  output_result(1, x, y, uadd_ok(x, y));
}