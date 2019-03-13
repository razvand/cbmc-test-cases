#include <pthread.h>
#include <assert.h>

unsigned data = 0;
volatile unsigned flag = 0;


void* produce(void* arg) {
  data = 0x2a;
  flag = 1;
  return 0;
}

void* consume(void* arg) {
  while(flag == 0) {}
  assert(data != 0);
  return 0;
}

int main(){
  pthread_t producer, consumer;
  pthread_create(&producer, NULL, produce, NULL);
  pthread_create(&consumer, NULL, consume, NULL);
  return 0;
}

