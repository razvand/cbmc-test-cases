#include <stdio.h>

#define NUM	8U

unsigned int fibonacci(unsigned int n)
{
	return n > 1 ? fibonacci(n-1) + fibonacci(n-2) : 1;
}

int main(void)
{
	printf("fibonacci(%u): %u\n", NUM, fibonacci(NUM));
	return 0;
}
