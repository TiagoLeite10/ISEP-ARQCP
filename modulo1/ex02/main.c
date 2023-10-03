/* Ficheiro principal para a resolução do exercício 02 do módulo 1 */
#include <stdio.h>
#include "copy_vec.h"
#include "print_array.h"

int main() {
	int vec1[] = {1, 3, 5, 7, 9};	
	int vec2[] = {15, 21, 25};
	int n =  sizeof(vec1) / sizeof(vec1[0]);
	
	printf("Valores do vec1: \n");
	print_array(vec1, n);
	
	copy_vec(vec1, vec2, n);
	
	printf("Valores do vec2: \n");
	print_array(vec2, n);
	
	return 0;	
}
