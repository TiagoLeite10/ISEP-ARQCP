/* Ficheiro principal para a resolução do exercício 16 do módulo 3 */
#include <stdio.h>
#include "swap.h"
#include "print_vec_char.h"

char *ptr1;
char *ptr2;
int num;

int main() {

	char str1[] = "Boa tarde, esta é a primeira frase!";
	char str2[] = "Boa noite, esta é a segundaa frase!";
	num = 35;
	ptr1 = str1;
	ptr2 = str2;

	printf("\n* Antes do método swap() *\n\n");
	printf("ptr1: %s\n", ptr1);
	printf("ptr2: %s\n", ptr2);
	swap();
	printf("\n* Depois do método swap() *\n\n");
	printf("ptr1: %s\n", ptr1);
	printf("ptr2: %s\n", ptr2);

	printf("\n----- -----\n\n");

	char nums1[] = {10, 50, 99, 127, -128, -29, 32, 90, 12, 15};
	char nums2[] = {-127, 21, 92, 55, 14, -9, 10, 75, 98, 127};
	num = 10;
	ptr1 = nums1;
	ptr2 = nums2;
	
	printf("\n* Antes do método swap() *\n\n");
	printf("ptr1: \n");
	print_vec_char(ptr1, num);
	printf("ptr2: \n");
	print_vec_char(ptr2, num);
	swap();
	printf("\n* Depois do método swap() *\n\n");
	printf("ptr1: \n");
	print_vec_char(ptr1, num);
	printf("ptr2: \n");
	print_vec_char(ptr2, num);

	printf("\n----- -----\n\n");

	char str3[] = " abc d";
	char str4[] = "e f gh";
	num = 6;
	ptr1 = str3;
	ptr2 = str4;

	printf("\n* Antes do método swap() *\n\n");
	printf("ptr1: %s\n", ptr1);
	printf("ptr2: %s\n", ptr2);
	swap();
	printf("\n* Depois do método swap() *\n\n");
	printf("ptr1: %s\n", ptr1);
	printf("ptr2: %s\n", ptr2);

	printf("\n----- -----\n\n");

	char str5[] = "         ";
	char str6[] = "Not empty";
	num = 9;
	ptr1 = str5;
	ptr2 = str6;

	printf("\n* Antes do método swap() *\n\n");
	printf("ptr1: %s\n", ptr1);
	printf("ptr2: %s\n", ptr2);
	swap();
	printf("\n* Depois do método swap() *\n\n");
	printf("ptr1: %s\n", ptr1);
	printf("ptr2: %s\n", ptr2);


	return 0;

}
