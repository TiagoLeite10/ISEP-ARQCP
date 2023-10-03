.section .data

	.global x				# Variável global declarada na main.c que representa o valor que será verificado se existe mais do que uma vez no array
	.global ptrvec				# Apontador declarado na main.c que conhece o endereço do valor inicial do array que irá ser analisado
	.global num				# Variável global declarada na main.c que representa o número de elementos existentes no array
	.equ MAX_ALLOWED_VALUES, 1 		# Constante que representa o número máximo de valores igauis a x repetidos que o array pode ter
	.equ BYTES_TO_ADD, 4			# Constante que representa o número de bytes a adicionar ao apontador para que este aponte para o próximo valor do array

.section .text
	
	.global exists				# int exists(void)

exists:						# Etiqueta que representa o início das instruções da função exists
	movl $0, %eax				# Coloca o valor 0 o registo %eax, que será onde iremos colocar 0 se o valor x não estiver duplicado, ou 1 se estiver (no final antes de dar return)
	movl num(%rip), %ecx			# Coloca o valor da variável num no registo %ecx que irá representar os número de iterações a realizar para percorrer o array
	cmpl $1, %ecx				# Verifica se só existe apenas um valor ou menos no array, e se assim for, não vale a pena fazer a verificação se existem valores repetidos
	jle exists_end				# Se a condição anterior se verificar, salta a execução do programa para a etiqueta indicada

	movq ptrvec(%rip), %rdx 		# Coloca o valor presente no apontador ptrvec no registo %rdx
	
	movl x(%rip), %esi			# Coloca o valor da variável x no registo %esi. Este registo irá representar o valor a verificar se existe em duplicado no array

exists_loop_array:				# Etiqueta que representa as intruções a realizar ao percorrer o array
	cmpl %esi, (%rdx)			# Compara o valor apontado pelo registo %rdx com o valor presente no registo %esi
	jne exists_loop_prepare_next_iteration	# Se os dois valores anteriores não forem iguais, salta a execução do programa para a etiqueta indicada
	
	incl %eax				# Incrementa 1 ao registo %eax de forma a dizer que foi encontrado um valor igual àquele que estamos a analisar
	
	cmp $MAX_ALLOWED_VALUES, %eax		# Se a contagem de valores iguais for maior a MAX_ALLOWED_VALUES quer dizer que já temos mais do que os valores repetidos permitidos naquele array
	jg exists_duplicated			# Se houver mais valores iguais do que o permitido, saltar para a etiqueta em que existe as instruções para tratar este cenário

exists_loop_prepare_next_iteration: 		# Etiqueta que representa as intruções que preparam os registos para a próxima iteração
	addq $BYTES_TO_ADD, %rdx		# Adicionar o número de bytes representado pela constante BYTES_TO_ADD ao registo %rdx que é um apontador para que este aponte para o próximo valor inteiro do array
	loop exists_loop_array			# Decrementa em 1 o valor presente no registo %rcx e enquanto este registo não tiver o valor 0, salta a execução do programa para a etiqueta indicada

	movl $0, %eax				# Coloca o valor 0 no registo %eax devido ao valor não se encontrar duplicado no array
	jmp exists_end				# Salta a execução do programa incondicionalmente para a etiqueta indicada

exists_duplicated:				# Etiqueta que representa as intruções caso o valor x esteja duplicado no array
	movl $1, %eax				# Coloca o valor 1 no registo %eax devido ao valor se encontrar duplicado no array

exists_end:					# Etiqueta que representa as instruções finais da função exists
	ret
