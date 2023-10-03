# Makefile

# Variáveis
INCLUDES = rotate.h print_bits.h
SOURCES = rotate.c print_bits.c main.c
OBJFILES = rotate.o print_bits.o main.o
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
