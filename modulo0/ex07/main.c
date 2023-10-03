#include <stdio.h>
#include <string.h>
#include "count_words.h"

int main() {
	printf("%i\n", count_words("A minha casa"));
	printf("%i\n", count_words("A     "));
	printf("%i\n", count_words("Casa"));
	printf("%i\n", count_words("      "));
	
	return 0;
}
