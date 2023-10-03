/* Ficheiro principal para a resolução do exercício 10 do módulo 3 */
#include <stdio.h>
#include "str_cat.h"
#define MAX_LENGTH 80

char *ptr1;
char *ptr2;
char *ptr3;

int main() {
	
	char string1[] = "Isto é uma frase ";
	char string2[] = "que agora foi concatenada.";
	char final_string[MAX_LENGTH];

	ptr1 = string1;
	ptr2 = string2;
	ptr3 = final_string;

	str_cat();

	printf("Primeira string: %s\n", ptr1);
	printf("Segunda string: %s\n", ptr2);
	printf("Strings concatenadas: %s\n", ptr3);

	printf("\n");

	char string3[] = "Isto é um tes";
	char string4[] = "te à função!";
	char final_string2[MAX_LENGTH];

	ptr1 = string3;
	ptr2 = string4;
	ptr3 = final_string2;

	str_cat();

	printf("Primeira string: %s\n", ptr1);
	printf("Segunda string: %s\n", ptr2);
	printf("Strings concatenadas: %s\n", ptr3);

	printf("\n");

	char string5[] = "Teste";
	char string6[] = "";
	char final_string3[MAX_LENGTH];

	ptr1 = string5;
	ptr2 = string6;
	ptr3 = final_string3;

	str_cat();

	printf("Primeira string: %s\n", ptr1);
	printf("Segunda string: %s\n", ptr2);
	printf("Strings concatenadas: %s\n", ptr3);

	printf("\n");

	char string7[] = "";
	char string8[] = "Teste";
	char final_string4[MAX_LENGTH];

	ptr1 = string7;
	ptr2 = string8;
	ptr3 = final_string4;

	str_cat();

	printf("Primeira string: %s\n", ptr1);
	printf("Segunda string: %s\n", ptr2);
	printf("Strings concatenadas: %s\n", ptr3);

	printf("\n");

	char string9[] = "";
	char string10[] = "";
	char final_string5[MAX_LENGTH];

	ptr1 = string9;
	ptr2 = string10;
	ptr3 = final_string5;

	str_cat();

	printf("Primeira string: %s\n", ptr1);
	printf("Segunda string: %s\n", ptr2);
	printf("Strings concatenadas: %s\n", ptr3);


	return 0;

}
