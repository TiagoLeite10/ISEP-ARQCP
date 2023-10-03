#include <stdio.h>
#include <stdlib.h>

/*
 * Função para imprimir os valores presentes numa matriz
 *
 * m -> Apontador para a matriz a ser impressa
 * num_lines -> Número de linhas que existem na matriz
 * num_columns -> Número de colunas que existem na matriz
 * num_reserved_spaces -> Número de espaços a utilizar para formatar a matriz (Passar o 
 * número de digitos que o maior valor da matriz contém)
 */
void print_matrix(int **m, int num_lines, int num_columns, int num_reserved_spaces) {
	
	for (int line = 0; line < num_lines; line++) {
		printf("| ");
		for (int column = 0; column < num_columns; column++) {
			printf("%*d ", num_reserved_spaces, *(*(m + line) + column));
		}
		printf("|\n");
	}

}

/*
 * Função para libertar a memória da heap alocada pela matriz
 *
 * matrix -> Apontador para a matriz da qual queremos libertar o espaço da heap
 * num_lines -> Número de linhas que a matriz contém
 */
void free_matrix(int **matrix, int num_lines) {

	for (int line = 0; line < num_lines; line++) {
		free(*(matrix + line));
	}

	free(matrix);
}
