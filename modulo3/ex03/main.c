/* Ficheiro principal para a resolução do exercício 03 do módulo 3 */
#include <stdio.h>
#include "str_copy_porto2.h"

char *ptr1;
char *ptr2;

int main() {
	char string[] = "BOm dia, isto é uma string para O teste do exercicio 03";
	char new_string[55];

	ptr1 = string;
	ptr2 = new_string;

	printf("String inicial: %s\n", ptr1);
	str_copy_porto2();
	printf("String final: %s\n", ptr2);
	
	printf("\n");

	char string2[] = "ooOOoO";
	char new_string2[6];

	ptr1 = string2;
	ptr2 = new_string2;
	
	printf("String inicial: %s\n", ptr1);
	str_copy_porto2();
	printf("String final: %s\n", ptr2);

	printf("\n");

	char string3[] = "Frase sem caracter";
	char new_string3[18];
	ptr1 = string3;
	ptr2 = new_string3;
	
	printf("String inicial: %s\n", ptr1);
	str_copy_porto2();
	printf("String final: %s\n", ptr2);

	return 0;

}
