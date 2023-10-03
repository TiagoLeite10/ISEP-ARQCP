/*
 * Função para substituir as letras minúsculas pelas respetivas letras maiúsculas
 * dado um endereço de uma String
 */
void upper2(char *str) {
	// Ciclo para percorrer toda a String
	while (*str != '\0') {
		// Verificar se a letra atual da String está compreendida entre o
		// valor ASCII do 'a' minúsculo e o 'z' minúsculo
		if (*str >= 'a' && *str <= 'z') {
			// Colocação do valor ASCII para a letra maiúscula
			// correspondente à letra minúscula atual
			*str -= 32;
		}
		
		// Soma ao apontador 1 byte (por ser do tipo char) de memória para 
		// este apontar para a próxima letra da String
		str++;
	}
}

