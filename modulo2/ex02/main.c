/* Ficheiro principal para a resolução do exercício 2 do módulo 2 */
#include <stdio.h>
#include "asm.h"

int op1 = 0, op2 = 0;

int main(void) {
	printf("Valor op1:");
	scanf("%d",&op1);
	printf("Valor op2:");
	scanf("%d",&op2);
	int result = sum();
	printf("sum = %d:0x%x\n", result, result);
	return 0;
}
