# Makefile

# Variáveis
INCLUDES = populate.h check.h inc_nsets.h print_array.h
SOURCES = populate.c check.c inc_nsets.c print_array.c main.c
OBJFILES = populate.o check.o inc_nsets.o print_array.o main.o
EXEC = ex15

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

