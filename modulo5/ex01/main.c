/* Ficheiro principal para a resolução do exercício 1 do módulo 5 */
#include <stdio.h>

union union_u1{
    char vec[32];
    float a;
    int b;
} u;

struct struct_s1{
    char vec[32];
    float a;
    int b;
} s;

void printUnionSize() {
    printf("Tamanho da estrutura union: %ld\n", sizeof(u));
}

void printStructSize() {
    printf("Tamanho da estrutura struct: %ld\n", sizeof(s));
}

/* 
Output do programa:
Sizeof de u: 32
Sizeof de s: 40

O tipo de estrutura union serve para que uma variável tenha várias possibilidades de tipos de dados.
O sizeof de u é 32 bytes, pois o maior dado presente na estrutura union é o array de chars com tamanho 32.

Na estrutura de dados 'struct', temos várias variáveis agragadas ao mesmo nome, ao contrário da union onde apenas se 
podia ter a variável a representar um dos campos declarados. 
O sizeof de s é 40 bytes, pois tem como dados o array de chars com tamanho 32 (32 bytes), um inteiro (4 bytes) e um float (4 bytes).
O endereço inicial da estrutura tem de ser múltiplo de 4 tal como o valor total do tamanho da estrutura devido ao maior tipo de dados ser de 4 bytes.
*/
int main(void) {
	printUnionSize();
    printStructSize();

	return 0;
}