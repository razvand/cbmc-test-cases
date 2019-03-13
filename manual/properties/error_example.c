// error_example.c
#include <stdlib.h>

void api_error(void);
void internal_error(void);

int main(void)
{
  int arr[10] = {1,2,3,4,5, 6, 7, 8, 9, 10};
  int sum = 0;
  for(int i = 1; i < 10; ++i)
  {
    sum += arr[i];
  }
  if(sum != 55)
  {
    // we made a mistake when calculating the sum
    internal_error();
  }
  if(rand() < 0)
  {
    // we think this cannot happen
    api_error();
  }
  return 0;
}
