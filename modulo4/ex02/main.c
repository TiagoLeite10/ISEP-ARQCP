/* Ficheiro principal para a resolução do exercício 2 do módulo 4 */
#include <stdio.h>
#include "sum_n2.h"

int main() {

	int n = -1;
	long result = sum_n2(n);
	printf("Resultado da soma dos quadrados dos número de 1 até %d: %ld\n", n, result);

	n = 10;
	result = sum_n2(n);
	printf("Resultado da soma dos quadrados dos número de 1 até %d: %ld\n", n, result);

	n = 0;
	result = sum_n2(n);
	printf("Resultado da soma dos quadrados dos número de 1 até %d: %ld\n", n, result);

	n = 1;
	result = sum_n2(n);
	printf("Resultado da soma dos quadrados dos número de 1 até %d: %ld\n", n, result);

	return 0;

}
