# Makefile

# Variáveis
INCLUDES = sum_and_subtract.h
SOURCES = sum_and_subtract.s main.c
OBJFILES = sum_and_subtract.o main.o
EXEC = ex09

# Regras para o sufixo
.SUFFIXES : .c .s .o

.s.o .c.o:
	gcc -Wall -g -c $<

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

clean:
	rm -f ${OBJFILES} ${EXEC}

run: ${EXEC}
	valgrind ./${EXEC}
