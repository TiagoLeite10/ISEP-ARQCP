/* Ficheiro principal para a resolução do exercício 05 do módulo 1 */

#include <stdio.h>
#include "upper2.h"

int main() {
	
	char word1[] = "Arqcp";
	char word2[] = "Exercise 5";
	char word3[] = "PointerS in C";
	char word4[] = "Test FUnctIonaliTy";

	printf("Palavra original: %s\n", word1);
	printf("Palavra original: %s\n", word2);
	printf("Palavra original: %s\n", word3);
	printf("Palavra original: %s\n", word4);
	
	upper2(word1);
	upper2(word2);
	upper2(word3);
	upper2(word4);

	printf("Palavra com maiúsculas: %s\n", word1);
	printf("Palavra com maiúsculas: %s\n", word2);
	printf("Palavra com maiúsculas: %s\n", word3);
	printf("Palavra com maiúsculas: %s\n", word4);
	
	return 0;

}

