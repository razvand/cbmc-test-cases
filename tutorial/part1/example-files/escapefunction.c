#include <string.h>
#include <stdlib.h>

char * escape (const char *s) {
  char * escaped = malloc((strlen(s) + 1) * 2);
  char * output = escaped;

  *(output++) = '"';
  while (*s != '\0') {
    if ((*s == '"') || (*s == '\\')) {
      *(output++) = '\\';
    }
    *(output++) = *(s++);
  }
  *(output++) = '"';
  *(output++) = '\0';

  return escaped;
}
