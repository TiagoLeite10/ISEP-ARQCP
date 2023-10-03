/* Ficheiro principal para a resolução do exercício 9 do módulo 2 */
#include <stdio.h>
#include "sum_and_subtract.h"

int A = 0;
short B = 0;
char C = 0, D = 0;

int main(void) {	
	
	A = 5, B = 4, C = 8, D = 10;
	printf("A = %d  B = %hd  C = %d  D = %d\n", A, B, C, D);
	printf("Resultado: %ld\n\n", sum_and_subtract());
	
	A = 9, B = 2, C = 5, D = 3;
	printf("A = %d  B = %hd  C = %d  D = %d\n", A, B, C, D);
	printf("Resultado: %ld\n\n", sum_and_subtract());
	
	A = 5, B = 6, C = 7, D = 0;
	printf("A = %d  B = %hd  C = %d  D = %d\n", A, B, C, D);
	printf("Resultado: %ld\n", sum_and_subtract());
	
	return 0;
}
