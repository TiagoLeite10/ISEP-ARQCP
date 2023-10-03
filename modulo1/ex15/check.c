/* Função para verificar se os números inteiros x, y e z satisfazem a 
 * condição x < y < z.
 * A função recebe por parâmetro três números inteiros, x, y e z, por esta 
 * mesma ordem.
 * A função retorna 1 se a condição for verificada ou 0 em caso contrário.
 */
int check(int x, int y, int z) {
	return x < y && y < z;
}
