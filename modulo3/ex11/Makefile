# Makefile

# Variáveis
INCLUDES = vec_greater10.h print_vec_int.h
SOURCES =  vec_greater10.s print_vec_int.c main.c
OBJFILES = vec_greater10.o print_vec_int.o main.o
EXEC = ex11

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
