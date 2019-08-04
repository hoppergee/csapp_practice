#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t) {
  return strlen(s) - strlen(t) > 0;
}

int main() {
  char* s = "ab";
  char* t = "abc";
  int result = strlonger(s, t);
  printf(" %d", result);
}

// This will raise error when s < t.