# Makefile

# Variáveis
INCLUDES = add_matrixes.h new_matrix.h fill_matrix.h matrix_helper.h
SOURCES = add_matrixes.c new_matrix.c fill_matrix.c matrix_helper.c main.c
OBJFILES = add_matrixes.o new_matrix.o fill_matrix.o matrix_helper.o main.o
EXEC = ex14

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
