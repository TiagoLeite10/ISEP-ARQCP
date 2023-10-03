/* Função para "comprimir" os valores de um array de shorts em um array de inteiros. 
 * Recebe como parâmetro o endereço de um array de shorts, um número inteiro que indica 
 * o número de elementos existentes nesse array e o endereço de um array de inteiros.
*/
void compress_shorts(short* shorts, int n_shorts, int* integers) {
	// Variável para converter o apontador do array de inteiros num apontador short
	short *pointer = (short *) integers;

	// Percorre todo o array de shorts e armazena em 4 bytes de um inteiros dois shorts.
	// Possuindo assim o vector de inteiros metade do tamanho do vector de shorts.
	for(int i = 0; i < n_shorts; i++) {
		*pointer = *(shorts + i);		
		pointer++;		
	}
}
