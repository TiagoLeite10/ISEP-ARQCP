#include <stdlib.h>

/*
 * Função para preencher uma matriz com valores pseudo-aleatórios entre 0 e 99
 *
 * m -> matriz
 * num_rows -> número de linhas que a matriz contém
 * num_columns -> número de columas que a matriz contém
 */
void fill_matrix_with_random_values(int **m, int num_rows, int num_columns) {

	for (int row = 0; row < num_rows; row++) {
		for (int column = 0; column < num_columns; column++) {
			*(*(m + row) + column) = rand() % 99;
		}
	}

}
