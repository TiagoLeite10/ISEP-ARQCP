# Makefile

# Variáveis
INCLUDES = add_byte.h print_bits_array_numbers.h
SOURCES = add_byte.s print_bits_array_numbers.c main.c
OBJFILES = add_byte.o print_bits_array_numbers.o main.o
EXEC = ex19b

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
