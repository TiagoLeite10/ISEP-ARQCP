# Makefile

# Variáveis
INCLUDES = frequencies.h default_print_freq.h
SOURCES = frequencies.c default_print_freq.c main.c
OBJFILES = frequencies.o default_print_freq.o main.o
EXEC = ex14

# Regras para o sufixo
.SUFFIXES: .c .o

.c.o:
	gcc -g -Wall -c $<
	
${EXEC}: ${OBJFILES}
	gcc -g -Wall ${OBJFILES} -o ${EXEC}
	
${OBJFILES}: ${SOURCES} ${INCLUDES}

clean:
	rm -f ${OBJFILES} ${EXEC}
	
run: ${EXEC}
	./${EXEC}
