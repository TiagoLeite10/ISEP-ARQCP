#include <stdio.h>
#include <string.h>

/* 
Output do programa:
[1]=arquitectura de computadores
[2]=123.500000
[3]=2
[1]=
[2]=0.000000
[3]=2

Este output acontece pois o tipo de estrutura union serve para que uma variável tenha várias possibilidades de tipos de dados.
Ou seja, neste exemplo, a estrutura declarada permite que a variável possa ser um array de chars com tamanho 32, um float ou um inteiro.
Como neste programa, na primeira parte declaramos sempre um valor de um dado tipo para o apontador e só depois é que imprimimos o valor
no ecrã, obtemos os valores esperados nos prints.
Já na segunda parte, como este tipo de estrutura de dados apenas permite que a variável tome um tipo de dados de cada vez, como a última
atribuição de valores para este apontador foi para o campo b (do tipo int), ao tentar imprimir o valor que supostamente deveria encontrar noutro campo,
não será possível de o fazer, pois apenas o valor de b está disponível.
*/

int main( void ){
    union union_u1{
        char vec[32];
        float a;
        int b;
    } u;
    
    union union_u1 * ptr = &u;

    /* 1ª parte */
    strcpy(ptr->vec, "arquitectura de computadores" );
    printf( "[1]=%s\n", ptr->vec );
    ptr->a = 123.5;
    printf( "[2]=%f\n", ptr->a );
    ptr->b = 2;
    printf( "[3]=%d\n", ptr->b );
    
    /* 2ª parte */
    printf( "[1]=%s\n", ptr->vec );
    printf( "[2]=%f\n", ptr->a );
    printf( "[3]=%d\n", ptr->b );
    
    return 0;
}
