#include <stdio.h>
#include "tsub_ok_buggy.c"

int main() {
  int x = 2147483647;
  int y = 2147483647;

  output_result(1, x, y, tsub_ok(x, y));

  x = 10;
  y = 10;
  output_result(1, x, y, tsub_ok(x, y));

  x = -2147483648;
  y = -2147483648;
  output_result(0, x, y, tsub_ok(x, y));

  x = 10;
  y = -2147483648;
  output_result(0, x, y, tsub_ok(x, y));

  x = -10;
  y = 2147483647;
  output_result(0, x, y, tsub_ok(x, y));  
}