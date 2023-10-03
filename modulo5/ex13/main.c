/* Ficheiro principal para a resolução do exercício 13 do módulo 5 */
#include <stdio.h>
#include "new_matrix.h"
#include "fill_matrix.h"
#include "matrix_helper.h"
#include "count_odd_matrix.h"

int main() {
	int lines = 5;
	int columns = 5;
	int **prt_matrix = new_matrix(lines, columns);

	printf("Matriz gerada:\n");
	fill_matrix_with_random_values(prt_matrix, lines, columns);
	print_matrix(prt_matrix, lines, columns, 2);

	int count_odd = count_odd_matrix(prt_matrix, lines, columns);
	printf("\nTotal de números impares na matriz: %d\n", count_odd);
	
	free_matrix(prt_matrix, lines);
    
	return 0;
}
