.section .data
	.global op1, op2, op3	# Variáveis do tipo inteiro definidas no módulo que implementa este módulo

.section .text
	.global sum3ints 	# long long sum3ints()

sum3ints:
	movslq op1(%rip), %rax	# Converte op1 em 8 bytes (.quad) e coloca no registo %rax
	movslq op2(%rip), %rcx	# Converte op2 em 8 bytes (.quad) e coloca no registo %rcx
	addq %rcx, %rax		# Soma %rcx (contem o valor de op2) com %rax (contem o valor de op1)
	movslq op3(%rip), %rcx	# Converte op3 em 8 bytes (.quad) e coloca no registo %rcx
	addq %rcx, %rax		# Soma %rcx (contem o valor de op1 + op2) com %rax (contem o valor de op3)
	
	ret

