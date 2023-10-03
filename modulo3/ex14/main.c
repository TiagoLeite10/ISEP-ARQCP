/* Ficheiro principal para a resolução do exercício 14 do módulo 3 */
#include <stdio.h>
#include "exists.h"
#include "vec_diff.h"
#include "print_vec_int.h"

int x = 2;
int *ptrvec;
int num;

int main() {

	int vec1[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	num = 10;
	ptrvec = vec1;
	printf("* Array com 10 elementos *\n");
	printf("Valores presentes no array: \n");
	print_vec_int(ptrvec, num);
	int is_duplicated = exists();
	printf("O número %d está duplicado no array? (1 se sim, 0 se não): %d\n", x, is_duplicated);
	int num_not_duplicated = vec_diff();
	printf("Número de valores que não se encontram duplicados no array: %d\n", num_not_duplicated);

	printf("\n----- -----\n\n");

	int vec2[] = {};
	num = 0;
	ptrvec = vec2;
	printf("* Array com 0 elementos *\n");
	printf("Valores presentes no array: \n");
	print_vec_int(ptrvec, num);
	is_duplicated = exists();
	printf("O número %d está duplicado no array? (1 se sim, 0 se não): %d\n", x, is_duplicated);
	num_not_duplicated = vec_diff();
	printf("Número de valores que não se encontram duplicados no array: %d\n", num_not_duplicated);

	printf("\n----- -----\n\n");

	int vec3[] = {2, 4, 6, 2, 10, 12, 4, 2, 6, 18, 20};
	num = 11;
	ptrvec = vec3;
	printf("* Array com 11 elementos *\n");
	printf("Valores presentes no array: \n");
	print_vec_int(ptrvec, num);
	is_duplicated = exists();
	printf("O número %d está duplicado no array? (1 se sim, 0 se não): %d\n", x, is_duplicated);
	num_not_duplicated = vec_diff();
	printf("Número de valores que não se encontram duplicados no array: %d\n", num_not_duplicated);

	printf("\n----- -----\n\n");

	int vec4[] = {20, 20};
	num = 2;
	x = 20;
	ptrvec = vec4;
	printf("* Array com 1 elemento *\n");
	printf("Valores presentes no array: \n");
	print_vec_int(ptrvec, num);
	is_duplicated = exists();
	printf("O número %d está duplicado no array? (1 se sim, 0 se não): %d\n", x, is_duplicated);
	num_not_duplicated = vec_diff();
	printf("Número de valores que não se encontram duplicados no array: %d\n", num_not_duplicated);

	return 0;

}
