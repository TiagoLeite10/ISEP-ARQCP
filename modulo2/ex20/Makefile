# Makefile

# Variáveis
INCLUDES = check_num.h
SOURCES = check_num.s main.c
OBJFILES = check_num.o main.o
EXEC = ex20

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
