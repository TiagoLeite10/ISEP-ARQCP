# Makefile

# Variáveis
INCLUDES = str_copy_porto2.h
SOURCES = str_copy_porto2.s main.c
OBJFILES = str_copy_porto2.o main.o
EXEC = ex03

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
