#define NUM_ROUNDS 100000

int main(void)
{
	unsigned int i, n;
	unsigned int b[128];

	for (i = 0; i < NUM_ROUNDS; i++) {
		b[i % 128] = b[i % 128] ^ i;
		n = n + i;
		if (n > 70)
			b[i % 128] = b[i % 128] + n;
	}

	return 0;
}
