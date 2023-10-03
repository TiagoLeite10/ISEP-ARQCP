# Makefile

# Variáveis
INCLUDES = vec_count_bits_one.h count_bits_one.h print_bits_array_numbers.h
SOURCES = vec_count_bits_one.s count_bits_one.s print_bits_array_numbers.c main.c
OBJFILES = vec_count_bits_one.o count_bits_one.o print_bits_array_numbers.o main.o
EXEC = ex12c

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
