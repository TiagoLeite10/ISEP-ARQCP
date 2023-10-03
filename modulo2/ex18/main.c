/* Ficheiro principal para a resolução do exercício 18 do módulo 2 */
#include <stdio.h>
#include "summation.h"

long i = 5;

int main() {

	long result = summation();
	printf("Somas totais a fazer: %ld\n", i);
	printf("Resultado = %ld\n", result);

	printf("\n");

	i = 10;
	result = summation();
	printf("Somas totais a fazer: %ld\n", i);
	printf("Resultado = %ld\n", result);

	printf("\n");

	i = 15;
	result = summation();
	printf("Somas totais a fazer: %ld\n", i);
	printf("Resultado = %ld\n", result);

	return 0;

}
