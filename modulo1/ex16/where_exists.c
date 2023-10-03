#include <stddef.h>

/* Função para retornar se a primeira string existe na segunda. 
 * Recebe como parâmetro o endereço de duas strings. 
 */
char* where_exists(char* str1, char* str2) {
	
	// Verifica se a palavra ou a frase não tem conteúdo.
	if (*str1 == '\0' || *str2 == '\0') {
		return NULL;
	}

	// Ciclo para percorrer toda a String
	while (*str2 != '\0') {
		// Variável para armazenar o apontador da primeira string
		char *temp1 = str1;
		// Variável para armazenar o apontador da segunda string
		char *temp2 = str2;
		
		// Ciclo para verificar se o valor do endereço apontado atualmente da primeira string é igual ao da segunda e também 
		// se a primeira string ainda não chegou ao fim
		while (*temp1 == *temp2 && *temp1 != '\0') {
			// Avançar um byte de memória no apontador temporário da primeira string (próximo caracter)
			temp1++;
			// Avançar um byte de memória no apontador temporário da segunda string (próximo caracter)
			temp2++;
		}
		
		// Verifica se o apontador temporário da primeira string encontra-se no fim
		// em caso afirmativo é retornado o apontado da segunda string na posição onde 
		// se inicia a primeira palavra
		if (*temp1 == '\0') {
			return str2;
		}

		// Avançar um byte de memória na segunda string (próximo caracter)	
		str2++;
	}
	
	return NULL;
}
