.section .data
	
	op3:				# Variável op3
		.quad 0			# Tipo da variável op3 (quad, 8 bytes). É inicializada com o valor 0

	op4:				# Variável op4
		.quad 0			# Tipo da variável op4 (quad, 8 bytes). É inicializada com o valor 0

	.global op1, op2		# variáveis do tipo inteiro (4 bytes) declaradas no módulo que utiliza este mesmo módulo
	.global op3, op4		# Coloca as variáveis declaradas neste módulo globais de forma a serem acedidas a partir de outros módulos
	.equ CONST, 20			# constante com o valor 20

.section .text
	.global sum 			# int sum()
	.global sum_v2 			# int sum_v2()
	.global sum_v3			# long sum_v3()

sum:
	movl op1(%rip), %ecx 		# colocar op1 em ecx
	movl op2(%rip), %eax 		# colocar op1 em eax
	addl %ecx, %eax 		# (eax = eax + ecx) resultado fica em eax
	ret

sum_v2:
	movl $CONST, %eax 		# colocar o valor da constante em eax
	movl op1(%rip), %ecx 		# colocar op1 em ecx
	movl op2(%rip), %edx 		# colocar op2 em edx
	
	subl %ecx, %eax 		# (eax = eax - ecx) resultado fica em eax
	subl %ecx, %eax 		# (eax = eax - ecx) resultado fica em eax
	addl %edx, %eax 		# (eax = eax + edx) resultado fica em eax
	ret

sum_v3:
	movq op4(%rip), %rax 		# Coloca o valor da variável op4 no registo %rax
	# op4 + op3 - op2 - op2 + op1 + op1
	addq op3(%rip), %rax		# Soma o valor da variável op3 ao valor presente no registo %rax
	
	movslq op2(%rip), %rcx		# Coloca o valor da variável op2 no registo %rcx, extendendo o seu sinal para que passe a representar 8 bytes em vez de 4 bytes
	subq %rcx, %rax			# Faz a subtração entre o valor presente no registo %rcx e o valor no registo %rax. O resultado fica em %rax
	subq %rcx, %rax			# Volta a realizar a mesma operação realizada anteriormente

	movslq op1(%rip), %rcx		# Coloca o valor da variável op1 no registo %rcx, extendendo o seu sinal para que passe a representar 8 bytes em vez de 4 bytes

	addq %rcx, %rax			# Soma ao valor presente no registo %rax o valor presente no registo %rcx
	addq %rcx, %rax			# Realiza a mesma operação realizada na linha anterior
	
	ret

