#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t) {
  int result = strlen(s) > strlen(t);
  return result > 0;
}

int main() {
  char* s = "ab";
  char* t = "abc";
  int result = strlonger(s, t);
  printf(" %d", result);
}