#include <stdio.h>

int main() {
	char letra;
	int num1;
	unsigned int num2;
	long num3;
	short num4;
	long long num5;
	float num6;
	double num7;
	
	printf("Sizeof char = %lu\n", sizeof(letra));
	printf("Sizeof int = %lu\n", sizeof(num1));
	printf("Sizeof unsigned int = %lu\n", sizeof(num2));
	printf("Sizeof long = %lu\n", sizeof(num3));
	printf("Sizeof short = %lu\n", sizeof(num4));
	printf("Sizeof long long = %lu\n", sizeof(num5));
	printf("Sizeof float = %lu\n", sizeof(num6));
	printf("Sizeof double = %lu\n", sizeof(num7));

	return 0;
}
