# Makefile

# Variáveis
INCLUDES = isMultiple.h
SOURCES = isMultiple.s main.c
OBJFILES = isMultiple.o main.o
EXEC = ex12

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

