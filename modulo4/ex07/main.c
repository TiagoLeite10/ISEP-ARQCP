/* Ficheiro principal para a resolução do exercício 7 do módulo 4 */
#include <stdio.h>
#include "count_odd.h"
#include "print_vec_char.h"

int main(void) {
	char vec[] = {1, 4, 20, 23, 45, 67, 89, 90, 121};	
	char *ptrvec = vec;
	int num = sizeof(vec) / sizeof(vec[0]);
	
	printf("Array: \n");
	print_vec_char(ptrvec, num);
	
	printf("\n");
	
	printf("Total de números ímpares: %d\n", count_odd(ptrvec, num));
	
	return 0;
}
