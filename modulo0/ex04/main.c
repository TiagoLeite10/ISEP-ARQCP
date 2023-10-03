#include <stdio.h>

#define LENGTH 16

#define VALUE 10

int count(int *vec, int n, int value);

int main() {
	
	int vec[] = {5, 5, 10, 20, 4, 2, 8, 9, 25, 90, 99, 201, 5, 10, 20, 10};

	printf("O valor %d aparece %d vezes no array!\n", VALUE, count(vec, LENGTH, VALUE));

	return 0;

}

int count(int *vec, int n, int value) {
	
	short count = 0;

	for (short i = 0; i < n; i++) {
		if (vec[i] == value) {
			count++;
		}
	}

	return count;
}
