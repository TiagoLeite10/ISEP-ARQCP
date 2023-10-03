/* Ficheiro principal para a resolução do exercício 15 do módulo 3 */
#include <stdio.h>
#include "sum_first_byte.h"
#include "print_vec_long.h"

long *ptrvec;
int num = 0;

int main(void) {
	long array[] = {1, 4, 20, 23, 45, 67, 89, 90};
	ptrvec = array;
	num = sizeof(array) / sizeof(array[0]);
	
	printf("Array: \n");
	print_vec_long(ptrvec, num);
	printf("A soma dos 1ºs bytes dos elementos é: %d\n", sum_first_byte());
	
	return 0;
}
