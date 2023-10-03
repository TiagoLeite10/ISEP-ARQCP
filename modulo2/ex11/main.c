/* Ficheiro principal para a resolução do exercício 11 do módulo 2 */
#include <stdio.h>
#include "test_flags.h"

int op1 = 0, op2 = 0;

void verify_result(char result) {
	if (result  == 0) {
		printf("Não ativou carry nem overflow! \n\n");
	} else if (result == 1) {
		printf("Ativou carry/overflow! \n\n");
	}	
}

int main(void) {
	char result;
	
	printf("Valor op1: %d:0x%x\n", op1, op1);
	printf("Valor op2: %d:0x%x\n", op2, op2);
	result = test_flags();
	verify_result(result);
	
	op1 = 1;
	op2 = -1;
	printf("Valor op1: %d:0x%x\n", op1, op1);
	printf("Valor op2: %d:0x%x\n", op2, op2);
	result = test_flags();
	verify_result(result);
	
	op1 = 0x80000000;
	op2 = 0x80000000;
	printf("Valor op1: %d:0x%x\n", op1, op1);
	printf("Valor op2: %d:0x%x\n", op2, op2);
	result = test_flags();
	verify_result(result);
	
	op1 = 50000;
	op2 = 50000;
	printf("Valor op1: %d:0x%x\n", op1, op1);
	printf("Valor op2: %d:0x%x\n", op2, op2);
	result = test_flags();
	verify_result(result);
	
	op1 = 1;
	op2 = 0x7FFFFFFF;
	printf("Valor op1: %d:0x%x\n", op1, op1);
	printf("Valor op2: %d:0x%x\n", op2, op2);
	result = test_flags();
	verify_result(result);
	
	return 0;
}
