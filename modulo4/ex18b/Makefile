# Makefile

# Variáveis
INCLUDES = changes.h print_bits.h
SOURCES = changes.s print_bits.c main.c
OBJFILES = changes.o print_bits.o main.o
EXEC = ex18b

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
