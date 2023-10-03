/* Ficheiro principal para a resolução do exercício 12 do módulo 5 */
#include <stdio.h>
#include "new_matrix.h"
#include "find_matrix.h"
#include "fill_matrix.h"
#include "matrix_helper.h"

void print_results(int num, int result) {
	printf("O valor %d existe na matriz acima apresentada?\n", num);
	printf("Resposta: %s\n", result == 1 ? "Sim" : "Não");
}

int main() {
	
	int lines = 5;
	int columns = 4;
	int **ptr_matrix = new_matrix(lines, columns);

	printf("Matriz gerada:\n");
	fill_matrix_with_random_values(ptr_matrix, lines, columns);
	print_matrix(ptr_matrix, lines, columns, 2);

	printf("\n\n");

	int num = 95;
	int result = find_matrix(ptr_matrix, lines, columns, num);
	print_results(num, result);

	printf("\n----- -----\n\n");

	num = 100;
	result = find_matrix(ptr_matrix, lines, columns, num);
	print_results(num, result);

	printf("\n----- -----\n\n");

	num = -1000;
	result = find_matrix(ptr_matrix, lines, columns, num);
	print_results(num, result);

	printf("\n----- -----\n\n");

	num = 0;
	result = find_matrix(ptr_matrix, lines, columns, num);
	print_results(num, result);

	printf("\n----- -----\n\n");

	num = 55;
	result = find_matrix(ptr_matrix, lines, columns, num);
	print_results(num, result);

	free_matrix(ptr_matrix, lines);

	return 0;

}
