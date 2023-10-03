# Makefile

# Variáveis
INCLUDES = functions_in_c.h functions_in_assembly.h
SOURCES = functions_in_c.c functions_in_assembly.s main.c
OBJFILES = functions_in_c.o functions_in_assembly.o main.o
EXEC = ex22

# Regras para o sufixo
.SUFFIXES : .c .s .o

.s.o .c.o:
	gcc -Wall -g -c $<

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

clean:
	rm -f ${OBJFILES} ${EXEC}

run: ${EXEC}
	valgrind ./${EXEC}
