.section .text
	.global count_odd 		# int count_odd(char *vec, int n);

count_odd:
	movl %esi, %ecx			# Coloca o valor do 2º argumento que está guardado em %esi no registo %ecx (4 bytes)
	movl $0, %esi			# Coloca o valor 0 no registo %esi (4 bytes)
		
	cmpl $0, %ecx			# Compara o valor 0 com o valor presente no registo %ecx
	jle count_odd_end		# Caso o valor do registo %ecx seja menor ou igual a 0, salta para as instruções finais da função
	
loop_count_odd:	
	movb (%rdi), %al		# Coloca o valor apontado pelo apontador presente no registo %rdi em %al (1 byte)
	cbw				# Estende o sinal byte existente no registo %al para word representado no registo %ax
	
	movb $2, %r8b			# Coloca o divisor (valor 2) no registo %r8b (1 byte)	
	idivb %r8b			# Realiza a divisão do valor contido no registo %al por %r8b (resto da divisão no registo %ah)
	
	cmpb $0, %ah			# Compara o valor 0 com o valor presente no registo %al para verificar se o número é ímpar ou não
	jne count_odd_number		# Caso o valor do registo %ah seja diferente de 0 o número é ímpar e salta para a etiqueta count_odd_number
				
	incq %rdi			# Incrementa um ao apontador presente no registo %rdi (para ficar a apontar para o próximo valor necessário)
	loop loop_count_odd		# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada
		
	jmp count_odd_end		# Salta para as instruções finais da função

count_odd_number:
	incl %esi			# Incrementa um ao valor do registo %esi para contar o total de números ímpares do vetor
		
	incq %rdi			# Incrementa um ao apontador presente no registo %rdi (para ficar a apontar para o próximo valor necessário)	
	loop loop_count_odd		# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada

count_odd_end:				# Etiqueta que representa as intruções finais da função
	movl %esi, %eax		 	# Coloca o valor contido em %esi que contêm o total de números ímpares do vetor em %eax
	ret
