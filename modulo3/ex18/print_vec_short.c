#include <stdio.h>

/*
 * Função para imprimir no ecrã o valor armazenado em cada posição do array de shorts.
 * Recebe como parâmetro um apontador de shorts para o início do array, e recebe também o número
 * de valores que o array contém (ou seja, o seu tamanho).
 */
void print_vec_short(short *vec, int size) {
	for (int pos = 0; pos < size; pos++) {
		printf("| %d ", *vec);
		vec++;
	}
	
	if (size > 0)
		printf("|\n");
}
