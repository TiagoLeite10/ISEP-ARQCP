/* Ficheiro principal para a resolução do exercício 7 do módulo 2 */
#include <stdio.h>
#include "crossSumBytes.h"

short s1 = 0, s2 = 0;

int main(void) {
	
	printf("s1 = %hd  s2 = %hd\n", s1, s2);
	printf("Resultado: %hd:0x%hx\n\n", crossSumBytes(), crossSumBytes());	
	
	s1 = 0, s2 = 1;
	printf("s1 = %hd  s2 = %hd\n", s1, s2);
	printf("Resultado: %hd:0x%hx\n\n", crossSumBytes(), crossSumBytes());
	
	s1 = 1, s2 = 1;
	printf("s1 = %hd  s2 = %hd\n", s1, s2);
	printf("Resultado: %hd:0x%hx\n\n", crossSumBytes(), crossSumBytes());
	
	s1 = 1, s2 = 2;
	printf("s1 = %hd  s2 = %hd\n", s1, s2);
	printf("Resultado: %hd:0x%hx\n", crossSumBytes(), crossSumBytes());
	
	return 0;
}
