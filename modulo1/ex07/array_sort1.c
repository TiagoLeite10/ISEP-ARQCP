/* Função para ordenar um array de inteiros de forma crescente. 
 * Recebe como parâmetro o endereço do array e um número inteiro que indica o número de 
 * elementos existentes no array. 
 */

void array_sort1(int *vec, int n) {

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j <  n; j++) {
			if (vec[i] > vec[j]) {
				int temp = vec[i];
				vec[i] = vec[j];
				vec[j] = temp;
			}
		}
	}
	
}
