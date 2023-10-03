.section .data
	.equ NUM_BYTES_TO_ADD, 4			# Constante que representa o número de bytes a adicionar ao apontador
	.equ MASK, 0xFFFFFF00				# Constante que representa a máscara para "limpar" o primeiro byte

.section .text
	.global add_byte 				# void add_byte(char x, int *vec1, int *vec2);

add_byte:
	movl (%rsi), %ecx				# Coloca o valor apontado atualmente pelo registo %rsi (vec1) que corresponde ao número de inteiros do vetor no registo %ecx (4 bytes)
	movl %ecx, (%rdx)				# Coloca o valor contido no registo %ecx no valor apontado atualmente pelo registo %rdx (vec2)
	
	cmpl $0, %ecx					# Compara o valor 0 com o valor presente no registo %ecx
	jle add_byte_end				# Caso o valor do registo %ecx seja menor ou igual a 0, salta para as instruções finais da função
	
add_byte_loop:
	addq $NUM_BYTES_TO_ADD, %rsi			# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rsi (para ficar a apontar para o próximo valor necessário)
	addq $NUM_BYTES_TO_ADD, %rdx			# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)
	
	movl (%rsi), %eax				# Coloca o valor apontado atualmente pelo registo %rsi (vec1) no registo %eax
	movl %eax, (%rdx)				# Coloca o valor contido no registo %eax no valor apontado atualmente pelo registo %rdx (vec2)
	andl $MASK, (%rdx)				# Realiza a operação and entre o valor apontado atualmente pelo registo %rdx (vec2) e a máscara para "limpar" o primeiro byte
	
	addb %dil, %al					# Adiciona o valor representado pelo registo %sil (x) ao valor representado pelo registo %al (primeiro byte de vec1)
	orb %al, (%rdx)					# Realiza a operação or entre o valor apontado pelo registo %rdx (vec2) e o registo %al que correspondente à soma entre x e o primeiro byte de vec1

	loop add_byte_loop				# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada
	
add_byte_end:				
	ret
