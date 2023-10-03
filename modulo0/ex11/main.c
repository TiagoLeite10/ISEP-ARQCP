#include <stdio.h>
#include "average.h"

int main(){
	int v[] = {1, 2};
	int result1 = 0, result2 = 0, result3 = 0;
	
	result1 = average(v[0], v[1]);
	result2 = average_array(v, 2);
	result3 = average_global_array();
	
	printf("Average 1 = %d\n", result1);
	printf("Average 2 = %d\n", result2);
	printf("Average 3 = %d\n", result3);
	
	return 0;
}


