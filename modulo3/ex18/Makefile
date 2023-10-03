# Makefile

# Variáveis
INCLUDES = sort_without_reps.h print_vec_short.h
SOURCES = sort_without_reps.s print_vec_short.c main.c
OBJFILES = sort_without_reps.o print_vec_short.o main.o
EXEC = ex18

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
