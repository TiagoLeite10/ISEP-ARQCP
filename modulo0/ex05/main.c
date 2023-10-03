#include <string.h>

int string_to_int(char *str) {
	int num = 0;
	int length = strlen(str);
	
	for (int i = 0; i < length; i++) {
		num = (num * 10) + (str[i] - 48);
	}
	
	return num; 
}
