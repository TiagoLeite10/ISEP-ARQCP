/* Ficheiro principal para a resolução do exercício 20 do módulo 3 */
#include <stdio.h>
#include "count_max.h"
#include "print_vec_int.h"

int *ptrvec;
int num;

int main() {
	
	int array1[] = {5, 6, 4, 9, 20, 12, 22, 99, 100, 10, 1000, 20};
	num = 12;
	ptrvec = array1;

	printf("Valores presentes no array: \n");
	print_vec_int(ptrvec, num);
	int result = count_max();
	printf("Resultado: %d\n", result);

	printf("\n----- -----\n\n");

	int array2[] = {};
	num = 0;
	ptrvec = array2;
	result = count_max();
	printf("Resultado de um array vazio: %d\n", result);

	printf("\n----- -----\n\n");

	int array3[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	num = 10;
	ptrvec = array3;
	printf("Valores presentes no array: \n");
	print_vec_int(ptrvec, num);
	result = count_max();
	printf("Resultado: %d\n", result);

	return 0;

}
