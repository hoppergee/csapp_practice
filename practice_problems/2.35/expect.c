#include <stdio.h>

void expect(int expect_result, int x, int y, int result) {
  printf("tmult_ok(%d, %d)\n", x, y);
  printf("should return %d\n", expect_result);
  printf("real return %d\n", result);
  printf("\n");
}