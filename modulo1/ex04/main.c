/* Ficheiro principal para a resolução do exercício 04 do módulo 1 */
#include <stdio.h>
#include "upper1.h"

int main() {
	char word1[] = "arqcp";
	char word2[] = "Exercise 4";
	char word3[] = "Pointers in C";
	char word4[] = "Test FUnctIonaliTy";

	printf("Palavra original: %s\n", word1);
	upper1(word1);
	printf("Palavra com maiúsculas: %s\n\n", word1);

	printf("Palavra original: %s\n", word2);
	upper1(word2);
	printf("Palavra com maiúsculas: %s\n\n", word2);

	printf("Palavra original: %s\n", word3);
	upper1(word3);
	printf("Palavra com maiúsculas: %s\n\n", word3);

	printf("Palavra original: %s\n", word4);
	upper1(word4);
	printf("Palavra com maiúsculas: %s\n", word4);
	
	return 0;
}
