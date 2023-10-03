/* Ficheiro principal para a resolução do exercício 19 do módulo 1 */

#include <stdio.h>
#include "find_word.h"

int main() {
	
	char str[] = "Esta frase serve para testar o método para encontrar uma palavra";
	char word_to_find[] = "testar";

	char *word_addr = find_word(word_to_find, str);
	
	if (word_addr != NULL) {
		printf("O início da palavra \"%s\" na frase \"%s\", encontra-se na posição de memória %p!\n", word_to_find, str, word_addr);
	} else {
		printf("A palavra %s não existe na frase \"%s\"!\n", word_to_find, str);
	}

	char word_to_find_two[] = "teste";
	char *word_addr_two = find_word(word_to_find_two, str);
	
	if (word_addr_two != NULL) {
		printf("O início da palavra \"%s\" na frase \"%s\", encontra-se na posição de memória %p!\n", word_to_find_two, str, word_addr_two);
	} else {
		printf("A palavra %s não existe na frase \"%s\"!\n", word_to_find_two, str);
	}

	return 0;

}
