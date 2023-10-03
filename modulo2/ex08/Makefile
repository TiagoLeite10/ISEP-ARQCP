# Makefile

# Variáveis
INCLUDES = crossSumBytes.h
SOURCES = crossSumBytes.s main.c
OBJFILES = crossSumBytes.o main.o
EXEC = ex08

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
