#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void make_it_easy(void)
{
	system("/bin/sh");
}

int main(void)
{
	char name[32];

	printf("Tell me your name: ");
	__CPROVER_assume(stdout != NULL);
	fflush(stdout);
	__CPROVER_assume(stdout != NULL);
	fgets(name, 64, stdin);
	printf("Hello, %s", name);
	return 0;
}
