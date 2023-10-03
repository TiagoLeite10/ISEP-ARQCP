#define SHIFT_1_BYTE 8 // Constante que representa o número de bits a avançar para se dar shift de um byte a um valor

/*
 * Função para realizar a soma de todos os valores presentes num array de chars, em que estes sejam múltiplos do segundo byte de um dado número inteiro.
 * Recebe como parâmetro um apontador para um array de chars e um número inteiro.
 * Devolve a soma dos valores do array que sejam múltiplos do segundo byte do número inteiro.
 */
int sum_multiples_x(char *vec, int x) {

	int sum = 0;

	int mask = 0xff00; // Máscara para conseguir apenas o valor do segundo byte
	x &= mask;
	x >>= SHIFT_1_BYTE; // Coloca os bits do seundo byte na zona do primeiro byte
	
	while (*vec != 0) {
		
		if (*vec % x == 0)
			sum += *vec;

		vec++;
	}

	return sum;

}
