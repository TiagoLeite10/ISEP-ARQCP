/* Função para trocar os valores entre dois arrays de inteiros com um dado tamanho igual.
 * Recebe como parâmetro um apontador para um array de inteiros, recebe outro apontador
 * para outro array diferente de inteiros e recebe um inteiro com o tamanho que tem os 
 * dois arrays.
 */
void swap(int* vec1, int* vec2, int size) {
	// Percorrer todo o tamanho dos arrays
	for (int pos = 0; pos < size; pos++) {
		int temp = *(vec1 + pos);
		*(vec1 + pos) = *(vec2 + pos);
		*(vec2 + pos) = temp;
	}

}
