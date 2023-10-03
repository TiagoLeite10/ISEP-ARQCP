# Makefile

# Variáveis
INCLUDES = find_all_words.h find_word.h
SOURCES = find_all_words.c find_word.c main.c
OBJFILES = find_all_words.o find_word.o main.o
EXEC = ex20

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
