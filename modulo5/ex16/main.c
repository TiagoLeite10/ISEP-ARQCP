/* Ficheiro principal para a resolução do exercício 16 do módulo 5 */
#include <stdio.h>
#include <stdlib.h>
#include "group.h"
#include "approved_semester.h"
#include "count_bits_one.h"
#include "print_bits.h"

void create_and_print_information(group *g_ptr, int num_students, unsigned short *students_approves) {
	unsigned short *array = (unsigned short*)calloc(num_students, sizeof(short));
	
	printf("Total de alunos: %d\n", num_students);
	printf("O aluno para passar precisa de ter conseguido realizar no mínimo 10 cadeiras!\n");
	printf("Número de cadeiras realizadas pelo aluno, num total de 16 (1 significa aprovado e 0 não aprovado à cadeira):\n");

	for (int student = 0; student < num_students; student++) {
		unsigned short actual_student_approves = *(students_approves + student);
		*(array + student) = actual_student_approves;
		printf("\nAluno %d:\n", student + 1);
		print_bits(actual_student_approves);
	}

	g_ptr->n_students = num_students;
	g_ptr->individual_grades = array;

	printf("\nNúmero de alunos aprovados: %d\n", approved_semester(g_ptr));
	free(array);	
}

int main() {

	group g;
	group *g_ptr;
	g_ptr = &g;
	
	create_and_print_information(g_ptr, 0, (unsigned short[]){0});

	printf("\n----- -----\n\n");

	create_and_print_information(g_ptr, 1, (unsigned short[]){0xff11});

	printf("\n----- -----\n\n");

	create_and_print_information(g_ptr, 4, (unsigned short[]){0x21ff, 0b10000000, 0x7771, 0});
	
	printf("\n----- -----\n\n");

	create_and_print_information(g_ptr, 6, (unsigned short[]){0x7777, 0x8888, 0xeeee, 0x1f1f, 0, 15});

	return 0;

}
