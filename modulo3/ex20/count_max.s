.section .data

	.global ptrvec				# Apontador global declarado na main.c que conhece o endereço do primeiro elemento do array
	.global num				# Variável global declarada na main.c que representa o número de elementos existentes no array

.section .text

	.global count_max			# int count_max(void)

count_max:					# Etiqueta que representa o início das instruções da função count_max()
	movl $0, %eax				# Coloca o valor 0 no registo %eax
	movslq num(%rip), %rdx			# Move o valor presente na variável num para o registo %rdx, extendendo o seu sinal de long (4 bytes) para quad (8 bytes)
	decq %rdx				# Decrementa um ao valor presente do registo %rdx para que seja possível tratar os valores do array começando na posição 0 do array
	movq ptrvec(%rip), %rsi			# Coloca o valor do apontador ptrvec no registo %rsi
	movq $1, %rcx				# Coloca o valor 1 no registo %rcx que será o registo que sabe para que posição do array estamos a "olhar"

loop_array:					# Etiqueta que representa as instruções que serão realizadas para realizar a análise dos valores presentes no array

	cmpq %rdx, %rcx				# Compara o valor presente no registo %rdx com o valor presente no registo %rcx
	jge count_max_end			# Se o valor presente no registo %rcx for maior ou igual ao valor do registo %rdx, salta para as instruções finais da função
	
	movl (%rsi, %rcx, 4), %edi 		# Copia o valor presente em array[%rcx] para o registo %edi

	cmpl -4(%rsi, %rcx, 4), %edi 		# Compara o valor presente em array[%rcx - 1] com o valor presente no registo %edi
	jle loop_array_prepare_next_iteration 	# Se %edi for menor ou igual, saltar a execução do programa para a etiqueta indicada

	cmpl 4(%rsi, %rcx, 4), %edi 		# Compara o valor presente em array [%rcx + 1] com o valor presente no registo %edi
	jle loop_array_prepare_next_iteration 
	
	incl %eax				# Se a execução chegar até aqui, significa qe se verifica a condição vi < vi+1 > vi+2 para o elemento do array atualmente representado por %edi
	incq %rcx				# Acrescenta um à posição a "olhar" no array. Visto que podemos avançar a posição seguinte do array devido a esta ser menor do que a atual, então esta operação será complementada com mais um incremento na instrução seguinte

loop_array_prepare_next_iteration: 		# Etiqueta que representa as intruções que preparam os registos para a próxima iteração
	incq %rcx				# Incrementa um à posição atual do array
	jmp loop_array				# Salta incondicionalmente para a etiqueta indicada para realizar as instruções para o próximo valor do array a ser estudado

count_max_end:					# Etiqueta que representa as intruções finais da função
	ret
