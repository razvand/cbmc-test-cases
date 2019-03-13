#include <assert.h>

/* 1. Loop unwinding is an under-approximate technique and so it can miss
 * bugs.  Try the following (contrived) example with --unwinding less
 * than 256.  Why do you get this result?
 */

#define LENGTH 256

void f00 (void) {
  int array[LENGTH];
  int i;

  for (i = 0; i < LENGTH; ++i) {
    array[i] = i;
  }

  assert(array[0] == 23);

  return;
}


/* 2. How is the next function different? */


int nondet_choice (void);

void f01 (void) {
  int array[LENGTH];
  int i;

  for (i = 0; i < LENGTH && nondet_choice(); ++i) {
    array[i] = i;
  }

  assert(array[0] == 23);

  return;
}


/* 3. Unwinding normally adds assertions at the end of any path that
 * hits the unwind limit.  --no-unwinding-assertions converts these to
 * assumptions (i.e. these paths are ignored).  Another option is
 * --partial-loops which adds a break at the end of the path.
 *
 * Try --partial-loops on function f00 and see if it solve the problem.
 */


/* 4. --partial-loops is an overapproximation (it adds behaviours) and
 * thus when used with unwinding it is an overapproximation of an
 * underapproximation.  So it can potentially miss bugs and introduce
 * false alarms.
 *
 * Write two functions, one which misses a bug with --partial-loops
 * enabled and one that gives a false alarm.
 */

