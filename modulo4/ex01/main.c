/* Ficheiro principal para a resolução do exercício 1 do módulo 4 */
#include <stdio.h>
#include "cube.h"

int main(void) {
	int x = 0;
	printf("Cubo do número %d: %lu \n", x, cube(x));
	
	x = 3;
	printf("Cubo do número %d: %lu \n", x, cube(x));
	
	x = 50;
	printf("Cubo do número %d: %lu \n", x, cube(x));
	
	return 0;
}
