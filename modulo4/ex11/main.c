/* Ficheiro principal para a resolução do exercício 11 do módulo 4 */
#include <stdio.h>
#include "call_proc.h"

void printf_call_proc(int a, int b, short c, char d) {
	printf("x1: %d\n", a);
	printf("x2: %d\n", b);
	printf("x3: %d\n", c);
	printf("x4: %d\n", d);

	printf("Resultado final: %d\n", call_proc(a, b, c, d));
}

int main(void) {
	int a = 1; 
	int b = 1;
	short c = 1;
	char d = 1;
	
	printf_call_proc(a, b, c, d);
	
	a = 0; 
	b = 1;
	c = 0;
	d = 0;	
	printf("\n");
	printf_call_proc(a, b, c, d);
	
	a = 1; 
	b = 7;
	c = 10;
	d = 15;	
	printf("\n");
	printf_call_proc(a, b, c, d);
	
	a = 13; 
	b = 9;
	c = 30;
	d = 1;	
	printf("\n");
	printf_call_proc(a, b, c, d);
	
	return 0;
}

