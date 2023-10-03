#include <stdio.h>
#include <string.h>

#define LENGTH 20

int string_to_int(char *str);
float calculate_average(int num_one, int num_two);

int main() {
	char str_one[LENGTH];
	char str_two[LENGTH];
	
	printf("Insira o 1º número: \n");
	scanf("%s", str_one);
	printf("Insira o 2º número: \n");
	scanf("%s", str_two);
	
	int num_one = string_to_int(str_one);
	int num_two = string_to_int(str_two);
	
	float avg = calculate_average(num_one, num_two);

	printf("A média dos dois números inseridos (%d e %d) é %f\n", num_one, num_two, avg);

	return 0;
}

int string_to_int(char *str) {
	int num = 0;
	int length = strlen(str);

	for (int i = 0; i < length; i++) {
		num = (num * 10) + (str[i] - 48);
	}

	return num;
}

float calculate_average(int num_one, int num_two) {
	return (num_one + num_two) / (float)2;
}
