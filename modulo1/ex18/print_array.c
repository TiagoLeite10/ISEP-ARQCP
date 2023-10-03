#include <stdio.h>

/* Função para imprimir a informação de um array de shorts através do uso da aritmética de ponteiro. 
 * Recebe como parâmetro o endereço do array e um número inteiro que indica o número de elementos 
 * existentes no array. 
*/
void default_print_short(short *shorts, int n) {		
	for (int i = 0; i < n; i++) {
		printf("%d ", *(shorts + i));
	}

	printf("\n");
}

/* Função para imprimir a informação de um array de integers através do uso da aritmética de ponteiro. 
 * Recebe como parâmetro o endereço do array e um número inteiro que indica o número de elementos 
 * existentes no array. 
*/
void default_print_integer(int *integers, int n) {	
	short *pointer = (short *) integers;
	
	for (int i = 0; i < n; i++) {
		printf("%d ", *(pointer + i));
	}

	printf("\n");
}
