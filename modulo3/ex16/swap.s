.section .data

	.global ptr1		# Apontador declarado na main.c que aponta para o primeiro valor da primeira string
	.global ptr2		# Apotnador declarado na main.c que aponta para o primeiro valor da segunda string
	.global num		# Variável global declarada na main.c que representa o número total de valores que os arrays apontados por prt1 e ptr2 têm

.section .text

	.global swap		# void swap()

swap:				# Etiqueta que representa o início das instruções da função swap()
	movslq num(%rip), %rcx	# Coloca o valor representado pela variável num no registo %rcx extendendo o sinal de num
	cmpq $0, %rcx		# Compara o valor 0 com o valor presente no registo %rcx para saber se os arrays contem algum elemento
	je swap_end		# Se os arrays não contiverem nenhum elemento (0), salta para as instruções finais da função
	
	movq ptr1(%rip), %rax	# Coloca o valor do apontador ptr1 no registo %rax
	movq ptr2(%rip), %rdx	# Coloca o valor do apontador ptr2 no registo %rdx

swap_loop_strings:		# Etiqueta que representa o início das intruções para percorrer os arrays e trocar os valores de um para o outro
	movb (%rax), %sil	# Coloca o valor apontado pelo registo %rax no registo %sil
	movb (%rdx), %dil	# Coloca o valor apontado pelo registo %rdx no registo %dil
	movb %sil, (%rdx)	# Coloca o valor presente no registo %sil no valor apontado pelo registo %rdx
	movb %dil, (%rax)	# Coloca o valor presente no registo %dil no valor apontado pelo registo %rax

	incq %rax		# Incrementa 1 byte ao registo %rax para que o apontador aqui presente aponte para a próxima posição do array
	incq %rdx		# Incrementa 1 byte ao registo %rdx para que o apontador aqui presente aponte para a próxima posição do array

	loop swap_loop_strings	# Decrementa 1 ao registo %rcx e salta para a etiqueta swap_loop_strings se o valor presente no registo %rcx for diferente de 0

swap_end:			# Etiqueta que representa o início das intruções finais da função swap()
	ret
