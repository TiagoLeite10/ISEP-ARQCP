# Makefile

# Variáveis
INCLUDES = test_even.h vec_sum_even.h print_vec_long.h
SOURCES =  test_even.s vec_sum_even.s print_vec_long.c main.c
OBJFILES = test_even.o vec_sum_even.o print_vec_long.o main.o
EXEC = ex08

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
