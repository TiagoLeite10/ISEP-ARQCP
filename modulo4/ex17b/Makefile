# Makefile

# Variáveis
INCLUDES =  greater_date.h print_bits.h
SOURCES =  greater_date.s print_bits.c main.c
OBJFILES =  greater_date.o print_bits.o main.o
EXEC = ex17b

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
