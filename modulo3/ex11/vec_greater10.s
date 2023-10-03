.section .data
	.global ptrvec		  		# Apontador que conhece o endereço do valor inicial do array				
	.global num				# Variável global declarada no main.c que representa o número de elementos que existem no array
	.equ NUM_BYTES_TO_ADD, 4		# Constante que representa o número de bytes a adicionar ao apontador
	.equ VALUE, 10				# Constante que representa o valor a ser encontrado

.section .text
	.global vec_greater10 			# int vec_greater10(void)

vec_greater10:
	movl $0, %eax				# Coloca o valor 0 no registo %eax
	movq ptrvec(%rip), %rdx			# Coloca o valor do apontador no registo %rdx (8 bytes)
	movl num(%rip), %ecx			# Coloca o valor da variável num no registo %ecx (4 bytes)
	
	cmpl $0, %ecx				# Compara o valor 0 com o valor presente no registo %ecx
	jle end					# Caso o valor do registo %ecx seja menor ou igual a 0, salta para as instruções finais da função
	
loop_vec_greater10:
	movl (%rdx), %esi			# Coloca o valor apontado atual pelo registo %rdx no registo %esi (4 bytes)
	addq $NUM_BYTES_TO_ADD, %rdx		# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)
	
	cmpl $VALUE, %esi			# Compara o valor presente no registo %esi com o valor presente na constante VALUE para saber se é encontrada esse valor
	jg greater10				# Caso o valor do registo %esi seja maior que o da constante VALUE, salta para as intruções greater10
	
	loop loop_vec_greater10			# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada
	
	jmp end					# Salta para as instruções finais da função
		
greater10:
	incl %eax				# Incrementa um ao registo %eax
	loop loop_vec_greater10			# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada

end:
	ret
