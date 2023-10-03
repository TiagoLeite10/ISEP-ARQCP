# Makefile

# Variáveis
INCLUDES = odd_sum.h
SOURCES = odd_sum.c main.c
OBJFILES = odd_sum.o main.o
EXEC = ex10

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
