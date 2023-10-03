/* Ficheiro principal para a resolução do exercício 12 do módulo 3 */
#include <stdio.h>
#include "vec_zero.h"
#include "print_vec_int.h"

int *ptrvec;
int num = 0;

int main(void) {
	int array[] = {1, 4, 20, 23, 45, 67, 89, 90};	
	ptrvec = array;
	num = sizeof(array) / sizeof(array[0]);
	
	printf("Array antes da mudança: \n");
	print_vec_int(ptrvec, num);
	
	printf("Array depois da mudança: \n");
	unsigned char num_elements = vec_zero();
	print_vec_int(ptrvec, num);
	
	printf("O número de elementos mudados no array é igual a %d\n", num_elements);
	
	return 0;
}
