#include <stdio.h>
#include <assert.h>

int main() {
  printf("sizeof(long int): %d\n", (int)sizeof(long int));
  printf("sizeof(int *): %d\n", (int)sizeof(int *));
  assert(0);
}
