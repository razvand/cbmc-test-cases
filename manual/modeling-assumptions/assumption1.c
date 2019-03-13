unsigned int nondet_uint();

unsigned int one_to_hundred()
{
  unsigned int result=nondet_uint();
  __CPROVER_assume(result>=1 && result<=100);
  return result;
}
