/* Função para encontrar e devolver um apontador para o endereço do último 
 * caracter de um dado array de chars.
 * Recebe como parâmetro o apontador para um array de chars.
 * Retorna o endereço do último caracter do array.
 */
char *find_last_index_address(char *vec) {
	// Verificar se o apontador vec não está a apontar para um caracter nulo
	if (*vec != '\0') {
		// Ciclo para percorrer todo o array
		while (*(vec + 1) != '\0') {
			// Incremento de 1 byte de memória no apontador
			vec++;
		}
	}

	return vec;

}
