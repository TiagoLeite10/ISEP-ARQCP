#define MASK 0xFFFFFF00					// Constante que representa a máscara para "limpar" o primeiro byte

/*
 * Função para adicionar x ao primeiro byte de cada elemento de vec1 e 
 * armazenar o resultado em vec2. Todos os outros bytes permanecem inalterados.
 * A função recebe como parâmetro os endereços de dois vetores, vec1 e vec2 e um byte x.
*/
void add_byte(char x, int *vec1, int *vec2) {	
	int size = *vec1;				// Coloca o valor atual de vec1 na variável size que representa o número de inteiros do vetor
	*vec2 = *vec1;					// Coloca o valor atual de vec1 em vec2
	
	for (int i = 0; i < size; i++) {
		vec1++;					// Avança uma posição no apontador do vetor vec1
		vec2++;					// Avança uma posição no apontador do vetor vec2
		
		*vec2 = *vec1;				// Coloca o valor atual de vec1 em vec2
		*vec2 &= MASK;				// Realiza a operação and entre o valor atual de vec2 e a máscara para "limpar" o primeiro byte
		
		char byteVec1 = (char) *vec1;		// Pega no primeiro byte de vec1
        *vec2 |= (byteVec1 + x);			// Soma o primeiro byte de vec1 com x e adiciona ao byte do valor atual de vec2
	}
	
}
