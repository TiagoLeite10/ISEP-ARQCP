.section .data
	.equ SHIFT_1_BYTE, 8 			# Constante que representa o número de bits a avançar para se dar shift de um byte a um valor
	.equ SECOND_BYTE_MASK, 0xff00		# Constante que representa a máscara para conseguirmos obter os valores do segundo byte através do uso do operador bitwise AND

.section .text
	.global sum_multiples_x			# int sum_multiples_x(char *vec, int x)

sum_multiples_x:
	
	movl %esi, %ecx				# %ecx = x
	andl $SECOND_BYTE_MASK, %ecx		# %ecx = %ecx & SECOND_BYTE_MASK
	shrl $SHIFT_1_BYTE, %ecx		# %ecx = %ecx >> SHIFT_1_BYTE. O registo %cl fica com os valores dos bits do segundo byte do valor da variável x
	
	movl $0, %r9d				# %r9d ira representar a soma dos valores que satisfazem a condição necessária

sum_multiples_x_loop:
	movb (%rdi), %r8b			# %r8b fica com o valor atual do array que o apontador está a apontar

	cmpb $0, %r8b				# Verifica se chegou ao fim do array
	je sum_multiples_x_end
	
	movb %r8b, %al				# %al -> quociente da divisão
	cbw					# extende o sinal do dividendo, de byte para word
	divb %cl				# Divide %al por %cl. O resto fica no registo %ah

	cmpb $0, %ah				# Verifica se o resto da divisão deu 0 (se sim, significa que %al é múltiplo de %cl)
	jne sum_multiples_x_loop_continuation
	
	movsbl %r8b, %r8d			# Extende o sinal do valor, de byte para long (1 byte para 4 bytes), a somar
	addl %r8d, %r9d				# %r9d = %r9d + %r8d
	
sum_multiples_x_loop_continuation:
	incq %rdi				# Soma 1 byte ao apontador presente no registo %rdi para que este aponte para o próximo valor do array
	jmp sum_multiples_x_loop

sum_multiples_x_end:
	movl %r9d, %eax				# Coloca a soma total dos valores, que satisfizeram a condição necessária, no registo de retorno (registo %eax)
	ret
