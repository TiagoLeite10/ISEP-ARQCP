/* Ficheiro principal para a resolução do exercício 12 do módulo 2 */
#include <stdio.h>
#include "isMultiple.h"

int A = 10;
int B = 2;

int main() {

	char result = isMultiple();
	printf("Valor de A: %d\n", A);
	printf("Valor de B: %d\n", B);
	printf("Result = %x\n", result);

	return 0;

}
