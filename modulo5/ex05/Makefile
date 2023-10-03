# Makefile

# Variáveis
INCLUDES = fill_student.h update_address.h update_grades.h
SOURCES = fill_student.c update_address.s update_grades.s main.c
OBJFILES = fill_student.o update_address.o update_grades.o main.o
EXEC = ex05

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
