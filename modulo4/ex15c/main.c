/* Ficheiro principal para a resolução do exercício 15c do módulo 4 */
#include <stdio.h>
#include "activate_bits.h"
#include "activate_invert_bits.h"
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
	
	int result_activate_bits = activate_bits(a, left, right);
	
	printf("Número final: %d\n", result_activate_bits);
	printf("Representação em binário: ");
	print_bits(result_activate_bits);
	
	int result_activate_invert_bits = activate_invert_bits(a, left, right);
	
	printf("\n");
	printf("Número final com os bits invertidos: %d\n", result_activate_invert_bits);
	printf("Representação em binário: ");
	print_bits(result_activate_invert_bits);
	
	return 0;
}

