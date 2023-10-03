/* Ficheiro principal para a resolução do exercício 17 do módulo 2 */
#include <stdio.h>
#include "calculator.h"

int num1 = 0, num2 = 0;

int main(void) {
	
	num1 = 12;
	num2 = 4;
	
	//num1 + num2	
	printf("Soma: %d + %d = %d\n", num1, num2, sum());
	
	//num1 - num2	
	printf("Subtração: %d - %d = %d\n", num1, num2, subtraction());

	//num1 * num2
	printf("Multiplicação: %d * %d = %d\n", num1, num2, multiplication());
	
	//num1 / num2
	printf("Divisão: %d / %d = %d\n", num1, num2, division());
	
	//num1 % num2
	printf("Módulo: %d %% %d = %d\n", num1, num2, modulus());
	
	//num1 ^ 2
	printf("Potência de 2: %d ^ 2 = %d\n", num1, powerOfTwo());
	
	//num1 ^ 3
	printf("Potência de 3: %d ^ 3 = %d\n", num1, powerOfThree());
	
	return 0;
}
