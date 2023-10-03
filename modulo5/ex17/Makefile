# Makefile

# Variáveis
INCLUDES = return_unionB_b.h
SOURCES = return_unionB_b.s main.c
OBJFILES = return_unionB_b.o main.o
EXEC = ex17

# Regras para o sufixo
.SUFFIXES : .s .c .o

.s.o .c.o:
	gcc -Wall -g -c $<

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

clean:
	rm -f ${OBJFILES} ${EXEC}

run: ${EXEC}
	valgrind ./${EXEC}
