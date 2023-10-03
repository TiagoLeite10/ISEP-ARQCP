/* Função para calcular a potência de um número. Recebe como parâmetro o endereço da base e o seu expoente. */
void power_ref(int* x, int y) {
	int power = 1;

	// Verifica se o expoente é maior que 0
	if(y > 0){
		// Calcular a potência do número
		for(int i = 0; i < y; i++){
			power = power * (*x);
		}
	// Verifica se o expoente é menor que 0
	} else if(y < 0) {
		// Calcular a potência do número
		for(int i = 0; i > y; i--){
			power = power / (*x);
		}
	}
	
	*x = power;
}
