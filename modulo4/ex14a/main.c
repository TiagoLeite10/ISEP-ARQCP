/* Ficheiro principal para a resolução do exercício 14a do módulo 4 */
#include <stdio.h>
#include "reset_bit.h"
#include "print_bits.h"

int main() {

	int num = 8;
	int *ptr;
	ptr = &num;
	int pos = 0;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição do bit a ser alterado entre 0 e 31, da direita para a esquerda: %d\n", pos);
	
	int result = reset_bit(ptr, pos);
	printf("\n");

	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Foi alterado algum bit? (1 se sim, 0 se não): %d\n", result);
	
	printf("\n----- -----\n\n");

	num = 0;
	pos = 15;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição do bit a ser alterado entre 0 e 31, da direita para a esquerda: %d\n", pos);
	
	result = reset_bit(ptr, pos);
	printf("\n");

	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Foi alterado algum bit? (1 se sim, 0 se não): %d\n", result);
	
	printf("\n----- -----\n\n");

	num = -2147483648;
	pos = 31;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição do bit a ser alterado entre 0 e 31, da direita para a esquerda: %d\n", pos);
	
	result = reset_bit(ptr, pos);
	printf("\n");

	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Foi alterado algum bit? (1 se sim, 0 se não): %d\n", result);
	
	printf("\n----- -----\n\n");

	num = -1;
	pos = 31;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição do bit a ser alterado entre 0 e 31, da direita para a esquerda: %d\n", pos);
	
	result = reset_bit(ptr, pos);
	printf("\n");

	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Foi alterado algum bit? (1 se sim, 0 se não): %d\n", result);
	
	printf("\n----- -----\n\n");

	num = -20;
	pos = 29;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição do bit a ser alterado entre 0 e 31, da direita para a esquerda: %d\n", pos);
	
	result = reset_bit(ptr, pos);
	printf("\n");

	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Foi alterado algum bit? (1 se sim, 0 se não): %d\n", result);

	printf("\n----- -----\n\n");

	num = 1;
	pos = 0;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição do bit a ser alterado entre 0 e 31, da direita para a esquerda: %d\n", pos);
	
	result = reset_bit(ptr, pos);
	printf("\n");

	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Foi alterado algum bit? (1 se sim, 0 se não): %d\n", result);

	return 0;

}
