nclude <assert.h>

int function_to_test(int some_argument)
{
  assert(some_argument == 0);
  return some_argument;
}

void harness(void)
{
  int argument = nondet_int();
  function_to_test(argument);
}
