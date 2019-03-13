
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int verify(char *str)
{
	char buf[] = "Where is the flag?";
	int n;

	return strncmp(buf, str, strlen(buf + n)) == 0;
}

void foo()
{
	char buf[1024];
	char num[4];
	unsigned int n;

	read(0, num, 4);
	n = atoi(num);

	if (fgets(buf + n, 16, stdin) == NULL) {
		perror("fgets");
		exit(EXIT_FAILURE);
	}

	if (verify(buf)) {
		FILE *f = fopen("/home/ctf/flag", "r");
		char flag[32];

		fscanf(f, "%s", flag);
		printf("%s\n", flag);
		fclose(f);
	}
}

int main(void)
{
	foo();

	return 0;
}
