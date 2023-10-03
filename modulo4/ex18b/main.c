/* Ficheiro principal para a resolução do exercício 18b do módulo 4 */
#include <stdio.h>
#include "changes.h"
#include "print_bits.h"

int main() {
	
	int num = 0xffffffff;
	int *ptr;
	ptr = &num;

	printf("Valor original número (em hexadecimal): %x\n", num);
	printf("Representação deste valor em binário: ");
	print_bits(num);

	changes(ptr);
	printf("\n");
	
	printf("Valor final do número (em hexadecimal): %x\n", num);
	printf("Representação deste valor em binário: ");
	print_bits(num);

	printf("\n----- -----\n\n");

	num = 0xffff0fff;

	printf("Valor original número (em hexadecimal): %x\n", num);
	printf("Representação deste valor em binário: ");
	print_bits(num);

	changes(ptr);
	printf("\n");
	
	printf("Valor final do número (em hexadecimal): %x\n", num);
	printf("Representação deste valor em binário: ");
	print_bits(num);

	printf("\n----- -----\n\n");

	num = 0x000ff000;

	printf("Valor original número (em hexadecimal): %x\n", num);
	printf("Representação deste valor em binário: ");
	print_bits(num);

	changes(ptr);
	printf("\n");
	
	printf("Valor final do número (em hexadecimal): %x\n", num);
	printf("Representação deste valor em binário: ");
	print_bits(num);

	printf("\n----- -----\n\n");

	num = 0x00000f00;

	printf("Valor original número (em hexadecimal): %x\n", num);
	printf("Representação deste valor em binário: ");
	print_bits(num);

	changes(ptr);
	printf("\n");

	printf("Valor final do número (em hexadecimal): %x\n", num);
	printf("Representação deste valor em binário: ");
	print_bits(num);

	printf("\n----- -----\n\n");

	num = 0xffff00ff;

	printf("Valor original número (em hexadecimal): %x\n", num);
	printf("Representação deste valor em binário: ");
	print_bits(num);

	changes(ptr);
	printf("\n");
	
	printf("Valor final do número (em hexadecimal): %x\n", num);
	printf("Representação deste valor em binário: ");
	print_bits(num);

	printf("\n----- -----\n\n");

	return 0;

}
