.section .data
	.equ SHORT_BITS, 16		# Constante que representa o número de bits que um valor short tem

.section .text
	.global count_bits_one		# int count_bits_one(short x)

count_bits_one:
	# x em %di
	movl $0, %eax			# Representa o resultado final (contagem de bits a 1)
	movl $SHORT_BITS, %ecx		# Registo utilizado para decrementar ao realizar o loop

count_bits_one_loop:
	movb %dil, %sil			# %sil fica com os 8 bits menos significativos de x
	andb $1, %sil			# %sil = %sil & 1
	jz count_bits_one_loop_next
	
	incl %eax			# Incrementar em 1 o resultado, pois foi encontrado mais um bit com valor 1

count_bits_one_loop_next:
	shrw %di			# %di >> 1

	loop count_bits_one_loop	# Decrementa %ecx e volta para a etiqueta indicada enquanto %ecx não é igual 0
	
count_bits_one_end:
	ret
