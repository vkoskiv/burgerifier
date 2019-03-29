#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	setbuf(stdout, NULL);
	if (argc > 1) {
		int count = strtol(argv[1], NULL, 10);
		for (int i = 0; i < count; i++) {
			printf("\U0001F354\n");
		}
		return 0;
	}
	printf("\U0001F354\n");
	return 0;
}
