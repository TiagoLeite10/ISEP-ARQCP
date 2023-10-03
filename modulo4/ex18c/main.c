/* Ficheiro principal para a resolução do exercício 18c do módulo 4 */
#include <stdio.h>
#include "changes_vec.h"
#include "print_bits_array_elements.h"

int main() {
	
	int num = 8;
	int vec1[] = {0, 0xffffffff, 0xff, 0xff0fffff, 0xff8fffff, 0xff7f0fff, 0x700000, 0x800000};
	int *ptrvec;
	ptrvec = vec1;
	
	printf("Valores do array antes de realizar alterações: \n");
	print_bits_array_elements(ptrvec, num);
	changes_vec(ptrvec, num);
	printf("\n");
	printf("Valores do array após realizar as alterações: \n");
	print_bits_array_elements(ptrvec, num);

	printf("\n----- -----\n\n");

	num = 5;
	int vec2[] = {0, 20, 0xffff0fff, 4096, 5000};
	ptrvec = vec2;
	
	printf("Valores do array antes de realizar alterações: \n");
	print_bits_array_elements(ptrvec, num);
	changes_vec(ptrvec, num);
	printf("\n");
	printf("Valores do array após realizar as alterações: \n");
	print_bits_array_elements(ptrvec, num);

	printf("\n----- -----\n\n");

	num = 0;
	int vec3[] = {0};
	ptrvec = vec3;
	
	printf("Valores do array antes de realizar alterações: \n");
	print_bits_array_elements(ptrvec, num);
	changes_vec(ptrvec, num);
	printf("\n");
	printf("Valores do array após realizar as alterações: \n");
	print_bits_array_elements(ptrvec, num);

	printf("\n----- -----\n\n");

	num = 1;
	int vec4[] = {1};
	ptrvec = vec4;
	
	printf("Valores do array antes de realizar alterações: \n");
	print_bits_array_elements(ptrvec, num);
	changes_vec(ptrvec, num);
	printf("\n");
	printf("Valores do array após realizar as alterações: \n");
	print_bits_array_elements(ptrvec, num);

	printf("\n----- -----\n\n");

	return 0;

}
