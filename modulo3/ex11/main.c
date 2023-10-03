/* Ficheiro principal para a resolução do exercício 11 do módulo 3 */
#include <stdio.h>
#include "vec_greater10.h"
#include "print_vec_int.h"

int *ptrvec;
int num = 0;

int main(void) {
	int array[] = {1, 4, 20, 23, 45, 67, 89, 90};
	num = sizeof(array) / sizeof(array[0]);
	ptrvec = array;
	
	print_vec_int(ptrvec, num);
	printf("Quantidade de elementos maiores que 10: %d\n", vec_greater10());
	
	return 0;
}
