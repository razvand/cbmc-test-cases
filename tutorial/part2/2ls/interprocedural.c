#include <limits.h>

int neg(int x) 
{ 
  __CPROVER_assume(x>INT_MIN);
  return -x;
}

int sign(int x) 
{ 
  if(x>0) return 1;
  else if (x==0) return 0;
  return -1;
}

void main()
{
  int x;
  __CPROVER_assume(x>0);

  int s1 = sign(x);
  int y = neg(x);
  int s2 = sign(y);

  assert(x==-y);
  assert(y<0);
  assert(s1!=s2);
}
