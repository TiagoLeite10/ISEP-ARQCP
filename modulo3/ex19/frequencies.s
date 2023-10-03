.section .data
	.global ptrgrades				# Apontador que conhece o endereço do valor inicial do array das notas
	.global ptrfreq	  				# Apontador que conhece o endereço do valor inicial do array das frequências
	.global num					# Variável global declarada no main.c que representa o número de elementos que existem no array das notas
	.equ NUM_BYTES_TO_ADD, 4			# Constante que representa o número de bytes a adicionar ao apontador
	.equ NUM_FREQUENCIES, 21			# Constante que representa o número de frequências existentes

.section .text
	.global frequencies 				# void frequencies(void)

frequencies:
	movq ptrgrades(%rip), %rdi			# Coloca o valor do apontador do array das notas no registo %rdi (8 bytes)
	movq ptrfreq(%rip), %rdx			# Coloca o valor do apontador do array das frequências no registo %rdx (8 bytes)
	movq ptrfreq(%rip), %rsi			# Coloca o valor do apontador do array das frequências no registo %rsi (8 bytes)
	movl $NUM_FREQUENCIES, %ecx			# Coloca o valor representado pela constante NUM_FREQUENCIES no registo %ecx (4 bytes)

set_frequencies_zero_loop:
	movl $0, (%rdx)					# Coloca o valor 0 no valor apontado pelo registo %rax para inicializar a posição atual do apontador do array das frequências
	addq $NUM_BYTES_TO_ADD, %rdx			# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)

	loop set_frequencies_zero_loop			# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada
	
	movl num(%rip), %ecx				# Coloca o valor da variável num no registo %ecx (4 bytes)
	cmpl $0, %ecx					# Compara o valor 0 com o valor presente no registo %ecx
	jle end						# Caso o valor do registo %ecx seja menor ou igual a 0, salta para as instruções finais da função
	
frequencies_loop:	
	movb (%rdi), %al				# Coloca o valor apontado atual pelo registo %rdi no registo %al (2 bytes)
	movq %rsi, %rdx					# Coloca o valor do apontador do array das frequências de %rsi em %rdx para que este volte a apontar para o primeiro elemento do array de frequências
	
search_frequency:
	cmpb $0, %al					# Compara o valor 0 com o valor presente no registo %al para verificar se %rdx já está a apontar para o elemento certo a incrementar do array
	je increment					# Caso o valor contido em %al seja igual a 0 salta para increment

	addq $NUM_BYTES_TO_ADD, %rdx			# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)
	decb %al					# Decrementa um ao valor apontado pelo registo %al
	jmp search_frequency				# Salta para a etiqueta search_frequency para continuar a verificar se o próximo elemento do array corresponde à frequência em questão a ser incrementada
	
increment:	
	incq (%rdx)					# Incrementa um ao valor apontado pelo registo %rdx
	
	incq %rdi					# Incrementa um ao registo %rdi (para ficar a apontar para o próximo valor necessário)
	loop frequencies_loop				# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada

end:
	ret

