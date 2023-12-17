#include <stdio.h>

int main() {
  char str[50];
  for (int i = 0; i < 10; i++) {
    sprintf(str, "Hello, world! for %d\n", i);
    puts(str);
  }
  return 0;
}
