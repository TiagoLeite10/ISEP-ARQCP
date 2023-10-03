/* Ficheiro principal para a resolução do exercício 10 do módulo 1 */
#include <stdio.h>
#include "odd_sum.h"

int main() {
	int vec[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int sum = odd_sum(vec);
	
	printf("Soma dos ímpares dos primeiros 10 números: %i \n", sum);
	return 0;
}
