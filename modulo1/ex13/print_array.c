#include <stdio.h>

/* Função para imprimir a informação de um array através do uso da aritmética de ponteiro. 
 * Recebe como parâmetro o endereço do array e um número inteiro que indica o número de 
 * elementos existentes no array. 
*/
void print_array(int *vec, int n) {
	
	for (int i = 0; i < n; i++) {
		printf("%d ", *(vec + i));
	}

	printf("\n");
}
