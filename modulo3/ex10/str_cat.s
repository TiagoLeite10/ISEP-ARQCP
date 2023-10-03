.section .data

	.global ptr1			# Apontador global que aponta para a primeira posição do array com a primeira string a ser concatenada
	.global ptr2			# Apontador global que aponta para a primeira posição do array com a segunda string a ser concatenada
	.global ptr3			# Apontador global que aponta para a primeira posição do array de caracteres que irá conter as duas strings concatenadas

.section .text

	.global str_cat			# void str_cat(void)

str_cat:
	movq ptr1(%rip), %rcx		# Coloca o valor do apontador ptr1 no registo %rcx
	movq ptr2(%rip), %rsi		# Coloca o valor do apontador ptr2 no registo %rsi
	movq ptr3(%rip), %rax		# Coloca o valor do apontador ptr3 no registo %rax

str_cat_loop_string1:			# Etiqueta que representa as instruções a realizar para concatenar a primeira string
	movb (%rcx), %dl		# Move o valor apontado pelo registo %rcx para o registo %dl
	
	cmp $0, %dl			# Compara o valor ASCII do registo %dl com o valor 0, que indica o fim da string
	je str_cat_loop_string2		# Se a condição anterior se verificar, salta para a etiqueta indicada

	movb %dl, (%rax)		# Coloca o valor presente no registo %dl no local apontado pelo registo %rax

	incq %rcx			# Incrementa um byte ao registo %rcx para este apontar para o próximo caracter da string
	incq %rax			# Incrementa um byte ao registo %rax para este apontar para o próximo byte onde será armazenado o novo caracter

	jmp str_cat_loop_string1	# Salta incondicionalmente para a etiqueta indicada para continuar a percorrer os caracteres da primeira string


str_cat_loop_string2:			# Etiqueta que representa as instruções a realizar para concatenar a segunda string
	movb (%rsi), %dl		# Coloca o valor apontado pelo registo %rsi no registo %dl
	movb %dl, (%rax)		# Coloca o valor presente no registo %dl no endereço apontado

	cmp $0, %dl			# Compara o valor ASCII do registo %dl com o valor 0, que indica o fim da string
	je str_cat_end			# Se a condição anterior se verificar, salta para a etiqueta indicada

	incq %rsi			# Incrementa um byte ao registo %rsi para este apontar para o próximo caracter da string
	inc %rax			# Incrementa um byte ao registo %rax para este apontar para o próximo byte onde será armazenado o novo caracter

	jmp str_cat_loop_string2	# Salta incondicionalmente para a etiqueta indicada para continuar a percorrer os caracteres da segunda string

str_cat_end:				# Etiqueta que representa as intruções finais da função str_cat()
	ret
