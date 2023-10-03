#include <stdio.h>
#include <string.h>

/* 
Output do programa:
[1]=arquitectura de computadores
[2]=123.500000
[3]=2
[1]=arquitectura de computadores
[2]=123.500000
[3]=2

Ao utilizar a estrutura de dados 'struct', temos várias variáveis agragadas ao mesmo nome, ao contrário da union
onde apenas se podia ter a variável a representar um dos campos declarados. 
Neste caso da struct, podemos atribuir valores a cada um dos campos representados por ela, ou seja, o mesmo apontador
tem acesso a todos esses campos (variáveis).
*/
int main( void ){
    struct struct_u1{
        char vec[32];
        float a;
        int b;
    } u;
    
    struct struct_u1 * ptr = &u;

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