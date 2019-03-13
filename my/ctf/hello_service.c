#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define FLAG_SIZE       50

void read_flag(char* buffer)
{
	int fd = open("/home/ctf/flag", O_RDONLY);
	int i;

	if (fd < 0) {
		perror("open");
		exit(EXIT_FAILURE);
	}

	read(fd, buffer, FLAG_SIZE);

	for (i = 0; i < FLAG_SIZE; i++) {
		buffer[i] ^= i;
	}

	close(fd);
}

int main(int argc, char* argv[])
{
	char flag[FLAG_SIZE] = {0};
	char buffer[20] = {0};

	read_flag(flag);

	char* name = (char*)malloc(512);
	if (!name)
		return -1;

	memcpy(buffer, "Hello, ", 7);
	fgets(name, sizeof(buffer) + sizeof(flag), stdin);

	memcpy(buffer + 7, name, strlen(name));
	buffer[8 + strlen(name)] = '\0';

	puts(buffer);
	return 0;
}
