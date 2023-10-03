/* Ficheiro principal para a resolução do exercício 19b do módulo 4 */
#include <stdio.h>
#include "add_byte.h"
#include "print_bits_array_numbers.h"

int main(void) {
	int vec1[] = {6, 0xffffffff, 0xff, 0xfffff0ff, 0xfffff8ff, 0, 4};
	int *ptr1 = vec1;
	int size = *ptr1 + 1;
	
	int vec2[size];
	int *ptr2 = vec2;
	
	int x = 5;
	add_byte(x, ptr1, ptr2);
	
	printf("Valor do x: %d\n", x);
	printf("Representação em binário: ");
	print_bits(x);
	
	printf("\n");
	printf("----- Primeiro array -----\n");
	print_bits_array_numbers(ptr1, size);
	
	printf("----- Segundo Array -----\n");
	print_bits_array_numbers(ptr2, size);
	
	return 0;
}

