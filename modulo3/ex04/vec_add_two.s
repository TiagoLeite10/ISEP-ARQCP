.section .data
	
	.equ VALUE_TO_ADD, 2		# Constante que representa o valor a ser somado
	.equ NUM_BYTES_TO_ADD, 4	# Constante que representa o número de bytes a adicionar ao apontador
	.global num			# Variável global declarada no main.c que representa o número de elementos que existem no array
	.global ptrvec			# Apontador que conhece o endereço do valor inicial do array

.section .text
	
	.global vec_add_two 		# void vec_add_two(void)

vec_add_two:				# Etiqueta que representa o início das instruções da função void vec_add_two()
	movl num(%rip), %ecx		# Coloca o valor da variável num no registo %ecx (4 bytes)
	movq ptrvec(%rip), %rax		# Coloca o valor do apontador no registo %rax
	cmpl $0, %ecx			# Compara o valor 0 com o valor presente no registo %ecx
	jle vec_add_two_end		# Caso o valor do registo %ecx seja menor ou igual a 0, salta para as instruções finais da função

vec_add_two_loop:			# Etiqueta que representa o código a ser repetido um dado número de vezes (lopp)
	
	addl $VALUE_TO_ADD, (%rax)	# Adiciona o valor representado pela constante VALUE_TO_ADD ao valor apontado pelo registo %rax
	addq $NUM_BYTES_TO_ADD, %rax	# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rax (para ficar a apontar para o próximo valor necessário)

	loop vec_add_two_loop		# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada

vec_add_two_end:			# Etiqueta que representa as intruções finais da função vec_add_two
	ret
