/*
 * Função para detectar a distância entre duas strings. Se as strings forem iguais, 
 * a função deve retornar 0. Se as strings diferirem em n caracteres, a distância será n. 
 * Se as strings não tiverem o mesmo comprimento, a distância deve ser -1.
 * A função recebe como parâmetro dois apontadores para dois arrays de chars.
*/
int distance(char *a, char *b) {
	int distance = 0;				// Contador da distância entre as duas strings	
	
	while (*a != '\0' && *b != '\0') {		// Ciclo que percorre as duas strings simultaneamente

		if (*a != *b) {				// Verifica-se se o caracter apontado atualmente por a é diferente do caracter apontado atualmente por b
			distance++;
		}
		
		a++;					// Avança uma posição no apontador da string a
		b++;					// Avança uma posição no apontador da string b
	}
	
	if (*a != '\0' || *b != '\0') {			// Caso alguma das duas string ainda não chegou ao fim, é colocado o valor -1 na variável distance devido às strings possuirem diferentes tamanhos
		distance = -1;	
	}	
	
	return distance;				// Retornado a distância entre as duas strings
}
