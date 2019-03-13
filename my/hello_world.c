#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int called_func(void);

char *xorencrypt(char *message, char *key)
{
	size_t messagelen = strlen(message);
	size_t keylen = strlen(key);

	char *encrypted = malloc(messagelen + 1);
	
	int i;
	for (i = 0; i < messagelen; i++) {
		encrypted[i] = message[i] ^ key[i % keylen];
	}
	encrypted[messagelen] = '\0';

	return encrypted;
}

void count(int n)
{
	int i;

	for (i = 0; i < n; ++i) {
		printf("Count: %d\n", i);
	}
}

int big_useless_func(int time, int ex, int ey, int px, int **e, int am)
{
	static char dir = 0;
	unsigned char x_close = 0xFF, y_close = 0xFF, min = 0xFF;
	unsigned char aux, aux2, aux3 = 3;
	short i_first = 0, j_first = 0;

	if (time > 0) {
		--time;
		return time;
	}

	if (dir == 0) {
		if (ex < 12 + 4 && ex > 32 - 4){
			dir = 1;
		} else {
			dir = 2;
		}
	}

	if (dir == 1) {
		ex += 2;
		if (ex > 2 + 4) {
			dir = 2;
			ex -= 2;
		}
	} else {
		ex -= 2;
		if (ex < 6 - 4) {
			dir = 1;
			ex += 2;
		}
	}

	for (short i = 2; i >= 0; --i) {
		for (short j = 0; j < 13; ++j) {
			if (e[i][j] != -1) {
				aux = ex - (4 - j) * 8 - 2;
				if ((aux2 = abs(aux - px)) < min) {
					i_first = i;
					j_first = j;
					min = aux2;
					aux3 = e[i][j];
					x_close = aux;
					y_close = ey + 8 * i;
				}
			}
		}
		if (x_close != 0xFF) {
			++time;
			break;
		}
	}

	if (am == 2) {
		min = 0xFF;
		x_close = 0xFF;
		for (short i = 2; i >= 0; --i) {
			for (short j = 0; j < 13; ++j) {
				if (i == i_first && j == j_first) {
					continue;
				}
				if (e[i][j] != 1) {
					aux = ex - (4 - j) * 8 - 2;
					if ((aux2 = abs(aux - px)) < min) {
						min = aux2;
						aux3 = e[i][j];
						x_close = aux;
						y_close = ey + 8 * i;
					}
				}
			}
			if (x_close != 0xFF) {
				++time;
				break;
			}
		}
	}

	if (time > 0) {
		--time;
		return time;
	}

	if (dir == 0) {
		if (ex < 12 + 4 && ex > 32 - 4){
			dir = 1;
		} else {
			dir = 2;
		}
	}

	if (dir == 1) {
		ex += 2;
		if (ex > 2 + 4) {
			dir = 2;
			ex -= 2;
		}
	} else {
		ex -= 2;
		if (ex < 6 - 4) {
			dir = 1;
			ex += 2;
		}
	}

	for (short i = 2; i >= 0; --i) {
		for (short j = 0; j < 13; ++j) {
			if (e[i][j] != -1) {
				aux = ex - (4 - j) * 8 - 2;
				if ((aux2 = abs(aux - px)) < min) {
					i_first = i;
					j_first = j;
					min = aux2;
					aux3 = e[i][j];
					x_close = aux;
					y_close = ey + 8 * i;
				}
			}
		}
		if (x_close != 0xFF) {
			++time;
			break;
		}
	}

	if (am == 2) {
		min = 0xFF;
		x_close = 0xFF;
		for (short i = 2; i >= 0; --i) {
			for (short j = 0; j < 13; ++j) {
				if (i == i_first && j == j_first) {
					continue;
				}
				if (e[i][j] != 1) {
					aux = ex - (4 - j) * 8 - 2;
					if ((aux2 = abs(aux - px)) < min) {
						min = aux2;
						aux3 = e[i][j];
						x_close = aux;
						y_close = ey + 8 * i;
					}
				}
			}
			if (x_close != 0xFF) {
				++time;
				break;
			}
		}
	}

	if (time > 0) {
		--time;
		return time;
	}

	if (dir == 0) {
		if (ex < 12 + 4 && ex > 32 - 4){
			dir = 1;
		} else {
			dir = 2;
		}
	}

	if (dir == 1) {
		ex += 2;
		if (ex > 2 + 4) {
			dir = 2;
			ex -= 2;
		}
	} else {
		ex -= 2;
		if (ex < 6 - 4) {
			dir = 1;
			ex += 2;
		}
	}

	for (short i = 2; i >= 0; --i) {
		for (short j = 0; j < 13; ++j) {
			if (e[i][j] != -1) {
				aux = ex - (4 - j) * 8 - 2;
				if ((aux2 = abs(aux - px)) < min) {
					i_first = i;
					j_first = j;
					min = aux2;
					aux3 = e[i][j];
					x_close = aux;
					y_close = ey + 8 * i;
				}
			}
		}
		if (x_close != 0xFF) {
			++time;
			break;
		}
	}

	if (am == 2) {
		min = 0xFF;
		x_close = 0xFF;
		for (short i = 2; i >= 0; --i) {
			for (short j = 0; j < 13; ++j) {
				if (i == i_first && j == j_first) {
					continue;
				}
				if (e[i][j] != 1) {
					aux = ex - (4 - j) * 8 - 2;
					if ((aux2 = abs(aux - px)) < min) {
						min = aux2;
						aux3 = e[i][j];
						x_close = aux;
						y_close = ey + 8 * i;
					}
				}
			}
			if (x_close != 0xFF) {
				++time;
				break;
			}
		}
	}

	if (time > 0) {
		--time;
		return time;
	}

	if (dir == 0) {
		if (ex < 12 + 4 && ex > 32 - 4){
			dir = 1;
		} else {
			dir = 2;
		}
	}

	if (dir == 1) {
		ex += 2;
		if (ex > 2 + 4) {
			dir = 2;
			ex -= 2;
		}
	} else {
		ex -= 2;
		if (ex < 6 - 4) {
			dir = 1;
			ex += 2;
		}
	}

	for (short i = 2; i >= 0; --i) {
		for (short j = 0; j < 13; ++j) {
			if (e[i][j] != -1) {
				aux = ex - (4 - j) * 8 - 2;
				if ((aux2 = abs(aux - px)) < min) {
					i_first = i;
					j_first = j;
					min = aux2;
					aux3 = e[i][j];
					x_close = aux;
					y_close = ey + 8 * i;
				}
			}
		}
		if (x_close != 0xFF) {
			++time;
			break;
		}
	}

	if (am == 2) {
		min = 0xFF;
		x_close = 0xFF;
		for (short i = 2; i >= 0; --i) {
			for (short j = 0; j < 13; ++j) {
				if (i == i_first && j == j_first) {
					continue;
				}
				if (e[i][j] != 1) {
					aux = ex - (4 - j) * 8 - 2;
					if ((aux2 = abs(aux - px)) < min) {
						min = aux2;
						aux3 = e[i][j];
						x_close = aux;
						y_close = ey + 8 * i;
					}
				}
			}
			if (x_close != 0xFF) {
				++time;
				break;
			}
		}
	}


	if (time > 0) {
		--time;
		return time;
	}

	if (dir == 0) {
		if (ex < 12 + 4 && ex > 32 - 4){
			dir = 1;
		} else {
			dir = 2;
		}
	}

	if (dir == 1) {
		ex += 2;
		if (ex > 2 + 4) {
			dir = 2;
			ex -= 2;
		}
	} else {
		ex -= 2;
		if (ex < 6 - 4) {
			dir = 1;
			ex += 2;
		}
	}

	for (short i = 2; i >= 0; --i) {
		for (short j = 0; j < 13; ++j) {
			if (e[i][j] != -1) {
				aux = ex - (4 - j) * 8 - 2;
				if ((aux2 = abs(aux - px)) < min) {
					i_first = i;
					j_first = j;
					min = aux2;
					aux3 = e[i][j];
					x_close = aux;
					y_close = ey + 8 * i;
				}
			}
		}
		if (x_close != 0xFF) {
			++time;
			break;
		}
	}

	if (am == 2) {
		min = 0xFF;
		x_close = 0xFF;
		for (short i = 2; i >= 0; --i) {
			for (short j = 0; j < 13; ++j) {
				if (i == i_first && j == j_first) {
					continue;
				}
				if (e[i][j] != 1) {
					aux = ex - (4 - j) * 8 - 2;
					if ((aux2 = abs(aux - px)) < min) {
						min = aux2;
						aux3 = e[i][j];
						x_close = aux;
						y_close = ey + 8 * i;
					}
				}
			}
			if (x_close != 0xFF) {
				++time;
				break;
			}
		}
	}

	if (time > 0) {
		--time;
		return time;
	}

	if (dir == 0) {
		if (ex < 12 + 4 && ex > 32 - 4){
			dir = 1;
		} else {
			dir = 2;
		}
	}

	if (dir == 1) {
		ex += 2;
		if (ex > 2 + 4) {
			dir = 2;
			ex -= 2;
		}
	} else {
		ex -= 2;
		if (ex < 6 - 4) {
			dir = 1;
			ex += 2;
		}
	}

	for (short i = 2; i >= 0; --i) {
		for (short j = 0; j < 13; ++j) {
			if (e[i][j] != -1) {
				aux = ex - (4 - j) * 8 - 2;
				if ((aux2 = abs(aux - px)) < min) {
					i_first = i;
					j_first = j;
					min = aux2;
					aux3 = e[i][j];
					x_close = aux;
					y_close = ey + 8 * i;
				}
			}
		}
		if (x_close != 0xFF) {
			++time;
			break;
		}
	}

	if (am == 2) {
		min = 0xFF;
		x_close = 0xFF;
		for (short i = 2; i >= 0; --i) {
			for (short j = 0; j < 13; ++j) {
				if (i == i_first && j == j_first) {
					continue;
				}
				if (e[i][j] != 1) {
					aux = ex - (4 - j) * 8 - 2;
					if ((aux2 = abs(aux - px)) < min) {
						min = aux2;
						aux3 = e[i][j];
						x_close = aux;
						y_close = ey + 8 * i;
					}
				}
			}
			if (x_close != 0xFF) {
				++time;
				break;
			}
		}
	}

	if (time > 0) {
		--time;
		return time;
	}

	if (dir == 0) {
		if (ex < 12 + 4 && ex > 32 - 4){
			dir = 1;
		} else {
			dir = 2;
		}
	}

	if (dir == 1) {
		ex += 2;
		if (ex > 2 + 4) {
			dir = 2;
			ex -= 2;
		}
	} else {
		ex -= 2;
		if (ex < 6 - 4) {
			dir = 1;
			ex += 2;
		}
	}

	for (short i = 2; i >= 0; --i) {
		for (short j = 0; j < 13; ++j) {
			if (e[i][j] != -1) {
				aux = ex - (4 - j) * 8 - 2;
				if ((aux2 = abs(aux - px)) < min) {
					i_first = i;
					j_first = j;
					min = aux2;
					aux3 = e[i][j];
					x_close = aux;
					y_close = ey + 8 * i;
				}
			}
		}
		if (x_close != 0xFF) {
			++time;
			break;
		}
	}

	if (am == 2) {
		min = 0xFF;
		x_close = 0xFF;
		for (short i = 2; i >= 0; --i) {
			for (short j = 0; j < 13; ++j) {
				if (i == i_first && j == j_first) {
					continue;
				}
				if (e[i][j] != 1) {
					aux = ex - (4 - j) * 8 - 2;
					if ((aux2 = abs(aux - px)) < min) {
						min = aux2;
						aux3 = e[i][j];
						x_close = aux;
						y_close = ey + 8 * i;
					}
				}
			}
			if (x_close != 0xFF) {
				++time;
				break;
			}
		}
	}

	return time;
}

int main(void)
{
	char *message = "test message";
	char *key = "abc";

	printf("Hello, World!\n");
	printf("Res: %d\n", called_func());
	return 0;
}

int called_func(void)
{
	int i, j, ret = 0;

	for (i = 0; i < 2; ++i) {
		for (j = 0; j < 100; ++j) {
			ret = ret * i + j;
		}
	}

	return ret;
}
