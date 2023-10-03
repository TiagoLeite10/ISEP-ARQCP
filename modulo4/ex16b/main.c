/* Ficheiro principal para a resolução do exercício 16b do módulo 4 */
#include <stdio.h>
#include "join_bits.h"
#include "print_bits.h"

int main() {

	int a = 10;
	int b = 1048576;
	int pos = 15;

	printf("Valor de a: %d\n", a);
	printf("Valor de a em binário: ");
	print_bits(a);
	printf("\n");
	printf("Valor de b: %d\n", b);
	printf("Valor de b em binário: ");
	print_bits(b);
	printf("\n");
	printf("Posição onde os bits do valor a e b vão ser separados e somados: %d\n", pos);
	printf("\n");
	int result = join_bits(a, b, pos);
	printf("Resultado: %d\n", result);
	printf("Representação do resultado em binário: ");
	print_bits(result);

	printf("\n----- -----\n\n");

	a = -2147483648;
	b = 2147483647;
	pos = 15;

	printf("Valor de a: %d\n", a);
	printf("Valor de a em binário: ");
	print_bits(a);
	printf("\n");
	printf("Valor de b: %d\n", b);
	printf("Valor de b em binário: ");
	print_bits(b);
	printf("\n");
	printf("Posição onde os bits do valor a e b vão ser separados e somados: %d\n", pos);
	printf("\n");
	result = join_bits(a, b, pos);
	printf("Resultado: %d\n", result);
	printf("Representação do resultado em binário: ");
	print_bits(result);

	printf("\n----- -----\n\n");

	a = 3;
	b = 12;
	pos = 1;

	printf("Valor de a: %d\n", a);
	printf("Valor de a em binário: ");
	print_bits(a);
	printf("\n");
	printf("Valor de b: %d\n", b);
	printf("Valor de b em binário: ");
	print_bits(b);
	printf("\n");
	printf("Posição onde os bits do valor a e b vão ser separados e somados: %d\n", pos);
	printf("\n");
	result = join_bits(a, b, pos);
	printf("Resultado: %d\n", result);
	printf("Representação do resultado em binário: ");
	print_bits(result);

	printf("\n----- -----\n\n");

	a = -2147483648;
	b = 12;
	pos = 2;

	printf("Valor de a: %d\n", a);
	printf("Valor de a em binário: ");
	print_bits(a);
	printf("\n");
	printf("Valor de b: %d\n", b);
	printf("Valor de b em binário: ");
	print_bits(b);
	printf("\n");
	printf("Posição onde os bits do valor a e b vão ser separados e somados: %d\n", pos);
	printf("\n");
	result = join_bits(a, b, pos);
	printf("Resultado: %d\n", result);
	printf("Representação do resultado em binário: ");
	print_bits(result);

	printf("\n----- -----\n\n");

	a = 1;
	b = 10;
	pos = 0;

	printf("Valor de a: %d\n", a);
	printf("Valor de a em binário: ");
	print_bits(a);
	printf("\n");
	printf("Valor de b: %d\n", b);
	printf("Valor de b em binário: ");
	print_bits(b);
	printf("\n");
	printf("Posição onde os bits do valor a e b vão ser separados e somados: %d\n", pos);
	printf("\n");
	result = join_bits(a, b, pos);
	printf("Resultado: %d\n", result);
	printf("Representação do resultado em binário: ");
	print_bits(result);

	printf("\n----- -----\n\n");

	a = 2147483647;
	b = -2147483648;
	pos = 31;

	printf("Valor de a: %d\n", a);
	printf("Valor de a em binário: ");
	print_bits(a);
	printf("\n");
	printf("Valor de b: %d\n", b);
	printf("Valor de b em binário: ");
	print_bits(b);
	printf("\n");
	printf("Posição onde os bits do valor a e b vão ser separados e somados: %d\n", pos);
	printf("\n");
	result = join_bits(a, b, pos);
	printf("Resultado: %d\n", result);
	printf("Representação do resultado em binário: ");
	print_bits(result);

	printf("\n----- -----\n\n");


	return 0;

}
