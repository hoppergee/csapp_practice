#include <stdio.h>

void expect(int expect_result, int x, int result) {
  printf("div16(%d)\n", x);
  printf("should return %d\n", expect_result);
  printf("real return %d\n", result);
  printf("\n");
}