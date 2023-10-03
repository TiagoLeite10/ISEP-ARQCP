/* Ficheiro principal para a resolução do exercício 04 do módulo 3 */

#include <stdio.h>
#include "vec_add_two.h"
#include "print_vec_int.h"

int num;
int *ptrvec;

int main() {

	int array[] = {-2, 2, 4, 1, 9, 10, 18, 20, 21, 17};
	num = 10;
	ptrvec = array;

	printf("Vetor com os valores originais: \n");
	print_vec_int(ptrvec, num);
	vec_add_two();
	printf("Vetor alterado: \n");
	print_vec_int(ptrvec, num);
	printf("\n");

	int array2[] = {5, -99, 22, 90, 99};
	num = 5;
	ptrvec = array2;

	printf("Vetor com os valores originais: \n");
	print_vec_int(ptrvec, num);
	vec_add_two();
	printf("Vetor alterado: \n");
	print_vec_int(ptrvec, num);
	printf("\n");

	int array3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	num = 12;
	ptrvec = array3;

	printf("Vetor com os valores originais: \n");
	print_vec_int(ptrvec, num);
	vec_add_two();
	printf("Vetor alterado: \n");
	print_vec_int(ptrvec, num);
	printf("\n");

	return 0;

}
