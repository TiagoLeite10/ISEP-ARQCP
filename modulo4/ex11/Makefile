# Makefile

# Variáveis
INCLUDES = proc.h call_proc.h
SOURCES = proc.s call_proc.s main.c
OBJFILES = proc.o call_proc.o main.o
EXEC = ex11

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
