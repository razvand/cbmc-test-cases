#include <assert.h>

char nondet ();

int main (void) {
  char base = nondet();
  int total = 0;

  int i;
  for (i = 0; i < base; ++i) {
    total += base;
  }

  assert(total <= 16129);

  return 0;
}
