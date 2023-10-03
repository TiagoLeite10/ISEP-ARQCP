/* Ficheiro de cabeçalho para o ficheiro de código fill_student.c */
#ifndef FILL_STUDENT_H
#define FILL_STUDENT_H

typedef struct {
    short number;
    char age;
    int grades[5];
    char name[60];
    char address[100];
} Student;
    
void fill_student(Student *s, char age, short number, char *name, char *address);
#endif