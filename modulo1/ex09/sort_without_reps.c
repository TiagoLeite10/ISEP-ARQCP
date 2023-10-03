#include "array_sort2.h"

/* Função para copiar os valores de um array para outro array vazio sem copiar os valores 
 * repetidos. Após realizar esta copia, ordena o array de forma crescente.
 * Recebe como parâmetro o array com os valores originais, o tamanho desse mesmo array
 * e o array no qual será armazenado os valores necessários.
 * Esta função devolve também o número de valores inseridos no novo array.
 */
int sort_without_reps(int *src, int n, int *dest) {
	
	// Variável para contar o número de valores inseridos no novo array.
	int count = 0;

	// Ciclo para percorrer todos os valores do array original
	for (int original_pos = 0; original_pos< n; original_pos++) {
		// Irá ser utilizada para percorrer todas as posições do novo array	
		int new_array_pos = 0;
		// Variável para perceber se um dado valor já existe no array
		char exists = 0;

		// Ciclo para percorrer todos os valores já armazenados no novo array
		while (new_array_pos < count && !exists) {
			// Verifica se o valor no índice original_pos do array original já 
			// se encontra na posição new_array_pos do novo array
			if (*(src + original_pos) == *(dest + new_array_pos)) {
				exists = 1;
			}

			new_array_pos++;
		}
		
		// Se o valor não existir no novo array
		if (!exists) {
			*(dest + count) = *(src + original_pos);
			count++;
		}

	}

	// Realiza a ordenação do novo array que já não contém valores repetidos
	array_sort2(dest, count);

	return count;

}

/*	
Solução aparentemente mais eficiente, mas com problemas nos testes. Ignorar.
Desvantagem de ordenar o array original.
	array_sort2(src, n);

	for (int i = 0; i < n; i++) {
		if ( i == 0 || ((i - 1) > 0 && *(src + i) != *(dest +count-1))) {
			*(dest + count) = *(src + i);
			count++;
		}
	}
	
*/
