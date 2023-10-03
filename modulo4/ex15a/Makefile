# Makefile

# Variáveis
INCLUDES = activate_bits.h print_bits.h
SOURCES = activate_bits.c print_bits.c main.c
OBJFILES = activate_bits.o print_bits.o main.o
EXEC = ex15a

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
