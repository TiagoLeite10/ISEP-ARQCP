# Makefile

# Variáveis
INCLUDES = palindrome.h array_helper.h char_helper.h
SOURCES = palindrome.c array_helper.c char_helper.c main.c
OBJFILES = palindrome.o array_helper.o char_helper.o main.o
EXEC = ex11

# Regras para o sufixo
.SUFFIXES : .c .o

.c.o:
	gcc -Wall -g -c $<

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

clean:
	rm -f ${OBJFILES} ${EXEC}

run: ${EXEC}
	./${EXEC}

