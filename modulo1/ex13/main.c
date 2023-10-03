/* Ficheiro principal para a resolução do exercício 13 do módulo 1 */

#include <stdio.h>
#include "where_is.h"
#include "print_array.h"

#define LENGTH_ONE 5
#define LENGTH_TWO 30
#define LENGTH_THREE 19

int main() {

	char str_one[] = "arqcp";
	int str_index_one[LENGTH_ONE];
	
	char str_two[] = "Teste ao numero de caracteres.";
	int str_index_two[LENGTH_TWO];
	
	char str_three[] = "Exercicio numero 13";
	int str_index_three[LENGTH_THREE];

	char char_one = 'a';
	int count_one = where_is(str_one, char_one, str_index_one);
	printf("Número de caracteres \'%c\' na frase \"%s\": %d\n", char_one, str_one, count_one);
	printf("As posições do vetor onde foi encontrado o caracter \'%c\' foram: \n", char_one);
	print_array(str_index_one, count_one);
	
	printf("\n");

	char char_two = 'e';
	int count_two = where_is(str_two, char_two, str_index_two);
	printf("Número de caracteres \'%c\' na frase \"%s\": %d\n", char_two, str_two, count_two);
	printf("As posições do vetor onde foi encontrado o caracter \'%c\' foram: \n", char_two);
	print_array(str_index_two, count_two);

	printf("\n");

	char char_three = 'c';
	int count_three = where_is(str_three, char_three, str_index_three);
	printf("Número de caracteres \'%c\' na frase \"%s\": %d\n", char_three, str_three, count_three);
	printf("As posições do vetor onde foi encontrado o caracter \'%c\' foram: \n", char_three);
	print_array(str_index_three, count_three);

	return 0;

}
