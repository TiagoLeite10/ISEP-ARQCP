/* Ficheiro principal para a resolução do exercício 07 do módulo 3 */
#include <stdio.h>
#include "encrypt.h"
#include "decrypt.h"

char *ptr1;

int main() {

	char string1[] = "Esta e a primeira string a ser modificada!";
	ptr1 = string1;
	printf("Frase original: %s\n", ptr1);
	
	printf("\n");

	int encrypted_chars = encrypt();
	printf("Frase encriptada: %s\n", ptr1);
	printf("Número de caracteres encriptados: %d\n", encrypted_chars);
	printf("\n");
	int decrypted_chars = decrypt();
	printf("Frase desencriptada: %s\n", ptr1);
	printf("Número de caracteres desencriptados: %d\n", decrypted_chars);

	printf("----- -----\n");

	char string2[] = "  ";
	ptr1 = string2;
	printf("Frase original: %s\n", ptr1);
	printf("\n");
	encrypted_chars = encrypt();
	printf("Frase encriptada: %s\n", ptr1);
	printf("Número de caracteres encriptados: %d\n", encrypted_chars);
	printf("\n");
	decrypted_chars = decrypt();
	printf("Frase desencriptada: %s\n", ptr1);
	printf("Número de caracteres desencriptados: %d\n", decrypted_chars);

	printf("----- -----\n");

	char string3[] = "ARQCP e muito fixe!";
	ptr1 = string3;
	printf("Frase original: %s\n", ptr1);
	printf("\n");
	encrypted_chars = encrypt();
	printf("Frase encriptada: %s\n", ptr1);
	printf("Número de caracteres encriptados: %d\n", encrypted_chars);
	printf("\n");
	decrypted_chars = decrypt();
	printf("Frase desencriptada: %s\n", ptr1);
	printf("Número de caracteres desencriptados: %d\n", decrypted_chars);

	return 0;

}
