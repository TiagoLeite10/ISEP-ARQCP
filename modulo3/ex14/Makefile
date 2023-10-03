# Makefile

# Variáveis
INCLUDES = exists.h vec_diff.h print_vec_int.h
SOURCES = exists.s vec_diff.s print_vec_int.c main.c
OBJFILES = exists.o vec_diff.o print_vec_int.o main.o
EXEC = ex14

# Regras para o sufixo
.SUFFIXES : .c .s .o

.s.o .c.o:
	gcc -Wall -g -c $<

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

clean:
	rm -f ${OBJFILES} ${EXEC}

run: ${EXEC}
	valgrind ./${EXEC}
