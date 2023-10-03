#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
	
stack *ptr_stack = NULL;

/* Função para simular a operação push da stack usando memória dinâmica */
void push(long value) {
	stack *tmp_stack = (stack *) malloc(sizeof(stack)); // Novo espaço de memória para alocar o novo valor
	
	if (tmp_stack != NULL) {		
		tmp_stack->value = value; // Valor é guardado na stack temporária
		tmp_stack->ptr_behind = ptr_stack; // Atualiza-se o apontador do último valor da stack temporária
		ptr_stack = tmp_stack; // Atualiza-se a stack
	
	} else {
		printf("Ocorreu um erro ao reservar memória para realizar o push do valor %ld!\n", value);
	}
}

/* Função para simular a operação pop da stack usando memória dinâmica */
long pop() {
	if(ptr_stack == NULL) { // Se o topo da stack for igual a null, significa que a stack está vazia
		return 0;  
	} else {	  
		stack *temp = ptr_stack;
		ptr_stack = ptr_stack->ptr_behind;	// O topo da stack passa a ser o valor anterior
		long value = temp->value; // Valor que foi retirado da stack

		free(temp); // Liberta a memória alocada para o topo da stack

		return value; // Retorna o valor removido da stack
	}
}

/* Função para imprimir a informação e o tamanho atual da stack */
void print_stack() {
	int s = 0;
	
	if (ptr_stack == NULL) {
		printf("A stack encontra-se vazia! \n");
	} else {
		stack *temp = ptr_stack;

		printf("Stack: \n");
		while (temp != NULL) {
			printf("%ld\n", temp->value);
			temp = temp->ptr_behind;
			s++;
		}
	}
	printf("Tamanho da stack: %d\n\n", s);
}
