#include <stdlib.h>
#include <stdio.h>

/*
 * Função para somar duas matrizes de dimensão y x k, e guardar o resultado numa matriz criada
 * de forma dinâmica.
 * Esta função retorna o endereço dessa nova matriz.
 */
int **add_matrixes(int **a, int **b, int y, int k) {

	int **result_matrix;
	// Array do tipo int* com tamanho y
	result_matrix = (int**) calloc(y, sizeof(int*));
	if (result_matrix == NULL) {
		printf("Ocorreu um erro ao tentar reservar memória.\n");
		exit(1);
	}

	for (int row = 0; row < y; row++) {
		// Para cada posição do array de apontadores, reserva memória para k inteiros
		// Obtemos assim um array dentro de outro array (apontador de apontador)
		*(result_matrix + row) = (int*) calloc(k, sizeof(int));
		if (result_matrix[row] == NULL) {
			printf("Ocorreu um erro ao tentar reservar memória.\n");
			exit(1);
		}

		for (int column = 0; column < k; column++) {
			*(*(result_matrix + row) + column) += *(*(a + row) + column) + *(*(b + row) + column);
		}
	}

	return result_matrix;

}
