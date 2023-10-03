/* Ficheiro principal para a resolução do exercício 18 do módulo 3 */
#include <stdio.h>
#include "sort_without_reps.h"
#include "print_vec_short.h"
#define MAX_LENGTH_ONE 10
#define MAX_LENGTH_TWO 1
#define MAX_LENGTH_THREE 0

short *ptrsrc;
int num;
short *ptrdest;

int main() {

	short src1[] = {90, 92, 109, 100, 99, 92, 93, 110, 599, 99};
	short dest1[MAX_LENGTH_ONE];
	num = 10;
	ptrsrc = src1;
	ptrdest = dest1;

	int num_distinct_items = sort_without_reps();
	printf("* Teste array com 10 elementos *\n");
	printf("Array antes de ser tratado: \n");
	print_vec_short(ptrsrc, num);
	printf("Array depois de ser tratado: \n");
	print_vec_short(ptrdest, num_distinct_items);
	printf("Exitem %d valores distintos no novo array!\n", num_distinct_items);
	
	printf("\n----- -----\n\n");

	short src2[] = {2000};
	short dest2[MAX_LENGTH_TWO];
	num = 1;
	ptrsrc = src2;
	ptrdest = dest2;

	num_distinct_items = sort_without_reps();
	printf("* Teste array com 1 elemento *\n");
	printf("Array antes de ser tratado: \n");
	print_vec_short(ptrsrc, num);
	printf("Array depois de ser tratado: \n");
	print_vec_short(ptrdest, num_distinct_items);
	printf("Exitem %d valores distintos no novo array!\n", num_distinct_items);

	printf("\n----- -----\n\n");

	short src3[] = {};
	short dest3[MAX_LENGTH_THREE];
	num = 0;
	ptrsrc = src3;
	ptrdest = dest3;

	num_distinct_items = sort_without_reps();
	printf("* Teste array com 0 elementos *\n");
	printf("Array antes de ser tratado: \n");
	print_vec_short(ptrsrc, num);
	printf("Array depois de ser tratado: \n");
	print_vec_short(ptrdest, num_distinct_items);
	printf("Exitem %d valores distintos no novo array!\n", num_distinct_items);


	return 0;

}
