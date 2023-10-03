/* Ficheiro principal para a resolução do exercício 6 do módulo 4 */
#include <stdio.h>
#include "test_equal.h"

int main() {

	char *a;
	char *b;

	char string1[] = "Estas frases são iguais!";
	char string2[] = "Estas frases são iguais!";
	
	a = string1;
	b = string2;

	int result = test_equal(a, b);

	printf("Primeira frase: %s\n", a);
	printf("Segunda frase: %s\n", b);
	printf("Resultado (1 se são iguais, 0 se não são iguais): %d\n", result);

	printf("\n----- -----\n\n");

	char string3[] = "Estas frases não são iguais!";
	char string4[] = "Pois não!";

	a = string3;
	b = string4;

	result = test_equal(a, b);

	printf("Primeira frase: %s\n", a);
	printf("Segunda frase: %s\n", b);
	printf("Resultado (1 se são iguais, 0 se não são iguais): %d\n", result);

	printf("\n----- -----\n\n");

	char string5[] = "Estas frases são iguais!";
	char string6[] = "Estas frases são iguais! Mas esta é mais comprida um bocadito!";

	a = string5;
	b = string6;

	result = test_equal(a, b);

	printf("Primeira frase: %s\n", a);
	printf("Segunda frase: %s\n", b);
	printf("Resultado (1 se são iguais, 0 se não são iguais): %d\n", result);

	printf("\n----- -----\n\n");

	char string7[] = "";
	char string8[] = "";

	a = string7;
	b = string8;

	result = test_equal(a, b);

	printf("Primeira frase: %s\n", a);
	printf("Segunda frase: %s\n", b);
	printf("Resultado (1 se são iguais, 0 se não são iguais): %d\n", result);


	return 0;

}
