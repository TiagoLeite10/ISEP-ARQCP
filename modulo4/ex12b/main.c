/* Ficheiro principal para a resolução do exercício 12b do módulo 4 */
#include <stdio.h>
#include "count_bits_one.h"
#include "print_bits.h"

int main() {

	int x = 0;

	printf("Valor de x: %d\n", x);
	printf("Representação em binário: ");
	print_bits(x);
	int result = count_bits_one(x);
	printf("Resultado: %d\n", result);
	
	printf("\n----- -----\n\n");

	x = 8;

	printf("Valor de x: %d\n", x);
	printf("Representação em binário: ");
	print_bits(x);
	result = count_bits_one(x);
	printf("Resultado: %d\n", result);

	printf("\n----- -----\n\n");

	x = -8;

	printf("Valor de x: %d\n", x);
	printf("Representação em binário: ");
	print_bits(x);
	result = count_bits_one(x);
	printf("Resultado: %d\n", result);

	printf("\n----- -----\n\n");

	x = 10;

	printf("Valor de x: %d\n", x);
	printf("Representação em binário: ");
	print_bits(x);
	result = count_bits_one(x);
	printf("Resultado: %d\n", result);

	printf("\n----- -----\n\n");

	x = -10;

	printf("Valor de x: %d\n", x);
	printf("Representação em binário: ");
	print_bits(x);
	result = count_bits_one(x);
	printf("Resultado: %d\n", result);

	printf("\n----- -----\n\n");

	x = 2147483647;

	printf("Valor de x: %d\n", x);
	printf("Representação em binário: ");
	print_bits(x);
	result = count_bits_one(x);
	printf("Resultado: %d\n", result);

	printf("\n----- -----\n\n");

	x = -2147483648;
	
	printf("Valor de x: %d\n", x);
	printf("Representação em binário: ");
	print_bits(x);
	result = count_bits_one(x);
	printf("Resultado: %d\n", result);

	return 0;

}
