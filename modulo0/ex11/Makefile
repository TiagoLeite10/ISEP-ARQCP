INCLUDES = average.h
SOURCES = average.c main.c
OBJFILES = average.o main.o
EXEC = prog_avg

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
