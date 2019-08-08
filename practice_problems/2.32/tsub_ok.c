#include <stdio.h>
#include "tadd_ok.c"

int tsub_ok(int x, int y) {
  return y == -2147483648 ? 0 : tadd_ok(x, -y);
}