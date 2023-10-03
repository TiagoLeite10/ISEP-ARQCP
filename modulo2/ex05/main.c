/* Ficheiro principal para a resolução do exercício 5 do módulo 2 */
#include <stdio.h>
#include "swapBytes.h"

short s = 0;

int main(void) {	
	
	printf("s = %hd\n", s);
	printf("Resultado: %hd\n\n", swapBytes());
	
	s = 1;
	printf("s = %hd\n", s);
	printf("Resultado: %hd\n\n", swapBytes());
	
	s = 256;
	printf("s = %hd\n", s);
	printf("Resultado: %hd\n", swapBytes());
	
	return 0;
}
