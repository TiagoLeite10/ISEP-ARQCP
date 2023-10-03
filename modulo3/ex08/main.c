/* Ficheiro principal para a resolução do exercício 8 do módulo 3 */
#include <stdio.h>
#include "test_even.h"
#include "vec_sum_even.h"
#include "print_vec_long.h"

long *ptrvec;
int num;
long even;

int main(void) {
	long array[] = {1, 4, 20, 23, 45, 67, 89, 90};	
	ptrvec = array;
	num = sizeof(array) / sizeof(array[0]);
	
	printf("Array: \n");
	print_vec_long(ptrvec, num);
	
	printf("\n");
	
	printf("Soma dos números pares: %lu\n", vec_sum_even());
	
	return 0;
}
