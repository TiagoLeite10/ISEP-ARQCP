/* Ficheiro principal para a resolução do exercício 19 do módulo 2 */
#include <stdio.h>
#include "needed_time.h"

char current = 0, desired = 0;

int main(void) {	

	printf("Temperatura atual: %d\n", current);
	printf("Temperatura desejada: %d\n", desired);
	printf("Tempo necessário: %d segundos\n\n", needed_time());
	
	current = 20;
	desired = 25;
	printf("Temperatura atual: %d\n", current);
	printf("Temperatura desejada: %d\n", desired);
	printf("Tempo necessário: %d segundos\n\n", needed_time());
	
	current = 15;
	desired = 5;
	printf("Temperatura atual: %d\n", current);
	printf("Temperatura desejada: %d\n", desired);
	printf("Tempo necessário: %d segundos\n", needed_time());

	return 0;
}
