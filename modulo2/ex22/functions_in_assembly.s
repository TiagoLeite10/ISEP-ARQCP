.section .data

	.global i, j 			# Variáveis globais do tipo inteiro (4 bytes), declaradas noutro módulo que implementa este mesmo módulo

.section .text

	.global f_in_assembly 		# int f_in_assembly()
	.global f2_in_assembly		# int f2_in_assembly()
	.global f3_in_assembly		# int f3_in_assembly()
	.global f4_in_assembly		# int f4_in_assembly()

f_in_assembly:				# Etiqueta que representa o início das instruções para a função int f_in_assembly()
	movl i(%rip), %eax		# Coloca o valor da variável i no registo %eax
	cmpl j(%rip), %eax		# Compara o valor do registo %eax com o valor da variável j
	je f_equals_case		# Se os valores forem iguais, salta para a etiqueta f_equals_case
	addl j(%rip), %eax		# Soma o valor da variável j ao valor que se encontra no registo %eax
	subl $1, %eax			# Subtrai 1 ao valor que se encontra no registo %eax
	jmp f_in_assembly_end		# Salta incondicionalmente para a etiqueta f_in_assembly_end

f_equals_case:				# Etiqueta f_equals_case
	subl j(%rip), %eax		# Subtrai o valor da variável j ao valor presente no registo %eax
	addl $1, %eax			# Adiciona 1 ao valor presente no registo %eax

f_in_assembly_end:			# Etiqueta f_in_assembly_end (final das instruções para f_in_assembly)
	ret


# -----------------------------------

f2_in_assembly:				# Etiqueta que representa o início das intruções para a função int f2_in_assembly()
	movl i(%rip), %eax		# Coloca o valor da variável i no registo %eax

	cmp j(%rip), %eax		# Compara o valor do registo %eax com o valor da variável j
	jle f2_i_less_or_equals_i	# Salta a execução para a etiqueta f2_i_less_or_equals_i se o i for menor ou igual ao i
		
	decl i(%rip)			# Decrementa 1 ao valor da variável i
	decl %eax			# Decrementa 1 ao valor presente no registo %eax

	jmp f2_in_assembly_end		# Salta incondicionalmente para as instruções finais desta função

f2_i_less_or_equals_i:
	incl j(%rip)			# Incrementa 1 ao valor da variável j

f2_in_assembly_end:
	imull j(%rip), %eax		# Faz a multiplicação com sinal do registo %eax pelo valor da variável j
	ret

# -----------------------------------

f3_in_assembly:				# Etiqueta que representa o início das instruções para a função int f3_in_assembly()
	movl i(%rip), %eax		# Coloca o valor da variável i no registo %eax
	movl j(%rip), %ecx		# Coloca o valor da variável j no registo %ecx

	cmpl %ecx, %eax			# Compara o valor presente no registo %eax com o valor presente no registo %ecx
	jl f3_i_less_than_j		# Salta para a etiqueta f3_i_less_than_j se o valor presente no registo %eax for menor do que o valor presente no registo %ecx

	imull %eax, %ecx		# Realiza a multiplicação com sinal do valor presente no registo %ecx com o valor do registo %eax

	incl %eax			# Incrementa 1 no registo %eax
	
	jmp f3_in_assembly_end		# Salta incodicionalmente para a etiqueta com as intruções finais da função f3_in_assembly

f3_i_less_than_j:
	addl %eax, %ecx			# Adiciona ao valor do registo %ecx o valor presente no registo %eax
	
	addl j(%rip), %eax		# Adiciona o valor da variável j ao valor presente no registo %eax

	addl $2, %eax			# Adiciona 2 ao valor presente no registo %eax

f3_in_assembly_end:
	cltd				# Extende o sinal do tipo long presente no registo %eax para o tipo quad no registo %edx:%eax
	idivl %ecx			# Realiza a divisão com sinal de %edx:%eax por %ecx
	ret

# -----------------------------------

f4_in_assembly:				# Etiqueta que representa o início das instruções para a função int f4_in_assembly()
	movl i(%rip), %edx			# Coloca o valor da variável i no registo %edx
	addl j(%rip), %edx			# Adiciona o valor da variável j ao valor presente no registo %edx

	cmp $10, %edx				# Compara o valor 10 com o valor presente no registo %edx
	jge i_and_j_greater_equals_than_10	# Se o valor do registo %edx for maior ou igual a 10, salta a execução do programa para a etiqueta i_and_j_greater_equals_than_10
	
	movl $4, %eax				# Coloca o valor 4 no registo %eax
	imull i(%rip), %eax			# Multiplica o valor com sinal da variável i pelo valor presente no registo %eax
	imull i(%rip), %eax
	jmp f4_in_assembly_end			# Salta incondicionalmente para as instruções finais da função f4_in_assembly()

i_and_j_greater_equals_than_10:
	movl j(%rip), %eax			# Coloca o valor da variável j no registo %eax
	imull j(%rip), %eax			# Realiza a multiplicação com sinal entre a variável j e o valor presente no registo %eax
	
	movl $3, %ecx				# Coloca o valor 3 no registo %ecx
	
	cltd					# Extende o sinal do tipo long presente no registo %eax para o tipo quad no registo %edx:%eax
	
	idivl %ecx				# Realiza a divisão com sinal de %edx:%eax por %ecx

f4_in_assembly_end:
	ret

# -----------------------------------
