/* Ficheiro principal para a resolução do exercício 06 do módulo 3 */
#include <stdio.h>
#include "encrypt.h"

char *ptr1;

int main() {

	char string1[] = "Esta e a primeira string a ser modificada!";
	ptr1 = string1;
	printf("Frase original: %s\n", ptr1);
	int changed_chars = encrypt();
	printf("Frase encriptada: %s\n", ptr1);
	printf("Número de caracteres alterados: %d\n", changed_chars);

	printf("\n");

	char string2[] = "  ";
	ptr1 = string2;
	printf("Frase original: %s\n", ptr1);
	changed_chars = encrypt();
	printf("Frase encriptada: %s\n", ptr1);
	printf("Número de caracteres alterados: %d\n", changed_chars);

	printf("\n");

	char string3[] = "ARQCP e muito fixe!";
	ptr1 = string3;
	printf("Frase original: %s\n", ptr1);
	changed_chars = encrypt();
	printf("Frase encriptada: %s\n", ptr1);
	printf("Número de caracteres alterados: %d\n", changed_chars);

	return 0;

}
