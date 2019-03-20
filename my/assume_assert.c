#include <assert.h>
#include <stdlib.h>

int nondet_int(void);

void f1(void)
{
	int n;

	__CPROVER_assume(n == 5);
	assert(n > 2);
}

void f2(void)
{
	int n;

	__CPROVER_assume(n == 5);
	assert(n > 20);
}

void f3(void)
{
	int n = rand();

	__CPROVER_assume(n == 5);
	assert(n > 2);
}

void f4(void)
{
	int n = rand();

	__CPROVER_assume(n == 5);
	assert(n > 20);
}

void f5(void)
{
	int n = nondet_int();

	__CPROVER_assume(n == 5);
	assert(n > 2);
}

void f6(void)
{
	int n = nondet_int();

	__CPROVER_assume(n == 5);
	assert(n > 20);
}

void f11(void)
{
	int n;

	n = 5;
	assert(n > 2);
}

void f12(void)
{
	int n;

	n = 5;
	assert(n > 20);
}

void f13(void)
{
	int n = rand();

	n = 5;
	assert(n > 2);
}

void f14(void)
{
	int n = rand();

	n = 5;
	assert(n > 20);
}

void f15(void)
{
	int n = nondet_int();

	n = 5;
	assert(n > 2);
}

void f16(void)
{
	int n = nondet_int();

	n = 5;
	assert(n > 20);
}

void f21(void)
{
	int n;

	assert(n > 2);
}

void f22(void)
{
	int n;

	assert(n > 20);
}

void f23(void)
{
	int n = rand();

	assert(n > 2);
}

void f24(void)
{
	int n = rand();

	assert(n > 20);
}

void f25(void)
{
	int n = nondet_int();

	assert(n > 2);
}

void f26(void)
{
	int n = nondet_int();

	assert(n > 20);
}

int main(void)
{
	f1();
	f2();
	f3();
	f4();
	f5();
	f6();
	f11();
	f12();
	f13();
	f14();
	f15();
	f16();
	f21();
	f22();
	f23();
	f24();
	f25();
	f26();
	return 0;
}
