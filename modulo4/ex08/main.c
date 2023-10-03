/* Ficheiro principal para a resolução do exercício 8 do módulo 4 */
#include <stdio.h>
#include "calc.h"

int main() {

	int a = 5;
	int *b;
	int c = 10;

	b = &a;

	printf("Valor de a: %d\n", a);
	printf("Valor de *b: %d\n", *b);
	printf("Valor de c: %d\n", c);
	int result = calc(a, b, c);
	printf("Resultado: %d\n", result);

	printf("\n----- -----\n\n");

	a = -1;
	c = -10;
	b = &a;

	printf("Valor de a: %d\n", a);
	printf("Valor de *b: %d\n", *b);
	printf("Valor de c: %d\n", c);
	result = calc(a, b, c);
	printf("Resultado: %d\n", result);

	printf("\n----- -----\n\n");

	a = 0;
	c = 0;
	b = &a;

	printf("Valor de a: %d\n", a);
	printf("Valor de *b: %d\n", *b);
	printf("Valor de c: %d\n", c);
	result = calc(a, b, c);
	printf("Resultado: %d\n", result);

	printf("\n----- -----\n\n");

	a = -5;
	c = 10;
	b = &a;

	printf("Valor de a: %d\n", a);
	printf("Valor de *b: %d\n", *b);
	printf("Valor de c: %d\n", c);
	result = calc(a, b, c);
	printf("Resultado: %d\n", result);

	return 0;

}
