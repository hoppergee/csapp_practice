#include <stdio.h>

int main() {
  int x = -1;
  int y = -2;

  unsigned ux = (int) x;
  unsigned uy = (int) y;

  printf("x is %d, y is %d, ux is %u, uy is %u\n", x, y, ux, uy);
  printf("x + y = %d\n", x + y);
  printf("ux + uy = %u\n", ux + uy);
  printf("x + y == ux + uy return: %d\n", (x + y) == (ux + uy));
}