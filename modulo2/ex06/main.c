/* Ficheiro principal para a resolução do exercício 6 do módulo 2 */

#include <stdio.h>
#include "concatBytes.h"

char byte1 = 0xaa;
char byte2 = 0xbb;

int main() {
	
	short result;
	result = concatBytes();
	printf("Byte1: %hhx\n", byte1);
	printf("Byte2: %hhx\n", byte2);
	printf("Result: %hx\n", result);

	return 0;

}
