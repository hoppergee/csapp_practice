#include <stdio.h>
#include "tmult_ok.c"
#include "expect.c"

int main() {
  int x = 0;
  int y = -2147483648;
  expect(1, x, y, tmult_ok(x, y));

  x = -2147483648;
  y = 0;
  expect(1, x, y, tmult_ok(x, y));

  x = 1;
  y = 1;
  expect(1, x, y, tmult_ok(x, y));

  x = -2147483648;
  y = -2147483648;
  expect(0, x, y, tmult_ok(x, y));

}