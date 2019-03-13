#include <limits.h>

void f00()
{
  int x,y;
  __CPROVER_assume(x>=0);
  __CPROVER_assume(x-2==y);
  while(x>0) {
    x--;
    y--;
  }
  assert(y==-2);
}

void f01()
{
  int x,y;
  __CPROVER_assume(x>INT_MIN);
  __CPROVER_assume(x<y);
  __CPROVER_assume(x==-y);
  while(x<y) {
    x++;
    y--;
  }
  assert(x==0);
}

void f02()
{
  int x, y;
  __CPROVER_assume(x==y);
  while(x<=y)
  {
    if(x<y) x++;
    else if (x>y) y++;
  }
  assert(0);
}

void f03()
{
  int x, y;
  __CPROVER_assume(x<y);
  while(x<100)
  {
    x++;
    y++;
  }
  assert(x!=y);
}


void main()
{
}
