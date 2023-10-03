#include <stddef.h>
#include "find_word.h"

/* Função para encontrar todas as ocorrências de uma palavra numa frase.
 * Recebe como parâmetro o endereço de duas strings e o endereço de um array 
 * para ser preenchido com todos os endereços da palavra encontrada na frase. 
*/
void find_all_words(char* str, char* word, char** addrs) {
	// Ciclo para ser percorrido enquanto existirem ocorrências da palavra na frase
	while(str != NULL) {
		// Recebe o apontador atual onde se encontra uma ocorrência da palavra na frase		
		str = find_word(word, str);	
		
		// Verifica se o apontador é diferente de null, que indica que ainda 
		// podem haver mais ocorrências da palavra na frase
		if (str != NULL) {
			// Armazena o apontador da ocorrência da palavra na frase no apontador addrs
			*addrs = str;
			
			// Avança um byte de memória no apontador para guardar a próxima ocorrência
			addrs++;
			
			// Avança um byte de memória no apontador para ser possível verificar se ainda 
			// existem mais ocorrência da palavra na frase
			str++;
		}
	}
}
