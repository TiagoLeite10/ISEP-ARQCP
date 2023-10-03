/* Ficheiro principal para a resolução do exercício 17 do módulo 5 */
#include <stdio.h>
#include <stdlib.h>
#include "return_unionB_b.h"

int main() {
    structA **matrix = (structA **)malloc(sizeof(structA));	
	
	if (matrix == NULL) {
		printf("Ocorreu um erro ao reservar memória!\n");
	
	} else {
		int i = 0, j = 0, num_lines = 4, num_columns = 3;
	
		for(i = 0; i < num_lines; i++) {
			*(matrix + i)= (structA *) malloc(num_columns * sizeof(structA));
			
			if(*(matrix + i) == NULL ){
				printf("Ocorreu um erro ao reservar memória!\n");
			}
		}

		// Preenche o b do ub com valores da soma entre i e j
		for (i = 0; i < num_lines; i++) {
			for (j = 0; j < num_columns; j++) {
				matrix[i][j].ub.b = i + j;
			}
		}
		
		printf("Valores de matrix[i][j].ub.b:\n");
		// Imprime no ecrã os valores	
		for (i = 0; i < num_lines; i++) {
			for (j = 0; j < num_columns; j++) {
				char result = return_unionB_b(matrix, i, j);
				printf("matrix[%d][%d].ub.b = %d\n", i, j, result);
			}
		} 
		
		// Libertar memória
		for (i = 0; i < num_lines; i++) {
			free(*(matrix + i));
		}

		free(matrix);
	}	

	return 0;
}
