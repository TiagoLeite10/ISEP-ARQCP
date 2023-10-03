/* Ficheiro principal para a resolução do exercício 11 do módulo 1 */

#include <stdio.h>
#include "palindrome.h"

int main() {

	char str_one[] = "Never odd or even";
	char str_two[] = "A man a plan a canal Panama";
	char str_three[] = "Gateman sees name, garageman sees name tag";

	int is_palindrome_one = palindrome(str_one);
	printf("%s: %d\n", str_one, is_palindrome_one);
	
	int is_palindrome_two = palindrome(str_two);
	printf("%s: %d\n", str_two, is_palindrome_two);

	int is_palindrome_three = palindrome(str_three);
	printf("%s: %d\n", str_three, is_palindrome_three);

	return 0;

}
