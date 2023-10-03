/* Ficheiro principal para a resolução do exercício 15a do módulo 4 */
#include <stdio.h>
#include "activate_bits.h"
#include "print_bits.h"

int main(void) {
	int a = 0;
	int left = 7;
	int right = 24;
	
	printf("Número original: %d\n", a);
	printf("Representação em binário: ");
	print_bits(a);
	
	printf("\n");
	printf("Bits a ativar à esquerda: %d\n", left);
	printf("Bits a ativar à direita: %d\n\n", right);
	
	int result = activate_bits(a, left, right);
	
	printf("Número final: %d\n", result);
	printf("Representação em binário: ");
	print_bits(result);
	
	return 0;
}

