# Makefile

# Variáveis
INCLUDES = count_bits_one.h print_bits.h
SOURCES = count_bits_one.s print_bits.c main.c
OBJFILES = count_bits_one.o print_bits.o main.o
EXEC = ex12b

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
