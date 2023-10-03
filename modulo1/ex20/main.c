/* Ficheiro principal para a resolução do exercício 20 do módulo 1 */
#include <stdio.h>
#include "find_all_words.h"

int main() {	
	char str[] = "Esta frase serve para testar o método para encontrar uma palavra";
	char word[] = "para";	
	char *addrs[25] = {NULL};

	find_all_words(str, word, addrs);	
			
	int i=0;
	
	if (*(addrs + i) != NULL) {
		printf("Frase original: \"%s\" \n", str);
		printf("Palavra a encontrar: \"%s\" \n", word);

	
		while(*(addrs + i) != NULL){
			printf("Posição de memória --> %p - \"%s\" \n", *(addrs + i), *(addrs + i));
			i++;
		}
	
	} else {
		printf("A palavra %s não existe na frase \"%s\"!\n", word, str);
	}

	return 0;
}
