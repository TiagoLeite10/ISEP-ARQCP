.section .text
	.global call_proc 					# int call_proc(int a, int b, short c, char d);

call_proc:
	# Prologue
	pushq %rbp						# Salva o valor original do registo %rbp
	movq %rsp, %rbp						# Copia o ponteiro da stack atual para o registo %rbp

	subq $32, %rsp						# Disponibiliza 32 bytes para variáveis locais

	movl %edi,-8(%rbp)					# Coloca o valor do 1º argumento (a) que está guardado em %edi nos 8 bytes da variável local disponibilizada
	movl %esi,-16(%rbp)					# Coloca o valor do 2º argumento (b) que está guardado em %esi nos 16 bytes da variável local disponibilizada
	movw %dx,-24(%rbp)					# Coloca o valor do 3º argumento (c) que está guardado em %dx nos 24 bytes da variável local disponibilizada
	movb %cl,-32(%rbp)					# Coloca o valor do 4º argumento (d) que está guardado em %cl nos 32 bytes da variável local disponibilizada
	
	movl -8(%rbp), %edi					# Coloca o valor do argumento 'a' que está nos 8 bytes da variável local disponibilizada como 1º argumento no registo %edi (8 bytes)
	leaq -8(%rbp), %rsi					# Coloca o endereço do argumento 'a' que está nos 8 bytes da variável local disponibilizada como 2º argumento no registo %rsi (16 bytes)
		
	movl -16(%rbp), %edx					# Coloca o valor do argumento 'b' que está nos 16 bytes da variável local disponibilizada como 3º argumento no registo %edx (8 bytes)
	leaq -16(%rbp), %rcx					# Coloca o endereço do argumento 'b' que está nos 16 bytes da variável local disponibilizada como 4º argumento no registo %rcx (16 bytes)
	
	movw -24(%rbp), %r8w					# Coloca o valor do argumento 'c' que está nos 24 bytes da variável local disponibilizada como 5º argumento no registo %r8w (4 bytes)
	leaq -24(%rbp), %r9					# Coloca o endereço do argumento 'c' que está nos 24 bytes da variável local disponibilizada como 6º argumento no registo %r9 (16 bytes)
	
	movb -32(%rbp), %r10b					# Coloca o valor do argumento 'd' que está nos 32 bytes da variável local disponibilizada no registo %r10b (1 byte) que será o 7º argumento
	leaq -32(%rbp), %r11					# Coloca o endereço do argumento 'd' que está nos 32 bytes da variável local disponibilizada no registo %r11 (16 bytes) que será o 8º argumento
	
	pushq %r10						# Coloca o valor (8 bytes) presente no registo %r10 na stack (e subtrai 8 bytes ao topo da stack
	pushq %r11						# Coloca o valor (8 bytes) presente no registo %r11 na stack (e subtrai 8 bytes ao topo da stack
	call proc						# Chama a função proc(int x1, int *p1, int x2, int *p2, short x3, short *p3, char x4, char *p4)
	popq %r11						# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %r11 (e soma 8 bytes ao topo da stack)
	popq %r10						# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %r10 (e soma 8 bytes ao topo da stack)

	movl (%rsi), %eax					# Coloca o valor guardado no apontador %rsi (x1) no registo %eax
	addl (%rcx), %eax					# Soma o valor guardado no apontador %rcx (x2) ao valor que está guardado em %eax
	
	movswl (%r9), %edi					# Coloca o valor guardado no apontador %r9 (x3) no registo %r8d com extensão de sinal (16 bits para 32 bits)
	movsbl (%r11), %ecx					# Coloca o valor guardado no apontador %r11 (x4) no registo %ecx com extensão de sinal (8 bits para 32 bits)
	subl %ecx, %edi						# Subtrai o valor contido no registo %edi (x3) com o valor contido no registo %ecx (x4)
	
	imul %edi						# Multiplica o valor contido no registo %edi (x3 - x4) com o valor contido no registo %eax (x1 + x2) 	
	
	# Epilogue
	movq %rbp, %rsp						# Recupera o valor original do registo %rsp
	popq %rbp						# Restaura o valor original do registo %rbp
	ret
