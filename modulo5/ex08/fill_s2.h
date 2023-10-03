/* Ficheiro de cabeçalho para o ficheiro de código fill_s2.s */
#ifndef FILL_S2_H
#define FILL_S2_H
    typedef struct {
        char c[3];
        short w[3];
        int j;
    } s2;

    void fill_s2(s2 *s, short vw[3], int vj, char vc[3]);
#endif
