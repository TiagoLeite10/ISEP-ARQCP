/* Função para preecher um array com a frequência absoluta da parte inteira das notas. 
 * Recebe como parâmetro o endereço do array com as notas do exame dos alunos, um número 
 * inteiro que indica o número de elementos existentes nesse array e o endereço do array 
 * para ser preenchido a frequência absoluta da parte inteira das notas. 
*/
void frequencies(float *grades, int n, int *freq) {
	// Ciclo que percorre todo o array das notas
	for (int i = 0; i < n; i++) {
		// Variável que armazena a nota atual
		int grade = *(grades + i);		

		// No ponteiro do array das freqûencia é somado o valor da nota para avançar x bytes
		// (valor da nota * 4 bytes correspondente ao int) e somado + 1
		*(freq + grade) += 1;
	}
}
