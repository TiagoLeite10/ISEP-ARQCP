/* Ficheiro principal para a resolução do exercício 8 do módulo 5 */
#include <stdio.h>
#include "fill_s2.h"

void print_struct_data(s2 *s);

int main() {

    s2 s;
    short vw[3] = {259, 200, 300}; 
    int vj = 20;
    char vc[3] = "abc";

    fill_s2(&s, vw, vj, vc);
    print_struct_data(&s);

    printf("\n----- -----\n\n");

    short vw2[3] = {900, 990, 999}; 
    int vj2 = 29;
    char vc2[3] = "ola";

    fill_s2(&s, vw2, vj2, vc2);
    print_struct_data(&s);

    printf("\n----- -----\n\n");

    short vw3[3] = {-1, -2, -3}; 
    int vj3 = -4;
    char vc3[3] = {-5, -6, -7};

    fill_s2(&s, vw3, vj3, vc3);
    print_struct_data(&s);

    return 0;

}

void print_struct_data(s2 *s) {

    printf("c: %d %d %d\n", s->c[0], s->c[1], s->c[2]);
    printf("w: %d %d %d\n", s->w[0], s->w[1], s->w[2]);
    printf("j: %d\n", s->j);

}
