# Makefile

# Variáveis
INCLUDES = vec_add_two.h print_vec_int.h
SOURCES = vec_add_two.s print_vec_int.c main.c
OBJFILES = vec_add_two.o print_vec_int.o main.o
EXEC = ex04

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
