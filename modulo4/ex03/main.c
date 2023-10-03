/* Ficheiro principal para a resolução do exercício 3 do módulo 4 */
#include <stdio.h>
#include "greatest.h"

int main(void) {
	int a = 1; 
	int b = 4;
	int c = 7; 
	int d = 3;
	
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	printf("C = %d\n", c);
	printf("D = %d\n", d);
	
	printf("Maior dos 4 número: %d\n", greatest(a, b, c ,d));
	
	return 0;
}
