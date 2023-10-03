/* Ficheiro principal para a resolução do exercício 21 do módulo 2 */
#include <stdio.h>
#include "new_salary.h"

short code = 0, currentSalary = 0;

int main(void) {
	
	code = 20;
	currentSalary = 300;
	printf("Código: %hd\n", code);
	printf("Salário: %hd\n", currentSalary);
	printf("Novo salário: %d\n\n", new_salary());
	
	code = 21;
	currentSalary = 250;
	printf("Código: %hd\n", code);
	printf("Salário: %hd\n", currentSalary);
	printf("Novo salário: %d\n\n", new_salary());
	
	code = 22;
	currentSalary = 175;
	printf("Código: %hd\n", code);
	printf("Salário: %hd\n", currentSalary);
	printf("Novo salário: %d\n\n", new_salary());
	
	code = 30;
	currentSalary = 500;
	printf("Código: %hd\n", code);
	printf("Salário: %hd\n", currentSalary);
	printf("Novo salário: %d\n", new_salary());
	
	return 0;
}
