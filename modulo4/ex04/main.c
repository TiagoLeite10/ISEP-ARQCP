/* Ficheiro principal para a resolução do exercício 4 do módulo 4 */
#include <stdio.h>
#include "sum_smaller.h"

int main() {

	int num1 = 5;
	int num2 = 10;
	int num_smaller = 0;
	int *smaller;
	smaller = &num_smaller;
	
	printf("Primeiro valor: %d\n", num1);
	printf("Segundo valor: %d\n", num2);
	int result = sum_smaller(num1, num2, smaller);
	printf("Soma dos dois valores: %d\n", result);
	printf("Menor valor: %d\n", *smaller);

	printf("\n----- -----\n\n");

	num1 = 0;
	num2 = 0;

	printf("Primeiro valor: %d\n", num1);
	printf("Segundo valor: %d\n", num2);
	result = sum_smaller(num1, num2, smaller);
	printf("Soma dos dois valores: %d\n", result);
	printf("Menor valor: %d\n", *smaller);

	printf("\n----- -----\n\n");

	num1 = 5;
	num2 = -10;

	printf("Primeiro valor: %d\n", num1);
	printf("Segundo valor: %d\n", num2);
	result = sum_smaller(num1, num2, smaller);
	printf("Soma dos dois valores: %d\n", result);
	printf("Menor valor: %d\n", *smaller);

	printf("\n----- -----\n\n");

	num1 = -9;
	num2 = -10;

	printf("Primeiro valor: %d\n", num1);
	printf("Segundo valor: %d\n", num2);
	result = sum_smaller(num1, num2, smaller);
	printf("Soma dos dois valores: %d\n", result);
	printf("Menor valor: %d\n", *smaller);

	return 0;

}
