/* Função para rodar num determinado número, um número de bits para a esquerda */
int rotate_left(int num, int nbits) {
	int shifted = num  << nbits; 			// Guarda o número que resulta de rodar n bits para a esquerda do número inicial (num << nbits) se o número estiver guardado em 8 bits
	int rotate_bits = num >> (32 - nbits); 		// Guarda o número que resulta de rodar n bits para a esquerda do número inicial (num >> (32 - nbits)) se estiver guardado em 16 ou 32 bits
		
	return shifted | rotate_bits;
}

/* Função para rodar num determinado número, um número de bits para a direita */
int rotate_right(int num, int nbits) {
	int shifted = num  >> nbits; 			// Guarda o número que resulta de rodar n bits para a direita do número inicial (num >> nbits) se o número estiver guardado em 8 bits
	int rotate_bits = num << (32 - nbits); 		// Guarda o número que resulta de rodar n bits para a direita do número inicial (num << (32 - nbits)) se estiver guardado em 16 ou 32 bits
		
	return shifted | rotate_bits;
}
