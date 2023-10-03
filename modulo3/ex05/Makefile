# Makefile

# Variáveis
INCLUDES = vec_sum.h vec_avg.h print_vec_long.h
SOURCES =  vec_sum.s vec_avg.s print_vec_long.c main.c
OBJFILES = vec_sum.o vec_avg.o print_vec_long.o main.o
EXEC = ex05

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
