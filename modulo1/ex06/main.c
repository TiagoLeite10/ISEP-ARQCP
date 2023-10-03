/* Ficheiro principal para a resolução do exercício 06 do módulo 1 */
#include <stdio.h>
#include "power_ref.h"

int main() {
	int z = 10;
	int y = 2;
	
	int *x = &z;
	
	power_ref(x, y);
	
	printf("10^2 = %i \n", *x);
	return 0;
}
