/* Ficheiro principal para a resolução do exercício 15 do módulo 5 */
#include <stdio.h>
#include "stack.h"

int main() {
	long value = 25;
	
	printf("-------------------Push de %ld-------------------\n", value);	
	push(value);
	print_stack();
	
	value = 45;	
	printf("-------------------Push de %ld-------------------\n", value);	
	push(value);
	print_stack();
	
	value = 75;	
	printf("-------------------Push de %ld-------------------\n", value);	
	push(value);
	print_stack();
	

	long result = pop();
	printf("-------------------Pop de %ld-------------------\n", result);	
	print_stack();
	
	result = pop();
	printf("-------------------Pop de %ld-------------------\n", result);	
	print_stack();
	
	result = pop();
	printf("-------------------Pop de %ld-------------------\n", result);	
	print_stack();
  
  return 0;
}
