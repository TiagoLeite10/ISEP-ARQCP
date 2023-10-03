.section .data
	# None

.section .text
	.global call_incr	# int call_incr(short w)

call_incr:			# Etiqueta que representa o início das instruções da função call_incr
	pushq %rbp		# Prologue
	movq %rsp, %rbp
	subq $16, %rsp		# Disponibiliza 16 bytes para variáveis locais

	movq %rdi, -8(%rbp)	# x1 = w
	addw $3, -8(%rbp)	# x1 = x1 + 3
	
	pushq %rdi		# Para manter o valor de w após a chamada da função
	
	leaq -8(%rbp), %rdi	# Coloca &x1 como primeiro argumento
	movb $0xC3, %sil	# Coloca 0xC3 como segundo argumento
	call incr		# call incr(&x1, 0xC3)
	
	popq %rdi		# Repor o valor de w
	
	movq %rax, -16(%rbp)	# x2 = incr(&x1, 0xC3)

	movswl -8(%rbp), %eax	# valor de x1
	addl -16(%rbp), %eax	# x1 + x2

	movq %rbp, %rsp		# Epilogue (descarta os 16 bytes disponibilizados para variáveis locais)
	popq %rbp
	ret			# valor de (x1 + x2)
