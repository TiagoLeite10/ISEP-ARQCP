/*
 * Função para somar todos os números pares presentes no array.
 * Recebe como parâmetro o endereço do array e um número inteiro que indica o número 
 * de elementos existentes no array.
 * Retorna a soma de todos os números pares existentes no array.
 */
int sum_even(int *p, int num) {

	// Variável para armazenar a soma de todos os números pares existentes
	// no array.
	int sum = 0;
	
	// Ciclo para percorrer todos os valores existentes no array com tamanho 
	// num e apontado por p
	for (int i = 0; i < num; i++) {
		// Se o resto da divisão por 2 do valor que se encontra na posição 
		// i do array for 0, então significa que este mesmo valor é par.
		if (p[i] % 2 == 0) {
			sum += p[i];	
		}
	}

	return sum;
}
