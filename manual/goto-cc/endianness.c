#include <stdio.h>
#include <assert.h>

int main() {
  int i=0x01020304;
  char *p=(char *)&i;
  printf("Bytes of i: %d, %d, %d, %d\n", p[0], p[1], p[2], p[3]);
  assert(0);
}
