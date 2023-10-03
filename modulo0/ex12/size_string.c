unsigned int size_string_wrong (char s[]) {
	return sizeof(s);
}

unsigned int size_string_correct (char s[]) {
	unsigned int count = 0;
	while (s[count] != 0)
		count++;
	return count;
}
