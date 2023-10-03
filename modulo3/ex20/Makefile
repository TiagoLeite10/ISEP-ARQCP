# Makefile

# Variáveis
INCLUDES = count_max.h print_vec_int.h
SOURCES = count_max.s print_vec_int.c main.c
OBJFILES = count_max.o print_vec_int.o main.o
EXEC = ex20

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
