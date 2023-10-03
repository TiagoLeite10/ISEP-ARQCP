#include <stdio.h>
#include <string.h>

#define LENGTH 20

int integer_part(char *x);
int fractional_part(char *x);

int main() {
	char x[LENGTH];

	printf("Insira um número real, por favor: ");
	scanf("%s", x);
	
	int x_int = integer_part(x);
	int x_frac = fractional_part(x);

	printf("A parte inteira do número é %d.\n", x_int);
	printf("A parte fracionária do número é %d.\n", x_frac);

	return 0;

}

int integer_part(char *x) {

	char actual_char = x[0];
	short pos = 0;
	int x_int = 0;

	while (actual_char != '.') {
		x_int = (x_int * 10) + (x[pos] - 48);
		pos++;
		actual_char = x[pos];
	}

	return x_int;
}

int fractional_part(char *x) {

	char actual_char = x[0];
	short pos = 0;
	int x_frac = 0;

	while (actual_char != '.') {
		pos++;
		actual_char = x[pos];
	}

	for (int i = pos + 1; i < strlen(x); i++) {
		x_frac = (x_frac * 10) + (x[i] - 48);
	}

	return x_frac;
}
