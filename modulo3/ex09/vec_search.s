.section .data
	.global ptrvec		  		# Apontador que conhece o endereço do valor inicial do array			
	.global num				# Variável global declarada no main.c que representa o número de elementos que existem no array
	.global x				# Variável global declarada no main.c que representa o número a encontrar
	.equ NUM_BYTES_TO_ADD, 2		# Constante que representa o número de bytes a adicionar ao apontador

.section .text
	.global vec_search 			# short* vec_search(void)

vec_search:
	movq $0, %rax				# Coloca o valor 0 no registo %rax (8 bytes)		
	movq ptrvec(%rip), %rdx			# Coloca o valor do apontador no registo %rdx (8 bytes)
	movl num(%rip), %ecx			# Coloca o valor da variável num no registo %ecx (4 bytes)
	movw x(%rip), %si			# Coloca o valor da variável num no registo %si (2 bytes)
		
	cmpl $0, %ecx				# Compara o valor 0 com o valor presente no registo %ecx
	jle end					# Caso o valor do registo %ecx seja menor ou igual a 0, salta para as instruções finais da função
		
loop_vec_search:
	movw (%rdx), %di			# Coloca o valor apontado atual pelo registo %rdx no registo %di (2 bytes)
	cmpw %si, %di				# Compara o valor presente no registo %si com o valor presente no registo %di para saber se é encontrada a primeira ocorrência
	je first_occurrence			# Se for encontrada a primeira ocorrência, salta para a etiqueta first_occurrence
	
	addq $NUM_BYTES_TO_ADD, %rdx		# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)
	
	loop loop_vec_search			# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada
	
	jmp end					# Salta para as instruções finais da função
	
first_occurrence:
	movq %rdx, %rax				# Coloca o valor atual do apontador %rdx no registo %rax (8 bytes)

end:
	ret
