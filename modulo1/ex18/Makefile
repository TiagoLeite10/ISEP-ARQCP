# Makefile

# Variáveis
INCLUDES = compress_shorts.h print_array.h
SOURCES = compress_shorts.c print_array.c main.c
OBJFILES = compress_shorts.o print_array.o main.o
EXEC = ex18

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
