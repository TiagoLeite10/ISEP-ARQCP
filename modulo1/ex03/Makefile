# Makefile

# Variáveis
INCLUDES = sum_even.h
SOURCES = sum_even.c main.c
OBJFILES = sum_even.o main.o
EXEC = ex03

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
