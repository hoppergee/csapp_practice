#include <stdio.h>
#include "tadd_ok.c"

int tsub_ok(int x, int y) {
  return tadd_ok(x, -y);
}