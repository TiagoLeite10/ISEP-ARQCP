/* Função para somar todos os números ímpares presentes no array. 
 * Recebe como parâmetro o endereço do array. 
*/
int odd_sum(int *p) {
	// Variável para armazenar a soma de todos os números ímpares existentes no array.
	int sum = 0;

	// Variável para armazenar a primeira posição do array que contém o número de 
	// elementos existentes no array
	int n = *p;
	
	// Ciclo para percorrer todos os valores existentes no array com tamanho 
	// n e apontado por p
	for(int i = 1; i <= n; i++) {
		int num = *(p + i);

		// Se o resto da divisão por 2 do valor que se encontra na variável num for 
		// diferente de 0, então significa que este mesmo valor é ímpar.
		if (num % 2 != 0) {
			sum += num;
		}
	}	
	
	return sum;
}
