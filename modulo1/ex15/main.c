/* Ficheiro principal para a resolução do exercício 15 do módulo 1 */

#include <stdio.h>
#include "populate.h"
#include "check.h"
#include "inc_nsets.h"
#include "print_array.h"

// Constante que representa o tamanho do array
#define LENGTH 100
// Constante que representa o número limite num intervalo aberto
// [0;OPEN_LIMIT[ para os valores a serem gerados.
#define OPEN_LIMIT 21

int main() {

	int vec[LENGTH];
	populate(vec, LENGTH, OPEN_LIMIT);
	
	printf("O array contem os seguintes %d elementos gerados aleatóriamente no intervalo ]0, %d[:\n", LENGTH, OPEN_LIMIT);

	print_array(vec, LENGTH);

	// Percorrer o array todo até chegar à antepenúltima posição do array
	// para descobrir todos os sets existentes que satisfazem a condição
	// Vi < Vi+1 < Vi+2
	for (int pos = 0; pos < LENGTH - 2; pos++) {
		if (check(*(vec + pos), *(vec + pos + 1), *(vec + pos + 2))) {
			inc_nsets();
		}
	}

	printf("\n");

	printf("Existem %d sets que satisfazem a condição Vi < Vi + 1 < Vi + 2!\n", number_of_sets);

	return 0;

}
