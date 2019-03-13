#include "escapeFunction.c"

char nondet_char (void);

int main (void) {
  char string[16];
  int i;

  for (i = 0; i < 16; ++i) {
    string[i] = nondet_char();
    if (string[i] == '\0') { break; }
  }

  char *output = escape(string);

  return 0;
}
