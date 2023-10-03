/* Função para copiar n inteiros de um array para outro. 
 * Recebe como parâmetro o endereço do array 1 e 2 e um 
 * número inteiro que indica o número de elementos a copiar. 
*/
void copy_vec(int *vec1, int *vec2, int n) {
	for (int i = 0; i < n; i++) {
		*(vec2 + i) = *(vec1 + i); 
	}	
}
