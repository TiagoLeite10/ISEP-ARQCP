/* Ficheiro com as funções do exercícios 22 do módulo 2 implementas em C */
int i = 0; // Variável global
int j = 0; // Variável global

int f_in_c() {

	int h = 0;
	
	if (i == j)
		h = i - j + 1;
	else
		h = i + j - 1;
	return h;
}

int f2_in_c() {
	
	if (i > j)
		i = i - 1;
	else
		j = j + 1;

	int h = j * i;

	return h;
}

int f3_in_c() {

	int h = 0;
	int g = 0;

	if (i >= j) {
		h = i * j;
		g = i + 1;
	} else {
		h = i + j;
		g = i + j + 2;
	}

	int r = g / h;

	return r;

}

int f4_in_c() {
	
	int h = 0;

	if (i + j < 10)
		h = 4 * i * i;
	else
		h = j * j / 3;

	return h;

}
