.section .data
	.global ptrvec				# Apontador que conhece o endereço do valor inicial do array		  				
	.global num				# Variável global declarada no main.c que representa o número de elementos que existem no array
	.equ NUM_BYTES_TO_ADD, 8		# Constante que representa o número de bytes a adicionar ao apontador

.section .text
	.global sum_first_byte 			# int sum_first_byte()

sum_first_byte:
	movl $0, %eax				# Coloca o valor 0 no registo %eax (4 bytes)
	movq ptrvec(%rip), %rdx			# Coloca o valor do apontador no registo %rdx (8 bytes)
	movl num(%rip), %ecx			# Coloca o valor da variável num no registo %ecx (4 bytes)
	
	cmpl $0, %ecx				# Compara o valor 0 com o valor presente no registo %ecx
	jle end					# Caso o valor do registo %ecx seja menor ou igual a 0, salta para as instruções finais da função
	
loop_sum_first_byte:	
	movb (%rdx), %sil			# Coloca o valor apontado atual pelo registo %rdx no registo %sil (2 bytes)
	movsbl %sil, %edi			# Coloca o registo %sil em %edi com extensão de sinal (8 bits para 32 bits)
	addl %edi, %eax				# Adiciona o valor representado pelo registo %edi ao valor representado pelo registo %eax
	
	addq $NUM_BYTES_TO_ADD, %rdx		# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)	
	
	loop loop_sum_first_byte		# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada

end:
	ret
