/* Ficheiro principal para a resolução do exercício 14c do módulo 4 */
#include <stdio.h>
#include "reset_2bits.h"
#include "print_bits.h"

#define MAX_POS 31

int main() {

	int num = 8;
	int *ptr;
	ptr = &num;
	int pos = 0;
	int second_pos = MAX_POS - pos;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição dos bit a serem alterados entre 0 e 31, da direita para a esquerda: %d e %d\n", pos, second_pos);
	
	reset_2bits(ptr, pos);
	printf("\n");
	
	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	
	printf("\n----- -----\n\n");

	num = 1;
	pos = 31;
	second_pos = MAX_POS - pos;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição dos bit a serem alterados entre 0 e 31, da direita para a esquerda: %d e %d\n", pos, second_pos);
	
	reset_2bits(ptr, pos);
	printf("\n");
	
	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	
	printf("\n----- -----\n\n");

	num = -2147483647;
	pos = 0;
	second_pos = MAX_POS - pos;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição dos bit a serem alterados entre 0 e 31, da direita para a esquerda: %d e %d\n", pos, second_pos);

	reset_2bits(ptr, pos);
	printf("\n");

	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);

	printf("\n----- -----\n\n");

	num = -1;
	pos = 0;
	second_pos = MAX_POS - pos;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição dos bit a serem alterados entre 0 e 31, da direita para a esquerda: %d e %d\n", pos, second_pos);

	reset_2bits(ptr, pos);
	printf("\n");

	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);

	printf("\n----- -----\n\n");

	num = -1;
	pos = 2;
	second_pos = MAX_POS - pos;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição dos bit a serem alterados entre 0 e 31, da direita para a esquerda: %d e %d\n", pos, second_pos);

	reset_2bits(ptr, pos);
	printf("\n");

	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);

	printf("\n----- -----\n\n");

	num = -20;
	pos = 29;
	second_pos = MAX_POS - pos;
	printf("Valor original: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);
	printf("Posição dos bit a serem alterados entre 0 e 31, da direita para a esquerda: %d e %d\n", pos, second_pos);

	reset_2bits(ptr, pos);
	printf("\n");

	printf("Valor final: %d\n", num);
	printf("Representação em bits do valor: ");
	print_bits(num);

	printf("\n----- -----\n\n");

	return 0;

}
