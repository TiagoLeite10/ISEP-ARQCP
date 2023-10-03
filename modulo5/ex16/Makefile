# Makefile

# Variáveis
INCLUDES = count_bits_one.h approved_semester.h print_bits.h
SOURCES = count_bits_one.s approved_semester.s print_bits.c main.c
OBJFILES = count_bits_one.o approved_semester.o print_bits.o main.o
EXEC = ex16

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
