#include <stdio.h>

/*
 * Função para imprimir no ecrã o valor armazenado em cada uma das posições do array de caracteres.
 * Recebe como parâmetro um apontador de chars para o início do array, e recebe também o número
 * de valores que o array contém (ou seja, o seu tamanho).
 */
void print_vec_char(char *vec, int size) {
	for (int pos = 0; pos < size; pos++) {
		printf("| %d ", *vec);
		vec++;
	}

	if (size > 0)
		printf("|\n");
}
