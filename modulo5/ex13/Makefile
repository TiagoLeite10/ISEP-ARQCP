# Makefile

# Variáveis
INCLUDES = count_odd_matrix.h new_matrix.h matrix_helper.h fill_matrix.h
SOURCES = count_odd_matrix.s new_matrix.c matrix_helper.c fill_matrix.c main.c
OBJFILES = count_odd_matrix.o new_matrix.o matrix_helper.o fill_matrix.o main.o
EXEC = ex13

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
