/* Ficheiro principal para a resolução do exercício 1 do módulo 3 */
#include <stdio.h>
#include "seven_count.h"

char *ptr1;

int main(void) {
	char str[] = "Ho7e é ter7a-f7ir7";
	ptr1 = str;
	
	printf("Frase: %s\n", ptr1);
	printf("Número de repetições do caracter 7: %d\n", seven_count());
	
	return 0;
}
