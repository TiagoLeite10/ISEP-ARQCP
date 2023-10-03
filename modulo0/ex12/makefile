# Makefile

ex12: size_string.o main.o
	gcc size_string.o main.o -o ex12

size_string.o: size_string.c
	gcc -c -Wall -c size_string.c -o size_string.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o ex12

run: ex12
	./ex12
