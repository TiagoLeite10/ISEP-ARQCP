# Makefile

# Variáveis
INCLUDES = where_is.h print_array.h
SOURCES = where_is.c print_array.c main.c
OBJFILES = where_is.o print_array.o main.o
EXEC = ex13

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

