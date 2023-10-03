# Makefile

# Variáveis
INCLUDES = frequencies.h print_vec.h
SOURCES =  frequencies.s print_vec.c main.c
OBJFILES = frequencies.o print_vec.o main.o
EXEC = ex19

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
