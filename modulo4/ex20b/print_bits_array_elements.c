#include <stdio.h>

#define CHAR_BITS 8 // Constante que representa o número de bits que um valor do tipo char tem

/*
 * Função para imprimir todos os bits que representam um número do tipo char (representação em binário).
 * A função recebe por parâmetro o valor do número do tipo char a ser representado em binário e posteriormente imprime no ecrã o valor do número em binário
 */
void print_bits(char num) {

	char bits[CHAR_BITS + 1] = {'0'}; // Soma-se 1 ao valor de posições necessárias, pois um array de chars reserva a última posição para saber que o array termina ali, sendo então necessárias as 8 posições para guardar valores e + 1 posição para guardar o fim do array
	char *bits_pointer;
	bits_pointer = &bits[CHAR_BITS - 1]; // Apontar para o endereço do último valor pretendido do array (representa o bit menos significativo)
	
	for (int pos_bit = 0; pos_bit < CHAR_BITS; pos_bit++) {
		*bits_pointer = (num & 1) == 1 ? '1' : '0';
		bits_pointer--;
		num >>= 1;
	}

	printf("%s\n", bits);
}

/*
 * Função para imprimir todos os valores presentes em cada posição de um array de valores do tipo char.
 * A função recebe por parâmetro um apontador para o início do array de valores do tipo char, e um número inteiro que representa o número de valores existentes no array (tamanho do array)
 */
void print_bits_array_elements(char *ptrvec) {
	int pos = 0;
	while (*ptrvec != 0) {
		printf("Valor na posição %d do array, em décimal: %d, em binário: ", pos, *ptrvec);
		print_bits(*ptrvec);
		ptrvec++;
		pos++;
	}

}
