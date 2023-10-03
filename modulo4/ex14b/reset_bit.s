.section .data
	.equ UPPER_LIMIT, 31		# Constante que define a posição limite que pode ser passada por parâmetro
	.equ INFERIOR_LIMIT, 0		# Constante que define a posição mínima que pode ser passada por parâmetro

.section .text
	.global reset_bit		# int reset_bit(int *ptr, int pos)

reset_bit:				# Etiqueta que representa o início das instruções da função reset_bit
	movl $0, %eax			# %eax representa o valor a devolver (0 se o bit não for alterado e 1 se for)
	
	cmpl $UPPER_LIMIT, %esi		# Verifica se o valor passado por parâmetro que representa a posição do bit a alterar, não ultrapassa a posição limite permitida
	jg reset_bit_end
	
	cmpl $INFERIOR_LIMIT, %esi	# Verifica se o valor passado por parâmetro que representa a posição do bit a alterar, não é menor do que a posição mínima permitida
	jl reset_bit_end

	movl %esi, %ecx			# %ecx = pos
	movl $-2, %edx			# Representa em binário: 11111111111111111111111111111110. Será utilizado como máscara
	movl (%rdi), %r8d		# Guarda o valor original do número inteiro apontado pelo apontador de inteiros passado por parâmetro (pois este valor será alterado se o bit passar de 1 para 0)

	roll %cl, %edx			# Roda os bits para a esquerda de forma a colocar o bit 0 da máscara na posição desejada

	andl %edx, (%rdi)
	cmpl %r8d, (%rdi)		# Compara o valor original com o valor agora obtido através da aplicação da máscara
	je reset_bit_end		# Se forem iguais, significa que o bit na posição desejada já se encontrava a 0
	
	movl $1, %eax			# Caso o bit seja alterado

reset_bit_end:				# Etiqueta que representa as instruções finais da função
	ret
