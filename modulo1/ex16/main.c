/* Ficheiro principal para a resolução do exercício 16 do módulo 1 */
#include <stdio.h>
#include "where_exists.h"

int main() {
	char str1[] = "cde";
	char str2[] = "Abcdefgh";
	char str3[] = "ijk";
	
	char *word_addr = where_exists(str1, str2);
	
	if (word_addr != NULL) {
		printf("O início da palavra \"%s\" na frase \"%s\", encontra-se na posição de memória %p!\n", str1, str2, word_addr);
	} else {
		printf("A palavra %s não existe na frase \"%s\"!\n", str1, str2);
	}
	
	word_addr = where_exists(str3, str2);
	
	if (word_addr != NULL) {
		printf("O início da palavra \"%s\" na frase \"%s\", encontra-se na posição de memória %p!\n", str3, str2, word_addr);
	} else {
		printf("A palavra %s não existe na frase \"%s\"!\n", str3, str2);
	}
	
	return 0;
}
