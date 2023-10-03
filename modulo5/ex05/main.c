/* Ficheiro principal para a resolução do exercício 5 do módulo 5 */
#include <stdio.h>
#include "fill_student.h"
#include "update_grades.h"

#define VEC_SIZE 6 // Tamanho do array de estruturas do tipo Student
#define GRADES_SIZE 5 // Tamanho do array das notas

void print_info_student(Student *s) {
	printf("Nome: %s\nIdade: %d\nNúmero: %d\nMorada: %s\n", s->name, s->age, s->number, s->address);
	
	printf("Notas: ");
    for(int i = 0; i < GRADES_SIZE; i++){
		printf("%d ", s->grades[i]);
    }
    printf("\n\n");
}

int main() {
	Student vec[VEC_SIZE];
	Student *s = vec;

	// Aluno 1
	fill_student(s, 37, 1, "Cristiano Ronaldo, The Best", "Teste para passar o limite de caracteres da estrutura: Ate aqui aparece mas a partir daqui ja nao aparece!!!!!");
	int grades1[GRADES_SIZE] = {20, 20, 20, 20, 20};  
    
    update_grades(s, grades1);
    print_info_student(s);
    
    // Aluno 2
	s++;
	fill_student(s, 21, 250, "Gonçalo Ramos", "Rua da fruta nº43");
	int grades2[GRADES_SIZE] = {15, 12, 11, 18, 19};    
    update_grades(s, grades2);
    
    print_info_student(s);

    // Aluno 3
	s++;
	fill_student(s, 23, 500, "João Felix", "Rua da cereja nº33");
	int grades3[GRADES_SIZE] = {10, 10, 18, 17, 20};    
    update_grades(s, grades3);
    
    print_info_student(s);

    // Aluno 4
	s++;
	fill_student(s, 28, 750, "João Cancelo", "Rua da maçã nº21");
	int grades4[GRADES_SIZE] = {18, 10, 13, 14, 20};   
    update_grades(s, grades4);
    
    print_info_student(s);

    // Aluno 5
	s++;
	fill_student(s, 23, 1000, "Rafael Leão", "Rua da pêra nº83");
	int grades5[GRADES_SIZE] = {8, 4, 13, 16, 19};    
    update_grades(s, grades5);
    
    print_info_student(s);

    // Aluno 6
	s++;
	fill_student(s, 23, 1500, "Diogo Costa", "Rua do morango nº99");
	int grades6[GRADES_SIZE]= {15, 10, 20, 16, 12};    
    update_grades(s, grades6);
    
    print_info_student(s);
        
	return 0;
}
