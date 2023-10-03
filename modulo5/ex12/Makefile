# Makefile

# Variáveis
INCLUDES = new_matrix.h find_matrix.h fill_matrix.h matrix_helper.h
SOURCES = new_matrix.c find_matrix.c fill_matrix.c matrix_helper.c main.c
OBJFILES = new_matrix.o find_matrix.o fill_matrix.o matrix_helper.o main.o
EXEC = ex12

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
