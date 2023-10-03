/* Ficheiro principal para a resolução do exercício 5 do módulo 4 */
#include <stdio.h>
#include "inc_and_square.h"

int main(void) {
	int v1 = 1; 
	int v2 = 4;
	
	printf("V1 e V2 antes do uso da função:\n");
	printf("V1 = %d\n", v1);
	printf("V2 = %d\n", v2);
	
	int result = inc_and_square(&v1, v2);
	printf("\n");
	
	printf("V1 e V2 depois do uso da função:\n");
	printf("V1 = %d\n", v1);
	printf("V2 = %d\n", result);
	
	return 0;
}
