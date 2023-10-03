#define MAX_POS 31 // Constante que define a posição limite que pode ser passada por parâmetro
#define MIN_POS 0 // Constante que define a posição mínima que pode ser passada por parâmetro

/*
 * Função para juntar os bits da variável b com os bits da variável a, a parti-los numa dada posição, isto é, seguindo a expressão seguinte b31 b30 ... bpos+1 apos ... a1 a0
 * Recebe por parâmetro o valor da variável a, da variável b e da posição onde os bits serão "partidos"
 * Devolve a junção dos bits resultantes da variável b com os da variável a
 */
int join_bits(int a, int b, int pos) {

	if (pos > MAX_POS || pos < MIN_POS)
		return 0;

	int mask = -1; // Representa 32 bits a 1
	
	// ----- Descartado -----
	// Loop para dar os shifts que colocam determinados bits a 0 a partir do lado direito, criando assim a máscara desejada
	/*for (int number_shifts = 0; number_shifts <= pos; number_shifts++) {
		mask <<= 1;
	}*/
	// ----- -----

	// Se a posição desejada for igual ao número máximo permitido, colocar logo a máscara com todos os bits a 0
	if (pos == MAX_POS)
		mask = 0; // Representa 32 bits a 0
	else
		mask <<= pos + 1; // Realiza todos os shifts necessários à esquerda, para obter a máscara a utilizar
	
	int result = b & mask;
	
	mask = ~mask; // Negação dos bits da máscara, para que agora seja aplicada de forma a retirar a quantidade de bits contrária dos que foram retirados da variável b

	result += a & mask; // Soma os dois valores ficando assim com a junção dos bits desejados
	
	return result;

}
