/* Ficheiro de cabeçalho que contem a definição da estrutura student */
#ifndef STUDENT_H
#define STUDENT_H
	typedef struct {
		short number;
		char age;
		int grades[5];
		char name[60];
		char address[100];
	} Student;
#endif
