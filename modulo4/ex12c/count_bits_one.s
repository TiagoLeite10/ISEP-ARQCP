.section .data
	.equ INT_BITS, 32		# Constante que representa o número de bits que um valor inteiro tem

.section .text
	.global count_bits_one		# int count_bits_one(int x)

count_bits_one:				# Etiqueta que representa o início das instruções da função count_bits_one
	movl $0, %eax			# Representa o resultado final (contagem de bits a 1)
	movl $INT_BITS, %ecx		# Registo utilizado para decrementar ao realizar o loop

count_bits_one_loop:			# Etiqueta que representa o início das instruções que representam o loop aos bits do número
	movb %dil, %sil			# %sil fica com os 8 bits menos significativos de x
	andb $1, %sil			# %sil = %sil & 1
	cmpb $1, %sil			# Saber se o valor do bit menos significativo é 1 ou 0
	jne count_bits_one_loop_next
	
	incl %eax			# Incrementar em 1 o resultado, pois foi encontrado mais um bit com valor 1

count_bits_one_loop_next:		# Etiqueta que representa as instruções que preparam os registo para a próxima instrução
	shrl %edi			# %edi >> 1

	loop count_bits_one_loop	# Decrementa %ecx e volta para a etiqueta indicada enquanto %ecx não é igual 0
	
count_bits_one_end:			# Etiqueta que representa as instruções finais da função
	ret
