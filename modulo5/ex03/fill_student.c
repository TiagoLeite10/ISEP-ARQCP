#include "fill_student.h"
#include <string.h>

/* Função para guardar a idade, número, nome e morada de um aluno nos campos de uma estrutura cujo endereço é dado em s. */
void fill_student(Student *s, char age, short number, char *name, char *address)  {
	s->age = age;
	s->number = number;
    strcpy(s->name, name);
    strcpy(s->address, address);
}