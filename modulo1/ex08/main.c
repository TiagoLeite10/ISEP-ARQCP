/* Ficheiro principal para a resolução do exercício 08 do módulo 1 */
#include <stdio.h>
#include "array_sort2.h"
#include "print_array.h"

int main() {
	
	int vec[] = {5, 2, 1, 9, 10, 20, 50, 200, 1, 5};
	int n = sizeof(vec) / sizeof(vec[0]);

	printf("Vetor antes de ser ordenado:\n");
	print_array(vec, n);
	
	array_sort2(vec, n);	

	printf("Vetor após ser ordenado:\n");
	print_array(vec, n);

	return 0;
}
