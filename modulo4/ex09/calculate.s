.section .text
	.global calculate 				# int calculate(int a, int b);

calculate:
	# Prologue
	pushq %rbp					# Salva o valor original do registo %rbp
	movq %rsp, %rbp					# Copia o ponteiro da stack atual para o registo %rbp
	
	subq $16, % rsp					# Disponibiliza 16 bytes para variáveis locais
	
	movl %edi, -8(%rbp)				# Coloca o valor do 1º argumento (a) que está guardado em %edi nos primeiros 8 bytes da variável local disponibilizada
	subl %esi, -8(%rbp)				# Subtrai o valor do 2º argumento (b) que está guardado em %esi aos primeiros 8 bytes da variável local disponibilizada
	
	movl %edi, %eax					# Coloca o valor do 1º argumento (a) que está guardado em %edi no registo %eax para ser realizada a multiplicação
	imul %esi					# Multiplica o valor contido em %esi pelo guardado em %eax e guarda o resultado em %eax
	movl %eax, -16(%rbp)				# Coloca o valor contido em %eax nos últimos 16 bytes da variável local disponibilizada
	
	movl %esi, %edx					# Coloca o valor do argumento b que está no registo %esi como 3º argumento no registo %edx (4 bytes)
	movl %edi, %esi					# Coloca o valor do argumento a que está no registo %edi como 2º argumento no registo %esi (4 bytes)
	movb $'*', %dil					# Coloca o caracter '*' como 1º argumento no registo %dil (1 byte)
	movl -16(%rbp), %ecx				# Coloca o valor dos últimos 16 bytes da variável local disponibilizada como 4º argumento no registo %ecx (4 bytes)

	pushq %rbp					# Coloca o valor (8 bytes) presente no registo %rbp na stack (e subtrai 8 bytes ao topo da stack)
	pushq %rdx					# Coloca o valor (8 bytes) presente no registo %rdx na stack (e subtrai 8 bytes ao topo da stack)
	pushq %rsi					# Coloca o valor (8 bytes) presente no registo %rsi na stack (e subtrai 8 bytes ao topo da stack)
	call print_result				# Chama a função print_result(char op, int o1, int o2, int res) para imprimir a operação realizada e respetivo resultado
	popq %rsi					# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %rsi (e soma 8 bytes ao topo da stack)
	popq %rdx					# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %rdx (e soma 8 bytes ao topo da stack)
	popq %rbp					# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %rbp (e soma 8 bytes ao topo da stack)
	
	movb $'-', %dil					# Coloca o caracter '-' como 1º argumento no registo %dil (1 byte)
	movl -8(%rbp), %ecx				# Coloca o valor dos primeiros 8 bytes da variável local disponibilizada como 4º argumento no registo %ecx (4 bytes)
	
	pushq %rbp					# Coloca o valor (8 bytes) presente no registo %rbp na stack (e subtrai 8 bytes ao topo da stack)
	call print_result				# Chama a função print_result(char op, int o1, int o2, int res) para imprimir a operação realizada e respetivo resultado
	popq %rbp					# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %rbp (e soma 8 bytes ao topo da stack)
	
	movl -8(%rbp), %eax				# Coloca o valor dos primeiros 8 bytes da variável local disponibilizada no registo %eax (4 bytes)
	subl -16(%rbp), %eax				# Subtrai o valor dos últimos 16 bytes da variável local disponibilizada ao valor guardado em %eax e guarda o resultado em %eax

	# Epilogue
	movq %rbp, %rsp					# Recupera o valor original do registo %rsp
	popq %rbp					# Restaura o valor original do registo %rbp
	ret
