#include <stdio.h>
#include "average.h"

int main() {
	
	int v[] = {5, 10, 15, 20};
	int r = 0;

	r = average_array(v, 4);

	printf("average = %d\n", r);

	return 0;
}
