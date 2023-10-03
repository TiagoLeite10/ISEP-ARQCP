/* Ficheiro principal para a resolução do exercício 20a do módulo 4 */
#include <stdio.h>
#include "sum_multiples_x.h"
#include "print_bits_array_elements.h"

void print_information(char *ptr_vec, int x); // Função para imprimir as informações necessárias relativas a cada teste

int main() {
	
	char vec1[] = {0};
	int x = 0;
	char *ptr_vec;
	ptr_vec = vec1;
	print_information(ptr_vec, x);
	// Resultado: 0
	printf("\n----- -----\n\n");

	char vec2[] = {1, 0};
	x = 0x100;
	ptr_vec = vec2;
	print_information(ptr_vec, x);
	// Resultado: 1
	printf("\n----- -----\n\n");

	char vec3[] = {1, 1, 0};
	x = 0x100;
	ptr_vec = vec3;
	print_information(ptr_vec, x);
	// Resultado: 2
	printf("\n----- -----\n\n");

	char vec4[] = {3, 5, 11, 12, 7, 4, 0};
	x = 0xf0301;
	ptr_vec = vec4;
	print_information(ptr_vec, x);
	// Resultado: 15
	printf("\n----- -----\n\n");

	char vec5[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0};
	x = 0xfff0500;
	ptr_vec = vec5;
	print_information(ptr_vec, x);
	// Resultado: 30
	printf("\n----- -----\n\n");

	char vec6[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0};
	x = 0x400;
	ptr_vec = vec6;
	print_information(ptr_vec, x);
	// Resultado: 40
	printf("\n----- -----\n\n");

	return 0;

}

/*
 * Função para imprimir informações relativas a cada teste.
 * Recebe por parâmetro um apontador para um array de chars e um número inteiro.
 */
void print_information(char *ptr_vec, int x) {
	printf("Valores existentes no array: \n");
	print_bits_array_elements(ptr_vec);
	printf("\n");
	int result = sum_multiples_x(ptr_vec, x);
	printf("Valor décimal de x: %d\n", x);
	x >>= 8;
	char x_char = (char)x;
    	printf("Valor décimal do segundo byte: %d, e respetivo valor binário: ", x_char);
	print_bits(x_char);
	printf("\n");
	printf("O resultado da soma de todos os múltiplos do segundo byte do valor x, é: %d\n", result);
}
