/* Ficheiro de cabeçalho para o ficheiro de código fill_s1.s */
#ifndef FILL_S1_H
#define FILL_S1_H

typedef struct {
    char c;
    int i;
    char d;
    int j;
} s1;
    
void fill_s1(s1 *s, int vi, char vc, int vj, char vd);
#endif
