/* Ficheiro principal para a resolução do exercício 9 do módulo 5 */
#include <stdio.h>
#include "fun.h"

int main() {
	structA a;
	structA *ptr_a = &a;
	ptr_a->y = 10;
	ptr_a->x = 5;
	
	structB b;
	structB *ptr_b = &b;
	ptr_b->a = a;
	ptr_b->b = ptr_a;
	ptr_b->x = 25;
	ptr_b->z = 30;	
	ptr_b->c = 45;
	ptr_b->y = 15;
	ptr_b->e[0] = 1;
	ptr_b->e[1] = 2;
	ptr_b->e[2] = 3;

    printf("s->a.x = %d\n", fun1(ptr_b));
    printf("s->z = %d\n", fun2(ptr_b));
    printf("&s->z = %p\n", fun3(ptr_b));
    printf("s->b->x = %d\n", fun4(ptr_b));
    
	return 0;
}
