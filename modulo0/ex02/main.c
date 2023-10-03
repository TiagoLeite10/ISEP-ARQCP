#include <stdio.h>

int sum(int a, int b);

int main(void) {
	int result = 0;

	while (result < 10) {
		result = sum(result, 1);
	}

	printf("Resultado final: %d\n", result);

	return 0;
}

int sum(int a, int b) {
	return a + b;
}
