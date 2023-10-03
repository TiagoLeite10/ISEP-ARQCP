# Makefile

# Variáveis
INCLUDES = vec_zero.h print_vec_int.h
SOURCES =  vec_zero.s print_vec_int.c main.c
OBJFILES = vec_zero.o print_vec_int.o main.o
EXEC = ex12

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
