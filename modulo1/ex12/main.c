/* Ficheiro principal para a resolução do exercício 12 do módulo 1 */
#include <stdio.h>
#include "capitalize.h"

int main() {
	char phrase1[] = "The number must be saved";
	char phrase2[] = "The maximum value of this CYCLE";
	
	printf("Frase 1 original: %s\n", phrase1);
	capitalize(phrase1);
	printf("Frase 1 capitalizada: %s\n\n", phrase1);
	
	printf("Frase 2 original: %s\n", phrase2);
	capitalize(phrase2);
	printf("Frase 2 capitalizada: %s\n", phrase2);
	
	return 0;
}
