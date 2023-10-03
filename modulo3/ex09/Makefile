# Makefile

# Variáveis
INCLUDES = vec_search.h print_vec_short.h
SOURCES = vec_search.s print_vec_short.c main.c
OBJFILES = vec_search.o print_vec_short.o main.o
EXEC = ex09

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
