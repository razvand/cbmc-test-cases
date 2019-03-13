#include <pthread.h>
#include <assert.h>

pthread_mutex_t mutex;
int s = 0;
int t = 1;

void* thread() 
{
  s++;
  assert(s == t);
  t++;
}

int main() 
{
  pthread_t t1,t2;
  pthread_mutex_init(&mutex, 0);

  pthread_create(&t1, 0, thread, 0);
  pthread_create(&t2, 0, thread, 0);

  pthread_join(t1, 0);
  pthread_join(t2, 0);

  pthread_mutex_destroy(&mutex);
  return 0;
}
