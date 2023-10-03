/* Ficheiro principal para a resolução do exercício 10 do módulo 5 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "new_str.h"

#define SIZE 80

int main() {

	char str[80];
	strcpy(str, "Cristiano Ronaldo is the GOAT!");

	char *ptr_new_str;
	ptr_new_str = new_str(str);

	printf("str: %s\n", str);
	printf("new_str: %s\n", ptr_new_str);
	
	free(ptr_new_str);

	printf("\n----- -----\n\n");

	strcpy(str, "");
	ptr_new_str = new_str(str);

	printf("str: %s\n", str);
	printf("new_str: %s\n", ptr_new_str);
	
	free(ptr_new_str);

	printf("\n----- -----\n\n");

	strcpy(str, "Portugal could win the 2022 world cup in football!");
	ptr_new_str = new_str(str);

	printf("str: %s\n", str);
	printf("new_str: %s\n", ptr_new_str);
	
	free(ptr_new_str);

	return 0;

}
