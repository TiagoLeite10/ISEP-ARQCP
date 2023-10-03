/* Ficheiro principal para a resolução do exercício 03 do módulo 1 */

#include <stdio.h>
#include "sum_even.h"

int main() {

	int p[] = {10, 5, 2, 1, 3, 7, 9, 20};
	int num = sizeof(p) / sizeof(p[0]);
	int sum = sum_even(p, num);

	printf("Soma de todos os números pares do array: %d\n", sum);

	return 0;
}
