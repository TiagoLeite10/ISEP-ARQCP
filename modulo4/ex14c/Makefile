# Makefile

# Variáveis
INCLUDES = reset_2bits.h reset_bit.h print_bits.h
SOURCES = reset_2bits.s reset_bit.s print_bits.c main.c
OBJFILES = reset_2bits.o reset_bit.o print_bits.o main.o
EXEC = ex14c

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
