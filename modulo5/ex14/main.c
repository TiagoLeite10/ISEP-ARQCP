/* Ficheiro principal para a resolução do exercício 14 do módulo 5 */
#include <stdio.h>
#include <stdlib.h>
#include "add_matrixes.h"
#include "new_matrix.h"
#include "fill_matrix.h"
#include "matrix_helper.h"

int main() {

	int lines = 5;
	int columns = 4;
	int **ptr_matrix_one = new_matrix(lines, columns);
	
	printf("---------- Soma de duas matrizes geradas ----------\n");
	fill_matrix_with_random_values(ptr_matrix_one, lines, columns);
	print_matrix(ptr_matrix_one, lines, columns, 2);

	printf("\n+\n\n");

	int **ptr_matrix_two = new_matrix(lines, columns);
	fill_matrix_with_random_values(ptr_matrix_two, lines, columns);
	print_matrix(ptr_matrix_two, lines, columns, 2);
	
	printf("\n=\n\n");

	int **ptr_result_matrix = add_matrixes(ptr_matrix_one, ptr_matrix_two, lines, columns);
	print_matrix(ptr_result_matrix, lines, columns, 3);

	free_matrix(ptr_matrix_one, lines);
	free_matrix(ptr_matrix_two, lines);
	free_matrix(ptr_result_matrix, lines);

	return 0;

}
