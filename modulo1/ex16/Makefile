# Makefile

# Variáveis
INCLUDES = where_exists.h
SOURCES = where_exists.c main.c
OBJFILES = where_exists.o main.o
EXEC = ex16

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
