/* Ficheiro principal para a resolução do exercício 12c do módulo 4 */
#include <stdio.h>
#include "vec_count_bits_one.h"
#include "print_bits_array_numbers.h"

int main() {
	
	printf("----- Primeiro array -----\n");
	short vec1[] = {5, 10, 20, 0, -10};
	int num = 5;
	short *ptr;
	ptr = vec1;

	print_bits_array_numbers(ptr, num);
	int result = vec_count_bits_one(ptr, num);
	printf("----- Resultado: %d -----\n", result);

	printf("\n----- -----\n\n");

	printf("----- Segundo array -----\n");
	short vec2[] = {0, 0, 0};
	num = 3;
	ptr = vec2;

	print_bits_array_numbers(ptr, num);
	result = vec_count_bits_one(ptr, num);
	printf("----- Resultado: %d -----\n", result);

	printf("\n----- -----\n\n");

	printf("----- Terceiro array -----\n");
	short vec3[] = {32767, 0, -32768, 2, 1};
	num = 5;
	ptr = vec3;

	print_bits_array_numbers(ptr, num);
	result = vec_count_bits_one(ptr, num);
	printf("----- Resultado: %d -----\n", result);

	return 0;

}
