# Makefile

# Variáveis
INCLUDES = swap.h print_vec_char.h
SOURCES = swap.s print_vec_char.c main.c
OBJFILES = swap.o print_vec_char.o main.o
EXEC = ex16

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
