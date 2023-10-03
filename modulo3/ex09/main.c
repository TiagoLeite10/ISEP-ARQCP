/* Ficheiro principal para a resolução do exercício 9 do módulo 3 */
#include <stdio.h>
#include "vec_search.h"
#include "print_vec_short.h"

short *ptrvec;
int num;
short x;

int main(void) {
	short array[] = {1, 4, 20, 23, 45, 67, 89, 90};
	
	ptrvec = array;
	num = sizeof(array) / sizeof(array[0]);
	x= 45;
	
	print_vec_short(ptrvec, num);	
	printf("Endereço de memória da primeira ocorrência de %d: %p\n", x, vec_search());
	
	return 0;
}
