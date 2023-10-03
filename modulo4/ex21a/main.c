/* Ficheiro principal para a resolução do exercício 21a do módulo 4 */
#include <stdio.h>
#include "distance.h"

void print_string_distance(char *a, char *b) {
	printf("String 1: %s\n", a);
	printf("String 2: %s\n", b);
	printf("Distância entre as duas strings: %d\n\n", distance(a, b));
}

int main(void) {
	char a[] = "abcde";
	char b[] = "abcde";	
	print_string_distance(a, b);
	
	char c[] = "abcde";
	char d[] = "edcba";	
	print_string_distance(c, d);
	
	char e[] = "abcde";
	char f[] = "abcdezfdg";	
	print_string_distance(e, f);
	
	return 0;
}

