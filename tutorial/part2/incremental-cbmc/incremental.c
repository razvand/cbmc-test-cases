#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define DELTA 0.25f
#define OMEGA 1.0f
#define ZETA 0.25f

int main(int argc, char** argv)
{
  int N;
  N = 2;
  // __CPROVER_assume(N == 2);

  float x1[N];
  float x2[N];  
  for(int i=0;i<N;i++)
  {
    x1[i] = 0.0f;
    x2[i] = 0.0f;
  }

  while(1) 
  {
    float u[1];
#ifdef COMPILE
    u[0] = 1.0f;
#else
    __CPROVER_assume(0.95f <= u[0] && u[0] <= 1.05f);
#endif
    
    x1[1] = x1[0] + DELTA*x2[0];
    x2[1] = x2[0] + DELTA*(u[0]-2*ZETA*OMEGA*x2[0]-OMEGA*OMEGA*x1[0]);    

    float y = x1[1];
    printf("y: %f\n",y);

    assert(y <= 1.6f);

    x1[0] = x1[1];
    x2[0] = x2[1];
  }

  return 1;
}
