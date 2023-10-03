# Makefile

# Variáveis
INCLUDES = encrypt.h decrypt.h
SOURCES = encrypt.s decrypt.s main.c
OBJFILES = encrypt.o decrypt.o main.o
EXEC = ex07

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
