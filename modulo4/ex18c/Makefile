# Makefile

# Variáveis
INCLUDES = changes_vec.h changes.h print_bits_array_elements.h
SOURCES = changes_vec.s changes.s print_bits_array_elements.c main.c
OBJFILES = changes_vec.o changes.o print_bits_array_elements.o main.o
EXEC = ex18c

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
