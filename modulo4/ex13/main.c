/* Ficheiro principal para a resolução do exercício 13 do módulo 4 */
#include <stdio.h>
#include "rotate.h"
#include "print_bits.h"

int main(void) {
	int num = 1;
	int nbits = 2;
	
	printf("----- Rotação para a esquerda -----\n");
	printf("Número original: %d\n", num);
	printf("Representação em binário: ");
	print_bits(num);

	printf("\nNúmero com a rotação de %d bits: %d\n", nbits, rotate_left(num, nbits));
	printf("Representação em binário: ");
	print_bits(rotate_left(num, nbits));
	
	printf("\n----- Rotação para a direita -----\n");
	printf("Número original: %d\n", num);
	printf("Representação em binário: ");
	print_bits(num);
	
	printf("\nNúmero com a rotação de %d bits: %d\n", nbits, rotate_right(num, nbits));
	printf("Representação em binário: ");
	print_bits(rotate_right(num, nbits));
	
	return 0;
}

