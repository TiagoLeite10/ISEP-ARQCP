INCLUDES = line.h multiplication_table_n.h multiplication_table.h
SOURCES = line.c multiplication_table_n.c multiplication_table.c main.c
OBJFILES = line.o multiplication_table_n.o multiplication_table.o main.o
EXEC = prog

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
