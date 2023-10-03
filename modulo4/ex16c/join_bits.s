.section .data
	.equ MAX_POS, 31 		# Constante que representa a posição máxima de um bit
	.equ MIN_POS, 0			# Constante que representa a posição mínima de um bit

.section .text
	.global join_bits		# int join_bits(int a, int b, int pos)

join_bits:				# Etiqueta que representa o início das intruções da função
	movl $0, %eax
	
	cmpl $MAX_POS, %edx		# Verifica se a variável pos contem um valor acima do permitido
	jg join_bits_end

	cmpl $MIN_POS, %edx		# Verifica se a variável pos contem um valor abaixo do permitido
	jl join_bits_end

	movl $0, %r8d			# Máscara com valor binário 00000000000000000000000000000000
	
	cmpl $MAX_POS, %edx		# Se o valor de pos for o valor máximo, podemos logo aplicar uma máscara com os bits todos a 0
	je join_bits_operations
	
	movl %edx, %ecx			# %ecx = pos
	
	movl $-1, %r8d			# Máscara com valor binário 11111111111111111111111111111111
		
	incb %cl			# Incrementa 1 para que sejam feitos todos os shifts necessários

	shll %cl, %r8d			# mascara <<= pos

join_bits_operations:
	
	andl %r8d, %esi			# b = b & mascara

	movl %esi, %eax			# %eax = b
	
	notl %r8d			# ~mascara
	
	andl %r8d, %edi			# a = a & mascara
	
	addl %edi, %eax			# %eax = %eax + a

join_bits_end:
	ret
