/* Ficheiro principal para a resolução do exercício 10 do módulo 2 */

#include <stdio.h>
#include "sum3ints.h"

int op1 = -500, op2 = -600, op3 = -700;

int main(void) {
	
	long long result = sum3ints();
	printf("Valor de op1: %d\n", op1);
	printf("Valor de op2: %d\n", op2);
	printf("Valor de op3: %d\n", op3);
	printf("Resultado = %lld \n", result);

	return 0;
}

