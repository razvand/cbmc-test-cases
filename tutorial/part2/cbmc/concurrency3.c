#include <pthread.h>
#include <assert.h>

int x = 0;
int y = 0;
int c = 0;

void* thread1() 
{
  x = 1;
  int r = y;
  if(r==0) 
  {
    c++;
    assert(c<=1);
    c = 0;
    x = 0;
  }
}

void* thread2() 
{
  y = 1;
  int s = x;
  if(s==0) 
  {
    c++;
    assert(c<=1);
    c = 0;
    y = 0;
  }
}


int main() 
{
  pthread_t t1,t2;

  pthread_create(&t1, 0, thread1, 0);
  pthread_create(&t2, 0, thread2, 0);

  pthread_join(t1, 0);
  pthread_join(t2, 0);

  return 0;
}
