int string_size(char *str) {
	int size = 0;
	while (*str != '\0') {
		size++;
		str++;
	}
	return size;
}

int palindrome(char *str) {

	if (*str == '\0')
		return 0;

	int is_capicua = 1;
	char *end_ptr = str;
       	end_ptr += string_size(str) - 1;
	
	while (str < end_ptr && is_capicua == 1) {
		printf("%c %c\n", *str, *end_ptr);
		while (*str == ' ') {
			printf("a\n");
			str++;
		}

		while (*end_ptr == ' ') {
			printf("c\n");
			end_ptr--;
		}

		if (*str != *end_ptr)
			is_capicua = 0;

		str++;
		end_ptr--;
	}

	return is_capicua;

}
