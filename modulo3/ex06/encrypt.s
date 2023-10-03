.section .data

	.equ ENCRYPT_VALUE, 3		# Constante que representa o valor a ser adicionado na encriptação dos caracteres
	.equ NO_ENCRYPT_VALUE_ONE, 'a'	# Constante que representa o caracter que não deve ser encriptado (um)
	.equ NO_ENCRYPT_VALUE_TWO, ' '	# Constante que representa o caracter que não deve ser encriptado (dois)
	.global ptr1			# Apontador global declarado na main.c que aponta para o início de uma string

.section .text

	.global encrypt 		# int encrypt(void)

encrypt:				# Etiqueta que representa o início das instruções da função int encrypt(void)
	movq ptr1(%rip), %rcx		# Coloca o valor do apontador ptr1 no registo %rcx
	movl $0, %eax			# O registo %eax irá representar o contador de caracteres alterados
	
encrypt_loop_string:			# Etiqueta que representa as instruções que devem ser realizadas para cada caracter da string (loop por todos os caracteres)
	movb (%rcx), %dl		# Coloca o caracter (valor) atual apontado por o registo %rcx no registo %dl
	
	cmpb $0, %dl			# Verifica se o caracter presente no registo %dl representa o final da string
	je encrypt_end			# Se representar o final da string, saltar para as intruções finais

	cmpb $NO_ENCRYPT_VALUE_ONE, %dl	# Verifica se o valor ASCII presente no registo %dl corresponde ao valor ASCII do caracter presente na constante NO_ENCRYPT_VALUE_ONE
	je encrypt_loop_after_encrypt	# Se a condição anterior se verificar, salta a execução para a etiqueta indicada
	
	cmpb $NO_ENCRYPT_VALUE_TWO, %dl	# Verifica se o valor ASCII presente no registo %dl é o valor ASCII do caracter presente na constante NO_ENCRYPT_VALUE_TWO
	je encrypt_loop_after_encrypt	# Se a condição anterior se verificar, salta a execução para a etiqueta indicada
	
	addb $ENCRYPT_VALUE, %dl	# Adiciona o valor de encriptação ao valor presente no registo %dl
	
	movb %dl, (%rcx)                # Coloca o caracter presente no registo %dl no local apontado atualmente pelo registo %rcx

	incl %eax			# Incrementa 1 ao valor presente no registo %eax, que representa o número de caracteres encriptados

encrypt_loop_after_encrypt:		# Etiqueta que representa as intruções a realizar após ser realizada a emcriptação necessária
	
	incq %rcx			# Incrementa um ao registo %rcx (1 byte) para que ele aponte para o caracter seguinte da string

	jmp encrypt_loop_string		# Volta à etiqueta indicada onde será tratado o próximo caracter da string

encrypt_end:				# Etiqueta que representa o final da função
	ret
