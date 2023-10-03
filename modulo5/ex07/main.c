/* Ficheiro principal para a resolução do exercício 7 do módulo 5 */
#include <stdio.h>
#include "fill_s1.h"

int main() {
	s1 struct_s1;
    s1 *s = &struct_s1;
    
    fill_s1(s, 10, 25, 35, 50);
    printf("c = %d\ni = %d\nd = %d\nj = %d\n", s->c, s->i, s->d, s->j);
    
	return 0;
}
