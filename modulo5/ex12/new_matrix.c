#include <stdlib.h>

/* Função para reservar dinamicamente um bloco de memória para armazenar uma matriz linhas x colunas. A função retorna o endereço da matriz recém-criada. */
int **new_matrix(int lines, int columns) {
	int **ptr_matrix = (int **) malloc(lines * sizeof(int*)); // Reserva o nº de linhas * 4 bytes
	
	for(int i = 0; i < lines; i++) {
		*(ptr_matrix + i) = (int *) calloc(columns, sizeof(int)); // Reserva para cada linha o nº de colunas * 4 bytes e coloca-os a 0. Cada linha contêm um endereço para as suas colunas.
	}
	
	return ptr_matrix; // Retorna o apontador da matriz		
}
