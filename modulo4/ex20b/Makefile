# Makefile

# Variáveis
INCLUDES = sum_multiples_x.h print_bits_array_elements.h
SOURCES = sum_multiples_x.s print_bits_array_elements.c main.c
OBJFILES = sum_multiples_x.o print_bits_array_elements.o main.o
EXEC = ex20b

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
