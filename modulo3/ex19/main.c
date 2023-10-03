/* Ficheiro principal para a resolução do exercício 19 do módulo 3 */
#include <stdio.h>
#include "frequencies.h"
#include "print_vec.h"

#define NUM_FREQUENCIES 21

char *ptrgrades;
int num;
int *ptrfreq;

int main(void) {
	char grades[] = {1, 4, 20, 8, 5, 13, 14, 15, 19, 20};
	ptrgrades = grades;
	num = sizeof(grades) / sizeof(grades[0]);
	
	int freq[NUM_FREQUENCIES];
	ptrfreq = freq;
	
	frequencies();
	
	printf("Notas: \n");
	print_vec_char(ptrgrades, num);
	
	printf("\n");
	
	printf("Frequência absoluta das notas: \n");
	print_vec_int(ptrfreq, NUM_FREQUENCIES);
	
	return 0;
}
