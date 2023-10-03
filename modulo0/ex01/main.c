#include <stdio.h>

int main(void) {
	printf("Size of char type: %lu bytes\n", sizeof(char));
	printf("Size of int type: %lu bytes\n", sizeof(int));
	printf("Size of unsigned int type: %lu bytes\n", sizeof(unsigned int));
	printf("Size of long type: %lu bytes\n", sizeof(long));
	printf("Size of short type: %lu bytes\n", sizeof(short));
	printf("Size of long long type: %lu bytes\n", sizeof(long long));
	printf("Size of float type: %lu bytes\n", sizeof(float));
	printf("Size of double type: %lu bytes\n", sizeof(double));
	return 0;
}
