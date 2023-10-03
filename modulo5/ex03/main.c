/* Ficheiro principal para a resolução do exercício 3 do módulo 5 */
#include <stdio.h>
#include "fill_student.h"

int main() {

	Student vec[5];
    Student *s = vec;

    fill_student(s, 21, 250, "Gonçalo Ramos", "Rua da fruta nº43");
    printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n\n", s->name, s->age, s->number, s->address);

	s++;
	fill_student(s, 23, 500, "João Felix", "Rua da cereja nº33");
    printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n\n", s->name, s->age, s->number, s->address);

	s++;
	fill_student(s, 28, 750, "João Cancelo", "Rua da maça nº21");
    printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n\n", s->name, s->age, s->number, s->address);

	s++;
	fill_student(s, 23, 1000, "Rafael Leão", "Rua da pêra nº83");
    printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n\n", s->name, s->age, s->number, s->address);

	s++;
	fill_student(s, 23, 1500, "Diogo Costa", "Rua do morango nº99");
    printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n", s->name, s->age, s->number, s->address);

	return 0;
}
