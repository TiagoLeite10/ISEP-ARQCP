#define MAX_POS 31 // Constante que define a posição limite que pode ser passada por parâmetro
#define MIN_POS 0 // Constante que define a posição mínima que pode ser passada por parâmetro

/*
 * Função que coloca um bit num dada posição "pos" (entre 0 e 31) a zero.
 * Recebe por parâmetro um apontador para um valor inteiro e a posição onde o bit a alterar se encontra.
 * Se o bit da posição a alterar já for 0, a função devolve 0, se for 1, devolve 1 que quer dizer que o bit foi alterado.
 */
int reset_bit(int *ptr, int pos) {

	if (pos > MAX_POS || pos < MIN_POS) {
		return 0;
	}

	int result = 0;
	// ----- Descartado -----
	//int mask = -2; // Representa em binário: 11111111111111111111111111111110
	/*for (int pos_bit = 0; pos_bit < pos; pos_bit++) {
		mask <<= 1; // Posicionar o bit 0 no local pretendido
		mask += 1;  // Somar 1 para colocar o último bit a entrar igual a 1
	}*/
	// ----- -----
	int mask = 1; // Representa em binário: 00000000000000000000000000000001
	mask <<= pos;
	mask = ~mask;

	int originalValue = *ptr;
	*ptr &= mask; // Realiza a operação and entre o valor e a máscara, para alterarmos o bit na posição pretendida, caso esse bit seja 1
	
	// Se o valor obtido após a operação bitwise for diferente, significa que o bit foi alterado
	if (originalValue != *ptr) {
		result = 1;
	}

	return result;

}
