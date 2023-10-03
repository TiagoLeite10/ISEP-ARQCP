# Makefile

# Variáveis
INCLUDES = fill_student.h update_address.h update_grades.h locate_greater.h
SOURCES = fill_student.c update_address.s update_grades.s locate_greater.s main.c
OBJFILES = fill_student.o update_address.o update_grades.o locate_greater.o main.o
EXEC = ex06

# Regras para o sufixo
.SUFFIXES : .s .c .o

.s.o .c.o:
	gcc -Wall -g -c $<

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

clean:
	rm -f ${OBJFILES} ${EXEC}

run: ${EXEC}
	valgrind ./${EXEC}
