#include <stdlib.h>
#include <string.h>

/*
 * Função para criar dinamicamente um nova string com o mesmo conteúdo que o array recebido por
 * parâmetro, mas em que o tamanho desta nova string seja apenas o necessário para guardar
 * o tal conteúdo.
 *
 * Resposta: É possível retornar o endereço da nova string devido a estarmos a fazer a alocação 
 * de memória dinâmica na heap, tornando assim possível manter os dados persistentes entre as 
 * diferentes funções. Isto permite então que o apontador para o array criado nesta função 
 * continue válido, devido aos dados lá existentes não serem apagados. Se apenas fizessemos a 
 * criação do apontador na stack (sem a utilização do malloc), após o retorno da função, os dados 
 * seriam perdidos.
 */
char *new_str(char str[80]) {

	/*int size = 0;

	char *ptr_str;
	ptr_str = str;

	while (*ptr_str != '\0') {
		size++;
		ptr_str++;
	}
	
	size++;*/
	
	int size = strlen(str);
	size++; // Somar 1 para contar com o caracter de fim da string (valor 0, NULL)

	char *final_str_ptr;
	final_str_ptr = (char *)malloc(size); // Alocar dinamicamente size bytes

	if (final_str_ptr != NULL)
		strcpy(final_str_ptr, str);

	return final_str_ptr;

}
