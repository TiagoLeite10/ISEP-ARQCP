.section .data
	.global ptrvec		  			# Apontador que conhece o endereço do valor inicial do array	
	.global num					# Variável global declarada no main.c que representa o número de elementos que existem no array
	.global even					# Variável global declarada no main.c que representa o número a analisar para saber se é par ou não
	.equ NUM_BYTES_TO_ADD, 8			# Constante que representa o número de bytes a adicionar ao apontador				

.section .text
	.global vec_sum_even				# long vec_sum_even(void)
	
vec_sum_even:
		movq ptrvec(%rip), %rdx			# Coloca o valor do apontador no registo %rdx (8 bytes)
		movl num(%rip), %ecx			# Coloca o valor da variável num no registo %ecx (4 bytes)
		movq $0, %rsi				# Coloca o valor 0 no registo %rsi (8 bytes)
		
		cmpl $0, %ecx				# Compara o valor 0 com o valor presente no registo %ecx
		jle end					# Caso o valor do registo %ecx seja menor ou igual a 0, salta para as instruções finais da função
	
loop_vec_sum_even:
		movq (%rdx), %rax			# Coloca o valor apontado atual pelo registo %rdx no registo %rax (8 bytes)
		movq %rax, even(%rip)			# Coloca o valor contido em %rax na variável global even
		
		pushq %rdx				# Guarda o registo %rdx na stack
		pushq %rcx				# Guarda o registo %rcx na stack
		pushq %rsi				# Guarda o registo %rsi na stack
		call test_even				# Chama a funcao test_even e guarda o valor retornado em %rax
		popq %rsi				# Restaura o registo %rsi
		popq %rcx				# Restaura o registo %rcx
		popq %rdx				# Restaura o registo %rdx
		
		cmpq $0, %rax				# Compara o valor 0 com o valor presente no registo %rax para verificar se o número é par ou não
		je sum_even				# Caso o valor do registo %rax seja igual a 0 o número é par e salta para a etqiqueta sum_even
				
		addq $NUM_BYTES_TO_ADD, %rdx		# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)
		loop loop_vec_sum_even			# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada
		
		jmp end					# Salta para as instruções finais da função
		
sum_even:
		addq (%rdx), %rsi			# Adiciona o valor apontado pelo registo %rdx ao registo %rsi
		
		addq $NUM_BYTES_TO_ADD, %rdx		# Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)	
		loop loop_vec_sum_even			# Decrementa um ao valor presente no registo %rcx e salta de novo para a etiqueta indicada

end:
		movq %rsi, %rax				# Coloca o valor contido em %rsi que contêm a soma de todos os número pares em %rax
		ret
