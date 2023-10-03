#include <stdio.h>

// Constante que representa o tamanho do array a utilizar.
#define LENGTH 4

int main() {

	int x = 5;
	int* xPtr = &x;
	float y = *xPtr + 3;
	int vec[] = {10, 11, 12, 13};

	printf("Value of x: %d\n", x);
	printf("Value of y: %f\n", y);

	printf("The hexadecimal adress of x: %p\n", &x);
	printf("The hexadecimal adress of xPtr: %p\n", xPtr);

	printf("The value pointed by xPtr: %d\n", *xPtr);

	printf("The address of vec: %p\n", vec);

	for (int i = 0; i < LENGTH; i++) {
		printf("Value of vec[%d]: %d\n", i, vec[i]);
	}

	for (int i = 0; i < LENGTH; i++) {
		printf("The adress of vec[%d]: %p\n", i, &vec[i]);
	}

	return 0;
}

/*

Alínea b)

O vetor vec é um vetor que guarda dados do tipo inteiro. O tipo de dados inteiro ocupa 4 bytes de memória.
O vetor como neste caso "representa" no mínimo 4 números inteiros, cada um deles irá ocupar 4 bytes de memória. Então pelo output que nos mostra o endereço de memória (em hexadecimal) de cada um desses inteiros, podemos observar que todos eles se encontram alocados na memória em bytes seguidos (4 em 4 bytes). Por exemplo, a primeira posição do vetor se tiver o endereço de memória "0x7...0", o inteiro seguinte irá ter um endereço de memória semelhante, com a diferença que o endereço agora estará 4 bytes à frente, ou seja, o endereço será "0x7...4".



Alínea c)

É expectável que ao executar o programa noutro computador os endereços de memória se alterem. Até o mesmo computador ao executar o mesmo programa em dois ocasiões diferentes, irá utilizar diferentes espaços de memória.

*/
