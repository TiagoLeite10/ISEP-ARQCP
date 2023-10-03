# Makefile

# Variáveis
INCLUDES = mixed_sum.h join_bits.h print_bits.h
SOURCES = mixed_sum.s join_bits.s print_bits.c main.c
OBJFILES = mixed_sum.o join_bits.o print_bits.o main.o
EXEC = ex16c

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
