#include <stdio.h>

#define SHORT_BITS 16 // Constante que representa o número de bits que um valor do tipo short tem

/*
 * Função para imprimir todos os bits que representam um número do tipo short (representação em binário).
 * A função recebe por parâmetro o valor do número do tipo short a ser representado em binário e posteriormente imprime no ecrã o valor do número em binário
 */
void print_bits(short num) {

	char bits[SHORT_BITS + 1] = {'0'}; // Soma-se 1 ao valor de posições necessárias, pois um array de chars reserva a última posição para saber que o array termina ali, sendo então necessárias as 16 posições para guardar valores e + 1 posição para guardar o fim do array
	char *bits_pointer;
	bits_pointer = &bits[SHORT_BITS - 1]; // Apontar para o endereço do último valor pretendido do array (representa o bit menos significativo)
	
	for (int pos_bit = 0; pos_bit < SHORT_BITS; pos_bit++) {
		*bits_pointer = (num & 1) == 1 ? '1' : '0';
		bits_pointer--;
		num >>= 1;
	}

	printf("%s\n", bits);
}

/*
 * Função para imprimir todos os valores presentes em cada posição de um array de shorts.
 * A função recebe por parâmetro um apontador para o início do array de shorts e um número inteiro que representa o número de valores existentes no array (tamanho do array)
 */
void print_bits_array_numbers(short *ptr, int num) {

	for (int pos = 0; pos < num; pos++) {
		printf("Valor do número: %d\n", *ptr);
		printf("Representação em binário: ");
		print_bits(*ptr);
		ptr++;
		printf("**********\n");
	}

}
