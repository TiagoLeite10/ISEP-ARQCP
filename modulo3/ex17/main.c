/* Ficheiro principal para a resolução do exercício 17 do módulo 3 */
#include <stdio.h>
#include "array_sort.h"
#include "print_vec_short.h"

short *ptrvec;
int num;

int main(void) {
	short array[] = {1, 42, 23, 2, 4, 67, 89, 90};
	ptrvec = array;
	num = sizeof(array) / sizeof(array[0]);
	
	printf("Array antes de ser ordenado: \n");
	print_vec_short(array, num);
	
	array_sort();
	
	printf("Array depois de ser ordenado de forma decrescente: \n");
	print_vec_short(array, num);
	
	return 0;
}
