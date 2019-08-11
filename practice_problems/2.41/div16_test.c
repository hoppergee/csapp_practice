#include <stdio.h>
#include "div16.c"
#include "expect.c"

int main() {
  int x = -32;
  expect(-2, x, div16(x));

  x = -33;
  expect(-2, x, div16(x));

  x = -40;
  expect(-2, x, div16(x));
}