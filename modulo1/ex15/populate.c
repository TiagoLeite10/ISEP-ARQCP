#include "stdlib.h"

/* Função para gerar e guardar no array (vec) um dado número (num) de valores inteiros 
 * entre 0 e um dado limite (limit).
 * É passado como parâmetro um apontador para um array de inteiros onde os valores vão
 * ser armazenados, um número inteiro que representa o tamanho desse mesmo array, e 
 * um número inteiro que representa o limite superior que os números aleatórios podem ter.
 */
void populate(int *vec, int num, int limit) {

	for (int pos = 0; pos < num; pos++) {
		*(vec + pos) = rand() % limit;	
	}	

}
