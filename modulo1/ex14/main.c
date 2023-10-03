/* Ficheiro principal para a resolução do exercício 14 do módulo 1 */
#include <stdio.h>
#include "frequencies.h"
#include "default_print_freq.h"

int main() {
	float grades[] = {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0, 12.67, 16.23, 18.75};
	int n = sizeof(grades) / sizeof(grades[0]);
	int freq[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0};
	
	frequencies(grades, n, freq);
	
	printf("Frequência absoluta das notas: ");
	int n_freq = sizeof(freq) / sizeof(freq[0]);
	default_print_freq(freq, n_freq);
	
	return 0;
}
