# Makefile

# Variáveis
INCLUDES = keep_positives.h print_vec_short.h
SOURCES =  keep_positives.s print_vec_short.c main.c
OBJFILES = keep_positives.o print_vec_short.o main.o
EXEC = ex13

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
