/*
 * Função que inverte os bits do terceiro byte de um número inteiro, mas apenas se o segundo byte for maior do que 15
 * Recebe por parâmetro um apontador para um valor do tipo inteiro
 */
void changes(int *ptr) {
	
	/* ----- Solução 1 -----
	int mask = 0x0000ff00; // Máscara a aplicar para ficarmos apenas com os bits do 2º byte
	int ptr_with_mask = *ptr & mask; // Aplica a máscara e fica apenas com os valores do 2º byte
	ptr_with_mask >>= 8; // Realiza o shift de 8 bits à direita, para conseguirmos perceber se o valor do 2º byte é maior do que 15

	if ( ptr_with_mask > 15) {
		mask = 0x00ff0000; // Máscara para inverter os bits do terceiro byte
		*ptr ^= mask; // Operação bitwise XOR
	}
	*/

	// Solução com menos operações:
	int mask = 0x0000f000; // Máscara para verificarmos se o 2º byte é maior do que 15 (como sabemos que a soma dos 4 bits menos significativos é 15, podemos logo descartar essa parte e ficar apenas com os 4 bits seguintes)
	
	// Sabendo então que agora temos apenas a parte do valor que interessa do 2º byte, caso seja diferente de 0, signfica que este valor é maior do que 15. Desta forma, não necessitamos de realizar shifts para trazer o 2º byte para a parte do 1º byte, e verificar apenas ai se o seu valor é maior do que 15.
	if ( (*ptr & mask) != 0 ) {
		mask = 0x00ff0000; // Máscara para inverter os bits do terceiro byte
		*ptr ^= mask; // Operação bitwise XOR
	}

}
