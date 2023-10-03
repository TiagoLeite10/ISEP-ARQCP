.section .data
	# None

.section .text
	.global calc		# int calc(int a, int *b, int c)

calc:				# Etiqueta que representa o início das instruções relativas à função calc
	pushq %rbp		# Prologue
	movq %rsp, %rbp
	
	subq $8, %rsp		# Disponibiliza 8 bytes para variáveis locais

	shll %edi		# %edi = %edi * 2
	subl (%rsi), %edi	# %edi = %edi - (%rsi), sendo (%rsi) = *b
	movq %rdi, -8(%rbp)	# z = %rdi
	
	movl %edx, %eax		# %eax = c
	subl $4, %eax		# %eax = %eax - 4
	imull -8(%rbp), %eax	# Multiplica z por %eax (%eax = %eax * z)

	movq %rbp, %rsp		# Epilogue (descarta os 8 bytes disponibilizados para variáveis locais)
	popq %rbp

	ret
