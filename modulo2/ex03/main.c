/* Ficheiro principal para a resolução do exercício 3 do módulo 2 */
#include <stdio.h>
#include "asm.h"

int op1 = 0, op2 = 0;

int main(void) {
	printf("Valor op1: ");
	scanf("%d",&op1);
	
	printf("Valor op2: ");
	scanf("%d",&op2);
	
	int result1 = sum();
	int result2 = sum_v2();
	
	printf("Sum = %d:0x%x\n", result1, result1);
	printf("Sum_v2 = %d:0x%x\n", result2, result2);
	
	return 0;
}
