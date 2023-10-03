/* Função para descobrir os índices de uma dada String onde são encontrados caracteres iguais 
 * ao desejado, guardando o valor desses índices num array de inteiros.
 * É passado como parâmetro um apontador para um array de Strings, o caracter a ser procurado
 * na String e o um apontador para um array de inteiros.
 * A função devolve o número de caracteres que foram encontrados e que são iguais ao desejado.
 */
int where_is(char *str, char c, int *p) {
	// Representa a posição na String
	int pos = 0;

	// Contador de vezes que o caracter é encontrado
	int count = 0;

	// Ciclo que percorre toda a String
	while (*(str + pos) != '\0') {
		if (*(str + pos) == c) {
			// Guarda na posição count do array (que é a primeira posição livre) de
			// inteiros o valor da posição pos
			*(p + count) = pos;
			count++;
		}

		pos++;
	}

	return count;

}
