#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t) {
  return strlen(s) > strlen(t);
}

int main() {
  char* s = "ab";
  char* t = "abc";
  int result = strlonger(s, t);
  printf(" %d", result);
}