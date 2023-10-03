.section .data
	.global ptrvec		  			# Apontador que conhece o endereço do valor inicial do array
	.global num					# Variável global declarada no main.c que representa o número de elementos que existem no array
	.equ NUM_BYTES_TO_ADD, 2			# Constante que representa o número de bytes a adicionar ao apontador

.section .text
	.global keep_positives 				# void keep_positives(void)

keep_positives:
	movq ptrvec(%rip), %rax				# Coloca o valor do apontador no registo %rax (8 bytes)
	movw num(%rip), %cx				# Coloca o valor da variável num no registo %cx (2 bytes)
	movw $0, %dx					# Coloca o valor 0 no registo %dx (2 bytes)
	
loop_keep_positives:
	cmpw %cx, %dx					# Compara o valor do registo %dx com o valor presente no registo %cx
	je end						# Caso o valor do registo %dx seja igual valor do registo %cx, salta para as instruções finais
	
	movw (%rax), %si				# Coloca o valor apontado atual pelo registo %rax no registo %si (2 bytes)
	cmpw $0, %si					# Compara o valor presente no registo %si com o valor $0 para saber se este é um número negativo
	js replace 					# Caso seja um número negativo, salta para a etiqueta replace para substituir o valor atualmente apontado pelo índice do array
	
next_position:
	addq $NUM_BYTES_TO_ADD, %rax			# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rax (para ficar a apontar para o próximo valor necessário)
	incw %dx					# Incrementa um ao registo %dx
	jmp loop_keep_positives				# Salta novamente para a etiqueta loop_keep_positives						
	
replace:
	movw %dx, (%rax)				# Coloca o valor do registo %dx no valor apontado pelo registo %rax
	jmp next_position				# Salta para a etiqueta next_position

end:
	ret
