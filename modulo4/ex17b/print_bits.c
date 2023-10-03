#include <stdio.h>

#define INT_BITS 32 // Constante que representa o número de bits que um valor inteiro tem

/*
 * Função para imprimir todos os bits que representam um número inteiro (representação em binário).
 * A função recebe por parâmetro o valor do número inteiro a ser representado em binário e posteriormente imprime no ecrã o valor do número em binário
 */
void print_bits(unsigned int num) {

	char bits[INT_BITS + 1] = {'0'}; // Soma-se 1 ao valor de posições necessárias, pois um array de chars reserva a última posição para saber que o array termina ali, sendo então necessárias as 32 posições para guardar valores e + 1 posição para guardar o fim do array
	char *bits_pointer;
	bits_pointer = &bits[INT_BITS - 1]; // Apontar para o endereço do último valor pretendido do array (representa o bit menos significativo)
	
	for (int pos_bit = 0; pos_bit < INT_BITS; pos_bit++) {
		*bits_pointer = (num & 1) == 1 ? '1' : '0';
		bits_pointer--;
		num >>= 1;
	}

	printf("%s\n", bits);
}
