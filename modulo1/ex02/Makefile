# Makefile

# Variáveis
INCLUDES = copy_vec.h print_array.h
SOURCES = copy_vec.c print_array.c main.c
OBJFILES = copy_vec.o print_array.o main.o
EXEC = ex02

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
