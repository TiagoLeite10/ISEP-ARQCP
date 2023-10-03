/* Ficheiro principal para a resolução do exercício 4 do módulo 2 */
#include <stdio.h>
#include "asm.h"

int op1 = 0, op2 = 0;

int main(void) {
	printf("Valor op1:");
	scanf("%d",&op1);
	printf("Valor op2:");
	scanf("%d",&op2);
	/*printf("Valor op3:");
	scanf("%ld", &op3);
	printf("Valor op4:");
	scanf("%ld", &op4);*/	
	
	int result = sum();
	printf("sum = %d:0x%x\n", result, result);
	
	printf("\n");

	int result2 = sum_v2();
	printf("Sum_v2 = %d:0x%x\n", result2, result2);

	printf("\n");

	op3 = 10;
	op4 = 20;
	long result_sum_v3 = sum_v3();
	printf("Valor de op3: %ld\n", op3);
	printf("Valor de op4: %ld\n", op4);
	printf("sum_v3 = %ld:0x%lx\n", result_sum_v3, result_sum_v3);
	return 0;
}
