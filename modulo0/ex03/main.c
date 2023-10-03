#include <stdio.h>

#define LENGTH 30

void fill_array(int *vec);
float calculate_average(int *vec);

int main() {
	int vec[LENGTH];
	
	fill_array(vec);
	
	printf("Média dos valores: %f", calculate_average(vec));
		
	return 0;
}

void fill_array(int *vec) {
	for(int i = 0; i < LENGTH; i++) {
		printf("Indique o %dº número: ", i + 1);
		scanf("%d", &vec[i]);
	}	
}

float calculate_average(int *vec) {
	float sum;
	for (int i = 0; i < LENGTH; i++) {
		sum += vec[i];
	}
	
	return sum / LENGTH;
}
