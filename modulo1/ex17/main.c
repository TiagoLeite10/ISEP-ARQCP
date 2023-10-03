/* Ficheiro principal para a resolução do exercício 17 do módulo 1 */

#include <stdio.h>
#include "swap.h"
#include "print_array.h"

// Constante que representa o tamanho dos arrays
#define SIZE 10

int main() {

	int vec1[] = {5, 2, 9, 10, 20, 99, 90, 19, 29, 100};
	int vec2[] = {99, 11, 12, 15, 88, 92, 18, 75, 7, 10};

	printf("Os valores originais do vetor vec1: \n");
	print_array(vec1, SIZE);

	printf("Os valores originais do vetor vec2: \n");
	print_array(vec2, SIZE);

	swap(vec1, vec2, SIZE);

	printf("\n");

	printf("Os novos valores do vetor vec1: \n");
	print_array(vec1, SIZE);

	printf("Os novos valores do vetor vec2: \n");
	print_array(vec2, SIZE);

	return 0;

}
