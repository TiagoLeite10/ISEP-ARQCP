/* Ficheiro principal para a resolução do exercício 11 do módulo 5 */
#include <stdio.h>
#include <stdlib.h>
#include "new_matrix.h"

int main() {
	int lines = 10;
	int columns = 25;
	int **ptr_matrix = new_matrix(lines, columns);
		
	printf("Número de linhas: %d\n", lines);
	printf("Número de colunas: %d\n", columns);
    printf("Endereço da matriz: %p\n", (*ptr_matrix));
    
	for (int i = 0; i < lines; i++){
		free (*(ptr_matrix + i));
	}
	free(ptr_matrix);

	return 0;
}
