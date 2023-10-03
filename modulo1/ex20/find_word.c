#include <stddef.h>

// Constante que representa o intervalo de valores ASCII entre um dada letra minúscula e 
// a respetiva letra maiúscula.
#define LETTERS_OFFSET 32
// Constante que representa o valor ASCII da letra 'A'
#define START_UPPERCASE_LETTERS 'A'
// Constante que representa o valor ASCII da letra 'Z'
#define END_UPPERCASE_LETTERS 'Z'
// Constante que representa o valor ASCII da letra 'a'
#define START_LOWERCASE_LETTERS 'a'
// Constante que representa o valor ASCII da letra 'z'
#define END_LOWERCASE_LETTERS 'z'

/* Função para verificar se dois caracteres são iguais, quer estejam na forma minúscula
 * quer na forma maiúscula.
 * Recebe por parâmetro o caracter um e o caracter dois.
 * Retorna 1 se os caracteres forem correspondentes, quer na forma minúscula quer na forma
 * maiúscula, ou 0 em caso contrário.
 */
int verify_letters(char letter_one, char letter_two) {
	if (letter_one >= START_UPPERCASE_LETTERS && letter_one <= END_UPPERCASE_LETTERS) {
		return letter_one == letter_two || letter_one == letter_two - LETTERS_OFFSET;
	} else if (letter_one >= START_LOWERCASE_LETTERS && letter_one <= END_LOWERCASE_LETTERS) {
		return letter_one == letter_two || letter_one == letter_two + LETTERS_OFFSET;
	}

	return 0;
}

/* Função para descobrir o endereço em que começa a primeira ocorrência de uma dada palavra 
 * numa determinada String.
 * A função recebe como parâmetro um apontador para o array de uma palavra, e outro apontador
 * para uma frase.
 * A função retorna o endereço em que a palavra começa, caso a encontre na frase, ou NULL em 
 * caso de ela não existir.
 */
char* find_word(char* word, char* initial_addr) {

	// Verifica se a palavra ou a frase não tem conteúdo.
	if (*word == '\0' || *initial_addr == '\0') {
		return NULL;
	}
	
	// Variável que irá armazenar o endereço do início da palavra caso exista na frase.
	char *found_word_addr = NULL;
	// Variável que representa a posição a ser analisada da palavra.
	int pos_word = 0;
	// Variável que representa a posição a ser analisada da frase em questão.
	int pos_initial_addr = 0;
	// Variável que representa se a palavra foi ou não encontrada na frase.
	char found_word = 0;

	// Percorrer toda a frase e enquanto não é encontrada a palavra desejada.
	while (*(initial_addr + pos_initial_addr) != '\0' && !found_word) {
		// Verifica se a letra a ser analisada da frase é igual à letra a ser analisada 
		// da palavra
		if (verify_letters(*(initial_addr + pos_initial_addr), *(word + pos_word))) {
			// Se for a primeira letra da palavra, guardar o endereço
			if (pos_word == 0) {
				found_word_addr = initial_addr + pos_initial_addr;
			}

			// Avança 1 byte de memória na palavra (próximo caracter)
			pos_word++;
			
			// Se a próxima posição da palavra já não tiver mais nenhuma letra, mudar 
			// o valor da variável para sabermos que a palavra desejada foi encontrada.
			if (*(word + pos_word) == '\0') {
				found_word = 1;
			}
		} else {
			// Se ainda não chegamos ao final da palavra e a letra atual da frase não 
			// corresponde à letra atual da palavra, voltar ao início da palavra
			pos_word = 0;
		}

		// Avançar um byte de memória na frase (próximo caracter)
		pos_initial_addr++;

	}

	// Se não for encontrada a palavra, colocar novamente o apontador a devolver a nulo.
	if (!found_word) {
		found_word_addr = NULL;
	}

	return found_word_addr;

}
