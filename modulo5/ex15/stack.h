/* Ficheiro de cabeçalho para o ficheiro de código stack.c */
#ifndef STACK_H
#define STACK_H

	typedef struct stack {
		long value;
		struct stack *ptr_behind;
	} stack;
		
	void push(long value);
	long pop();
	void print_stack();
#endif
