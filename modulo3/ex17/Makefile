# Makefile

# Variáveis
INCLUDES = array_sort.h print_vec_short.h
SOURCES =  array_sort.s print_vec_short.c main.c
OBJFILES = array_sort.o print_vec_short.o main.o
EXEC = ex17

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
