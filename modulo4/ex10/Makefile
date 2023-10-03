# Makefile

# Variáveis
INCLUDES = incr.h call_incr.h
SOURCES = incr.s call_incr.s main.c
OBJFILES = incr.o call_incr.o main.o
EXEC = ex10

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
