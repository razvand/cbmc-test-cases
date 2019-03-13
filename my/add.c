#include <assert.h>

int add(void)
{
	int a;

	a = 1;

	if (a > 2)
		a++;
	a += 4;

	assert(a == 5);
}

int main(void)
{
	add();
	return 0;
}
