/* Ficheiro principal para a resolução do exercício 10 do módulo 4 */
#include <stdio.h>
#include "call_incr.h"

int main() {

	short w = 9;
	printf("Valor de w: %d\n", w);
	int result = call_incr(w);
	printf("Resultado: %d\n", result);

	printf("\n----- -----\n\n");

	w = 0;
	printf("Valor de w: %d\n", w);
	result = call_incr(w);
	printf("Resultado: %d\n", result);
	
	printf("\n----- -----\n\n");

	w = -15;
	printf("Valor de w: %d\n", w);
	result = call_incr(w);
	printf("Resultado: %d\n", result);

	return 0;

}
