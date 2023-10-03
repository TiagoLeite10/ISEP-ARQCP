# Makefile

# Variáveis
INCLUDES = count_odd.h print_vec_char.h
SOURCES = count_odd.s print_vec_char.c main.c
OBJFILES = count_odd.o print_vec_char.o main.o
EXEC = ex07

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
