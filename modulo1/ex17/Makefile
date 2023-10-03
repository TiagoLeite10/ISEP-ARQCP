# Makefile

# Variáveis
INCLUDES = swap.h print_array.h
SOURCES = swap.c print_array.c main.c
OBJFILES = swap.o print_array.o main.o
EXEC = ex17

# Regras para o sufixo
.SUFFIXES : .c .o

.c.o:
	gcc -Wall -g -c $<

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

clean:
	rm -f ${OBJFILES} ${EXEC}

run: ${EXEC}
	./${EXEC}

