/* Ficheiro principal para a resolução do exercício 22 do módulo 2 */
#include <stdio.h>
#include "functions_in_c.h"
#include "functions_in_assembly.h"

int main() {
	
	printf("----- Função f -----\n");
	printf("Caso que entra no then\n");
	
	i = 2;
	j = 2;
	
	int result_in_c = f_in_c();
	int result_in_assembly = f_in_assembly();
	
	printf("Valor de i: %d\n", i);
	printf("Valor de j: %d\n", j);
	printf("Resultado da função f em C: %d\n", result_in_c);
	printf("Resultado da função f em Assembly: %d\n", result_in_assembly);
	
	printf("\n");

	printf("Caso que entra no else\n");
	i = 2;
	j = 3;
	printf("Valor de i: %d\n", i);
	printf("Valor de j: %d\n", j);
	result_in_c = f_in_c();
	result_in_assembly = f_in_assembly();
	printf("Resultado da função f em C: %d\n", result_in_c);
	printf("Resultado da função f em Assembly: %d\n", result_in_assembly);
	
	printf("--------------------\n\n");

	printf("----- Função f2 -----\n");
	printf("Caso que entra no then\n");
	i = 3;
	j = 2;
	printf("Valor de i: %d\n", i);
	printf("Valor de j: %d\n", j);
	result_in_c = f2_in_c();
	
	i = 3;
	j = 2;
	result_in_assembly = f2_in_assembly();
	printf("Resultado da função f2 em C: %d\n", result_in_c);
	printf("Resultado da função f2 em Assembly: %d\n", result_in_assembly);

	printf("\n");

	printf("Caso que entra no else\n");
	i = 3;
	j = 3;
	printf("Valor de i: %d\n", i);
	printf("Valor de j: %d\n", j);
	result_in_c = f2_in_c();
	
	i = 3;
	j = 3;
	result_in_assembly = f2_in_assembly();
	printf("Resultado da função f2 em C: %d\n", result_in_c);
	printf("Resultado da função f2 em Assembly: %d\n", result_in_assembly);

	printf("--------------------\n\n");

	printf("----- Função f3 -----\n");
	printf("Caso que entra no then\n");
	i = 4;
	j = 2;
	printf("Valor de i: %d\n", i);
	printf("Valor de j: %d\n", j);
	result_in_c = f3_in_c();
	result_in_assembly = f3_in_assembly();
	printf("Resultado da função f3 em C: %d\n", result_in_c);
	printf("Resultado da função f3 em Assembly: %d\n", result_in_assembly);

	printf("\n");

	printf("Caso que entra no else\n");
	i = 2;
	j = 3;
	printf("Valor de i: %d\n", i);
	printf("Valor de j: %d\n", j);
	result_in_c = f3_in_c();
	result_in_assembly = f3_in_assembly();
	printf("Resultado da função f3 em C: %d\n", result_in_c);
	printf("Resultado da função f3 em Assembly: %d\n", result_in_assembly);

	printf("--------------------\n\n");

	printf("----- Função f4 -----\n");
	printf("Caso que entra no then\n");
	i = 5;
	j = 4;
	printf("Valor de i: %d\n", i);
	printf("Valor de j: %d\n", j);
	result_in_c = f4_in_c();
	result_in_assembly = f4_in_assembly();
	printf("Resultado da função f4 em C: %d\n", result_in_c);
	printf("Resultado da função f4 em Assembly: %d\n", result_in_assembly);
	
	printf("\n");

	printf("Caso que entra no else\n");
	i = 5;
	j = 6;
	printf("Valor de i: %d\n", i);
	printf("Valor de j: %d\n", j);
	result_in_c = f4_in_c();
	result_in_assembly = f4_in_assembly();
	printf("Resultado da função f4 em C: %d\n", result_in_c);
	printf("Resultado da função f4 em Assembly: %d\n", result_in_assembly);
	
	printf("--------------------\n\n");

	return 0;

}
