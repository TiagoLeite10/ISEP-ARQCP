.section .data
	.global ptrvec		  			# Apontador que conhece o endereço do valor inicial do array  					
	.global num					# Variável global declarada no main.c que representa o número de elementos que existem no array
	.equ NUM_BYTES_TO_ADD, 2			# Constante que representa o número de bytes a adicionar ao apontador

.section .text
	.global array_sort 				# void array_sort(void)

array_sort:
	movq ptrvec(%rip), %rax				# Coloca o valor do apontador no registo %rax (8 bytes)
	movq ptrvec(%rip), %rcx				# Coloca o valor do apontador no registo %rcx (8 bytes)
	movl num(%rip), %edx				# Coloca o valor da variável num no registo %edx (4 bytes)
	movl num(%rip), %esi				# Coloca o valor da variável num no registo %esi (4 bytes)
	
	cmpl $0, %edx					# Compara o valor 0 com o valor presente no registo %edx
	jle end						# Caso o valor do registo %edx seja menor ou igual a 0, salta para as instruções finais da função
	
loop_array_sort:
	cmpl $0, %esi					# Compara o valor 0 com o valor presente no registo %esi
	je decrement					# Caso o valor do registo %esi seja igual a 0, salta para a etiqueta decrement
	
	decl %esi					# Decrementa um ao valor apontado pelo registo %esi

	movw (%rax), %r8w				# Coloca o valor apontado atual pelo registo %rax no registo %r8w (2 bytes)
	movw (%rcx), %r9w				# Coloca o valor apontado atual pelo registo %rcx no registo %r9w (2 bytes)
	
	cmpw %r8w, %r9w					# Compara o valor contido no registo %r8w com o de %r9w para verificar se é necessário trocar os números
	jg switch_numbers				# Caso o valor contido no registo %r9w seja maior do que o do registo %r8w salta para a etiqueta switch_numbers
	
	addq $NUM_BYTES_TO_ADD, %rcx			# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rcx (para ficar a apontar para o próximo valor necessário)
	jmp loop_array_sort				# Salta novamente para a etiqueta loop_array_sort
	
decrement:
	decl %edx					# Decrementa um ao valor apontado pelo registo %edx
	
	cmpl $0, %edx					# Compara o valor 0 com o valor presente no registo %edx
	je end						# Caso o valor do registo %edx seja igual a 0, salta para as instruções finais da função
	
	addq $NUM_BYTES_TO_ADD, %rax			# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rax (para ficar a apontar para o próximo valor necessário)
	movq %rax, %rcx					# Coloca o valor do apontador do array das frequências de %rax em %rcx para que este volte a apontar para o elemento apontado por %rax
	
	movl %edx, %esi					# Coloca o valor contido no registo %edx em %esi	
	
	jmp loop_array_sort				# Salta novamente para a etiqueta loop_array_sort

switch_numbers:
	movw %r8w, (%rcx)				# Coloca o valor contido no registo %r8w no valor apontado atualmente pelo registo %rcx para haver a trocar dos números
	movw %r9w, (%rax)				# Coloca o valor contido no registo %r9w no valor apontado atualmente pelo registo %rax para haver a trocar dos números

	addq $NUM_BYTES_TO_ADD, %rcx			# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rcx (para ficar a apontar para o próximo valor necessário)
	jmp loop_array_sort				# Salta novamente para a etiqueta loop_array_sort

end:
	ret
