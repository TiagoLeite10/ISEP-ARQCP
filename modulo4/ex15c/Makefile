# Makefile

# Variáveis
INCLUDES = activate_invert_bits.h activate_bits.h print_bits.h
SOURCES = activate_invert_bits.s activate_bits.s print_bits.c main.c
OBJFILES = activate_invert_bits.o activate_bits.o print_bits.o main.o
EXEC = ex15c

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
