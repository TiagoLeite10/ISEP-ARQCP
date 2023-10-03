/* Ficheiro principal para a resolução do exercício 13 do módulo 3 */
#include <stdio.h>
#include "keep_positives.h"
#include "print_vec_short.h"

short *ptrvec;
unsigned short num = 0;

int main(void) {
	short array[] = {-1, -4, -20, -23, 0, 1, 4, 23, 36};	
	ptrvec = array;
	num = sizeof(array) / sizeof(array[0]);
	
	printf("Array antes da mudança: \n");
	print_vec_short(ptrvec, num);
	
	keep_positives();
	
	printf("\nArray depois da mudança: \n");
	print_vec_short(ptrvec, num);
	
	return 0;
}
