/* Ficheiro principal para a resolução do exercício 9 do módulo 4 */
#include <stdio.h>
#include "calculate.h"

void print_result(char op, int o1, int o2, int res) {
	printf("%d %c %d = %d\n", o1, op, o2, res);
}


int main(void) {
	int a = 1; 
	int b = 5;
	
	printf("Conta Final: (%d - %d) - (%d * %d) = %d \n", a, b, a, b, calculate(a, b));
	
	return 0;
}

