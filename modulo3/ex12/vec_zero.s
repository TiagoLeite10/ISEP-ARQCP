.section .data
	.global ptrvec				# Apontador que conhece o endereço do valor inicial do array		  				
	.global num				# Variável global declarada no main.c que representa o número de elementos que existem no array
	.equ NUM_BYTES_TO_ADD, 4		# Constante que representa o número de bytes a adicionar ao apontador
	.equ VALUE, 100				# Constante que representa o número a verificar
	.equ VALUE_PLACE, 0			# Constante que representa o número a colocar

.section .text
	.global vec_zero 			# unsigned char vec_zero(void);

vec_zero:
	movb $0, %al				# Coloca o valor 0 no registo %al (1 byte)
	movq ptrvec(%rip), %rdx			# Coloca o valor do apontador no registo %rdx (8 bytes)
	movl num(%rip), %ecx			# Coloca o valor da variável num no registo %ecx (4 bytes)
	
	cmpl $0, %ecx				# Compara o valor 0 com o valor presente no registo %ecx
	jle end					# Caso o valor do registo %ecx seja menor ou igual a 0, salta para as instruções finais da função
	
loop_vec_zero:
	movl (%rdx), %esi			# Coloca o valor apontado atual pelo registo %rdx no registo %esi (4 bytes)
	cmpl $VALUE, %esi			# Compara o valor presente no registo %esi com o valor presente na constante VALUE para saber se é encontrada esse valor
	jge greater_or_equals_100		# Caso o valor do registo %esi seja maior ou igual que o da constante VALUE, salta para as intruções greater_or_equals_100
	
	addq $NUM_BYTES_TO_ADD, %rdi		# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)
	loop loop_vec_zero			# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada
		
	jmp end					# Salta para as instruções finais da função
	
greater_or_equals_100:
	movl $VALUE_PLACE, (%rdx)		# Coloca o valor representado pela constante VALUE_PLACE ao valor apontado pelo registo %rdx 
	incb %al				# Incrementa um ao registo %al
	
	addq $NUM_BYTES_TO_ADD, %rdx		# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)
	loop loop_vec_zero			# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada

end:
	ret
