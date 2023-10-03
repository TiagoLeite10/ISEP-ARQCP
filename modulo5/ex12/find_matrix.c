/*
 * Função para procurar o número recebido por parâmetro (num) numa matriz de y x k apontada por
 * m.
 *
 * m -> Apontador para a matriz com tamanho y x k
 * y -> O número de linhas que existem na matriz
 * k -> O número de colunas que existem em cada linha da matriz
 * num -> O número a ser procurado na matriz m
 */
int find_matrix(int **m, int y, int k, int num) {

	int exists = 0;
	
	int row = 0;
	while (exists != 1 && row < y) {
		int column = 0;
		while (exists != 1 && column < k) {
			if ( *(*(m + row) + column) == num )
				exists = 1;

			column++;
		}
		row++;
	}

	return exists;

}
