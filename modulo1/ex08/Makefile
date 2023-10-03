# Makefile

# Variáveis
INCLUDES = array_sort2.h print_array.h
SOURCES = array_sort2.c print_array.c main.c
OBJFILES = array_sort2.o print_array.o main.o
EXEC = ex08

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

