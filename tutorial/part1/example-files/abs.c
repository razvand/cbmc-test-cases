#include <assert.h>
#include <stdlib.h>

int abs (int x) {
  int y = x;

  if (x < 0) {
    y = -x;
  }

  return y;
}
