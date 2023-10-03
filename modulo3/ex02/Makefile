# Makefile

# Variáveis
INCLUDES = str_copy_porto.h
SOURCES = str_copy_porto.s main.c
OBJFILES = str_copy_porto.o main.o
EXEC = ex02

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
