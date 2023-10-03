/* Ficheiro principal para a resolução do exercício 20 do módulo 2 */
#include <stdio.h>
#include "check_num.h"

int num = -10;

int main() {

	char result = check_num();

	printf("Valor: %d\n", num);
	printf("Resultado: %d\n", result);
	
	printf("\n");

	num = -15;
	result = check_num();
	printf("Valor: %d\n", num);
	printf("Resultado: %d\n", result);

	printf("\n");

	num = 10;
	result = check_num();
	printf("Valor: %d\n", num);
	printf("Resultado: %d\n", result);

	printf("\n");

	num = 15;
	result = check_num();
	printf("Valor: %d\n", num);
	printf("Resultado: %d\n", result);

	return 0;

}
