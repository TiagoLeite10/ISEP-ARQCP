/* Ficheiro principal para a resolução do exercício 04 do módulo 5 */
#include <stdio.h>
#include "fill_student.h"
#define VEC_SIZE 6 // Tamanho do array de estruturas do tipo Student

int main() {

	Student vec[VEC_SIZE];
	Student *s = vec;

	fill_student(s, 37, 1, "Cristiano Ronaldo, The Best", "Teste para passar o limite de caracteres da estrutura: Ate aqui aparece mas a partir daqui ja nao aparece!!!!!");
	printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n\n", s->name, s->age, s->number, s->address);
    
	s++;
	fill_student(s, 21, 250, "Gonçalo Ramos", "Rua da fruta nº43");
	printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n\n", s->name, s->age, s->number, s->address);

	s++;
	fill_student(s, 23, 500, "João Felix", "Rua da cereja nº33");
	printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n\n", s->name, s->age, s->number, s->address);

	s++;
	fill_student(s, 28, 750, "João Cancelo", "Rua da maçã nº21");
	printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n\n", s->name, s->age, s->number, s->address);

	s++;
	fill_student(s, 23, 1000, "Rafael Leão", "Rua da pêra nº83");
	printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n\n", s->name, s->age, s->number, s->address);

	s++;
	fill_student(s, 23, 1500, "Diogo Costa", "Rua do morango nº99");
	printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n", s->name, s->age, s->number, s->address);

	return 0;
}
