/* Ficheiro principal para a resolução do exercício 15 do módulo 2 */
#include <stdio.h>
#include "compute.h"

int A = 0, B = 0, C = 0, D = 0;

int main(void) {
	
	
	A = 5, B = 4, C = 8, D = 10;
	printf("A = %d  B = %d  C = %d  D = %d\n", A, B, C, D);
	printf("Resultado: %d\n\n", compute());
	
	A = 9, B = 2, C = 5, D = 3;
	printf("A = %d  B = %d  C = %d  D = %d\n", A, B, C, D);
	printf("Resultado: %d\n\n", compute());
	
	A = 5, B = 6, C = 7, D = 0;
	printf("A = %d  B = %d  C = %d  D = %d\n", A, B, C, D);
	printf("Resultado: %d\n", compute());
	
	return 0;
}
