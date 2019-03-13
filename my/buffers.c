#include <stdlib.h>

#define BUFFER_SIZE 128

size_t data_buffer[BUFFER_SIZE];

void data(void)
{
	data_buffer[BUFFER_SIZE + 20] = 100;
}

void heap(void)
{
	size_t *heap_buffer = malloc(BUFFER_SIZE * sizeof(*heap_buffer));

	heap_buffer[BUFFER_SIZE + 20] = 100;
}

void stack(void)
{
	size_t stack_buffer[BUFFER_SIZE];

	stack_buffer[BUFFER_SIZE + 20] = 100;
}

void stack_dynamic(size_t n)
{
	size_t stack_buffer[n];

	stack_buffer[n + 20] = 100;
}
