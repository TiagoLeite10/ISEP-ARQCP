/* Função auxiliar para capitalizar uma letra. Recebe como parâmetro o endereço de uma string. */
void capitalize_letter (char *letter) {
	// Verifica se a letra atual da String está compreendida entre o
	// valor ASCII do 'a' minúsculo e o 'z' minúsculo
	if (*letter >= 'a' && *letter <= 'z') {
		// Colocação do valor ASCII para a letra maiúscula
		// correspondente à letra minúscula atual
		*letter -= 32;
	}
}

/* Função para capitalizar as palavras de uma frase. Recebe como parâmetro o endereço de uma string. */
void capitalize (char *str) {
	// Variável que armazena se já houve ou não a passagem pelo primeiro caracter da frase
	unsigned short firstChar = 1;
	
	// Ciclo para percorrer toda a String
	while (*str != '\0') {
		
		// Verifica se ainda não houve a passagem pelo primeiro caracter da frase
		if (firstChar == 1) {
			// Armazena na variável que já houve a passagem pelo primeiro caracter			
			firstChar = 0;
			// Chama a função auxiliar para capitalizar a letra, se necessário
			capitalize_letter(str);

		// Verifica se a posição atual da frase é um espaço em branco
		} else if (*str == ' ') {
			// Avança 1 byte de memória na frase (próximo caracter)				
			str++;
			// Chama a função auxiliar para capitalizar a letra, se necessário
			capitalize_letter(str);
		}
		
		// Avança 1 byte de memória na frase (próximo caracter)
		str++;
	}
}
