/* Ficheiro principal para a resolução do exercício 13 do módulo 2 */
#include <stdio.h>
#include "getArea.h"

int length1 = 0, length2 = 0, height = 0;

int main(void) {	
	
	length1 = 14, length2 = 15, height = 23;
	printf("Length 1: %d\n", length1);
	printf("Length 2: %d\n", length2);
	printf("Heigth: %d\n", height);
	printf("Área do trapézio: %d\n\n", getArea());
	
	length1 = 10, length2 = 5, height = 8;
	printf("Length 1: %d\n", length1);
	printf("Length 2: %d\n", length2);
	printf("Heigth: %d\n", height);
	printf("Área do trapézio: %d\n\n", getArea());
	
	length1 = 25, length2 = 50, height = 35;
	printf("Length 1: %d\n", length1);
	printf("Length 2: %d\n", length2);
	printf("Heigth: %d\n", height);
	printf("Área do trapézio: %d\n", getArea());
	
	return 0;
}
