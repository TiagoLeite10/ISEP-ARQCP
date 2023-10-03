/* Ficheiro principal para a resolução do exercício 18 do módulo 1 */
#include <stdio.h>
#include "compress_shorts.h"
#include "print_array.h"

int main() {
	short shorts[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int n_shorts = sizeof(shorts) / sizeof(shorts[0]);
	int integers[n_shorts / 2];	
	
	printf("Array inicial de shorts: \n");
	default_print_short(shorts, n_shorts);
	
	compress_shorts(shorts, n_shorts, integers);
	
	printf("Array final de inteiros: \n");
	default_print_integer(integers, n_shorts);
	
	return 0;
}
