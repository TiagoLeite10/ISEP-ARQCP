#define INT_BITS 32 // Constante que representa o número de bits que um valor inteiro tem

/*
 * Função que conta o número de bits ativos (com valor 1) no valor do número inteiro x.
 * Recebe o valor inteiro x por parâmetro.
 * Devolve o número de bits ativos no valor inteiro x passado por parâmetro
 */
int count_bits_one(int x) {

	int count = 0;

	for (int pos_bit = 0; pos_bit < INT_BITS; pos_bit++) {
		count += x & 1;		
		x >>= 1;
	}

	return count;

}
