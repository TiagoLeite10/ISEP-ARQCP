/* Ficheiro principal para a resolução do exercício 5 do módulo 3 */
#include <stdio.h>
#include "vec_sum.h"
#include "vec_avg.h"
#include "print_vec_long.h"

long *ptrvec;
short num = 0;

int main(void) {
	long array[] = {-1, -4, -20, -23, 0, 1, 4, 23, 36};	
	ptrvec = array;
	num = sizeof(array) / sizeof(array[0]);
	
	printf("Array: \n");
	print_vec_long(ptrvec, num);
	
	printf("\nSoma: %lu\n", vec_sum());
	printf("Média: %lu\n", vec_avg());
	
	return 0;
}
