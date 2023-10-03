int count_words(char *str) {
	int length = strlen(str);
	int count = 0;
	
	if (str[0] != ' ') {
		count = 1;
	}
	
	for (int i = 1; i < length - 1; i++) {
		if (str[i - 1] != ' ' && str[i] == ' ' && str[i + 1] != ' ') {
			count++;
		}
	}
	
	return count;	
}
