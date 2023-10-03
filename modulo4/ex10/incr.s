.section .data
	# None

.section .text
	.global incr		# int incr(short *p1, char val)

incr:				# Etiqueta que representa o início das instruções da função incr
	
	pushq %rbp		# Prologue
	movq %rsp, %rbp
	subq $16, %rsp		# Disponibiliza 16 bytes para variáveis locais

	movswl (%rdi), %eax	# x = (int) *p1
	movq %rax, -8(%rbp)	# Coloca a variável local x em memória
	
	movsbl %sil, %ecx	# y = (int) val
	addl %eax, %ecx		# y = y + x
	movq %rcx, -16(%rbp)	# Coloca a variável local y em memória

	movw %cx, (%rdi)	# *p1 = (short)y

	movq %rbp, %rsp		# Epilogue (descarta os 16 bytes disponibilizados para variáveis locais)
	popq %rbp

	ret			# return x
