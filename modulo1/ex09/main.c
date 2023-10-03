/* Ficheiro principal para a resolução do exercício 09 do módulo 1 */

#include <stdio.h>
#include "sort_without_reps.h"
#include "print_array.h"

// Constante que representa o tamanho do array a utilizar
#define LENGTH 16

int main() {	
	

	int src[] = {19, 1, 2, 10, 99, 20, 1, 99, 3, 2, 4, 5, 10, 19, 15, 120};
	int dest[LENGTH];

	printf("Vetor original: \n");
	print_array(src, LENGTH);

	int count = sort_without_reps(src, LENGTH, dest);

	printf("Vetor filtrado e ordenado de forma ascendente: \n");
	print_array(dest, count);
	printf("O vetor filtrado contem %d números!\n", count);
	return 0;

}
