#define TOTAL_BITS 32 						// Constante que representa o total de bits de um número inteiro

int activate_bits(int a, int left, int right) {
	int i;
	
	for(i = left + 1; i < TOTAL_BITS; i++) {  		// Percorre os bits de a à esquerda (excluindo) até ao último bit
		a |= 1 << i;					// Ativa o bit i de a se este não estiver ativo
	}
	
	for(i = 0; i < right; i++) {				// Percorre os bits de a do primeiro até ao bit da direita (excluindo)
		a |= 1 << i;		    			// Ativa o bit i de a se este não estiver ativo
	}
	
	return a;			    			// Retorna o novo valor de a
}
