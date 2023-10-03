// Constante que representa a diferença nos números ASCII entre as letras minúsculas
// e as letras maiúsculas.
#define ASCII_LETTERS_OFFSET 32
// Constante que representa o valor ASCII correspondente ao número 0
#define ASCII_FIRST_NUM '0'
// Constante que representa o valor ASCII correspondente ao número 9
#define ASCII_LAST_NUM '9'
// Constante que representa o valor ASCII correspondente à letra A
#define ASCII_START_UPPERCASE_LETTERS 'A'
// Constante que representa o valor ASCII correspondente à letra Z
#define ASCII_END_UPPERCASE_LETTERS 'Z'
// Constante que representa o valor ASCII correspondente à letra a
#define ASCII_START_LOWERCASE_LETTERS 'a'
// Constante que representa o valor ASCII correspondente à letra z
#define ASCII_END_LOWERCASE_LETTERS 'z'

/* Função para verificar se um dado caracter é valido nas condições impostas.
 * (Ser um número de 0 a 9, uma letra minúscula ou maiúscula)
 * Recebe como parâmetro um caracter.
 * Devolve 0 se não for um caracter válido ou 1 se for válido.
 */
int valid_char(char c) {
	return (c >= ASCII_FIRST_NUM && c <= ASCII_LAST_NUM) || (c >= ASCII_START_UPPERCASE_LETTERS && c <= ASCII_END_UPPERCASE_LETTERS) || (c >= ASCII_START_LOWERCASE_LETTERS && c <= ASCII_END_LOWERCASE_LETTERS);
}

/* Função para verificar se dois caracteres são iguais quer estejam na forma maiúscula 
 * ou minúscula.
 * Recebe como parâmetro o carcter um e o caracter dois.
 * Devolve 0 se não for um caracter válido ou 1 se for válido.
 */
int equals_chars(char char_one, char char_two) {
	return char_one == char_two || char_one + ASCII_LETTERS_OFFSET == char_two || char_one - ASCII_LETTERS_OFFSET == char_two;
}

