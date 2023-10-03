/* Ficheiro principal para a resolução do exercício 16 do módulo 2 */
#include <stdio.h>
#include "steps.h"

long num = 10;

int main() {

	int result = steps();
	printf("Valor 1: %ld\n", num);
	printf("Resultado 1 = %d\n", result);
	
	printf("\n");

	num = 15;
	result = steps();
	printf("Valor 2: %ld\n", num);
	printf("Resultado 2 = %d\n", result);
	
	printf("\n");

	num = 20;
	result = steps();
	printf("Valor 3: %ld\n", num);
	printf("Resultado 3 = %d\n", result);
	
	return 0;

}
