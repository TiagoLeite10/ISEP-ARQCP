# Makefile

# Variáveis
INCLUDES = sum_first_byte.h print_vec_long.h
SOURCES =  sum_first_byte.s print_vec_long.c main.c
OBJFILES = sum_first_byte.o print_vec_long.o main.o
EXEC = ex15

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
