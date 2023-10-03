#include <stdio.h>

/* Função para imprimir a informação do array com a frequência absoluta da parte inteira das notas. 
 * Recebe como parâmetro o endereço do array das frequências absolutas e um número inteiro que indica 
 * o número de elementos existentes no array. 
*/
void default_print_freq(int *freq, int n) {
	
	for (int i = 0; i < n; i++) {
		printf("%i ", *(freq + i));
	}
	
	printf("\n");
}
