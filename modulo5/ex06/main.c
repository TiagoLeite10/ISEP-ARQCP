/* Ficheiro principal para a resolução do exercício 5 do módulo 5 */
#include <stdio.h>
#include "fill_student.h"
#include "update_grades.h"
#include "locate_greater.h"

#define VEC_SIZE 6 // Tamanho do array de estruturas do tipo Student
#define GRADES_SIZE 5 // Tamanho do array das notas

void print_info_array_of_ints(int *values, int size) {

	for(int i = 0; i < size; i++) {
		printf("%d ", *values);
		values++;
	}

	printf("\n");
}

void print_info_student(Student *s, int minimum, int *new_grades, int num_new_grades) {
	printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n", s->name, s->age, s->number, s->address);
	
	printf("Notas: ");
	print_info_array_of_ints(s->grades, GRADES_SIZE);

	printf("Este estudante tem %d notas maiores do que a nota mínima de %d, sendo estas as seguintes: ", num_new_grades, minimum);
	print_info_array_of_ints(new_grades, num_new_grades);

	printf("\n\n");
}

int main() {
	Student vec[VEC_SIZE];
	Student *s = vec;
	
	int minimum = 19;
	int new_grades_one[5] = {0};
	int num_satisfied_grades = 0;

	// Aluno 1
	fill_student(s, 37, 1, "Cristiano Ronaldo, The Best", "Teste para passar o limite de caracteres da estrutura: Ate aqui aparece mas a partir daqui ja nao aparece!!!!!");
	int grades1[GRADES_SIZE] = {20, 20, 20, 20, 20};  
    
	update_grades(s, grades1);
	num_satisfied_grades = locate_greater(s, minimum, new_grades_one);
	print_info_student(s, minimum, new_grades_one, num_satisfied_grades);

	printf("----- -----\n\n");
    
	// Aluno 2
	int new_grades_two[5] = {0};
	minimum = 18;

	s++;
	fill_student(s, 21, 250, "Gonçalo Ramos", "Rua da fruta nº43");
	int grades2[GRADES_SIZE] = {15, 12, 11, 18, 19};

	update_grades(s, grades2);
	num_satisfied_grades = locate_greater(s, minimum, new_grades_two);
	print_info_student(s, minimum, new_grades_two, num_satisfied_grades);

	printf("----- -----\n\n");

	// Aluno 3
	int new_grades_three[5] = {0};
	minimum = 20;

	s++;
	fill_student(s, 23, 500, "João Felix", "Rua da cereja nº33");
	int grades3[GRADES_SIZE] = {10, 10, 18, 17, 20};

	update_grades(s, grades3);
	num_satisfied_grades = locate_greater(s, minimum, new_grades_three);
	print_info_student(s, minimum, new_grades_three, num_satisfied_grades);

	printf("----- -----\n\n");

	// Aluno 4
	int new_grades_four[5] = {0};
	minimum = 15;

	s++;
	fill_student(s, 28, 750, "João Cancelo", "Rua da maçã nº21");
	int grades4[GRADES_SIZE] = {18, 10, 13, 14, 20};

	update_grades(s, grades4);
	num_satisfied_grades = locate_greater(s, minimum, new_grades_four);
	print_info_student(s, minimum, new_grades_four, num_satisfied_grades);

	printf("----- -----\n\n");

	// Aluno 5
	int new_grades_five[5] = {0};
	minimum = 10;

	s++;
	fill_student(s, 23, 1000, "Rafael Leão", "Rua da pêra nº83");
	int grades5[GRADES_SIZE] = {8, 4, 13, 16, 19};

	update_grades(s, grades5);
	num_satisfied_grades = locate_greater(s, minimum, new_grades_five);
	print_info_student(s, minimum, new_grades_five, num_satisfied_grades);

	printf("----- -----\n\n");

	// Aluno 6
	int new_grades_six[5] = {0};
	minimum = -3;

	s++;
	fill_student(s, 23, 1500, "Diogo Costa", "Rua do morango nº99");
	int grades6[GRADES_SIZE]= {15, 10, 20, 16, 12};

	update_grades(s, grades6);
	num_satisfied_grades = locate_greater(s, minimum, new_grades_six);
	print_info_student(s, minimum, new_grades_six, num_satisfied_grades);
        
	return 0;
}
