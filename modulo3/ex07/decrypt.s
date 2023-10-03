.section .data

	.equ DECRYPT_VALUE, -3			# Constante que representa o valor a ser utilizado na desencriptação da string
	.equ NO_ENCRYPT_VALUE_ONE, 'a'	# Constante que representa o caracter que não deve ser encriptado (um)
	.equ NO_ENCRYPT_VALUE_TWO, ' '	# Constante que representa o caracter que não deve ser encriptado (dois)
	.global ptr1				# Apontador global declarado na main.c que aponta para o início do array de caracteres (string)

.section .text

	.global decrypt				# int decrypt(void)

decrypt:					# Etiqueta que representa o início das instruções da função decrypt
	movq ptr1(%rip), %rcx			# Coloca o valor do apontador no registo %rcx
	movq $0, %rax				# Coloca o valor 0 no registo %rax (irá ser o contador de caracteres desencriptados)

decrypt_loop_string:				# Etiqueta que representa o início das instruções da função decrypt
	movb (%rcx), %dl			# Coloca o valor apontado pelo registo %rcx no registo %dl (caractere)
	
	cmpb $0, %dl				# Compara o valor 0 com o valor presente no registo %dl
	je decrypt_end				# Se o valor presente no registo %dl for igual a 0, significa que chegou ao fim da string. A execução do programa salta para a etiqueta indicada

	cmpb $NO_ENCRYPT_VALUE_ONE, %dl		# Compara o valor ASCII do caracter presente na constante NO_ENCRYPT_VALUE_ONE com o valor presente no registo %dl
	je decrypt_loop_after_decrypt		# Se os valores forem iguais, salta a execução do programa para a etiqueta indicada

	cmpb $NO_ENCRYPT_VALUE_TWO, %dl		# Compara o valor ASCII do caracter presente na constante NO_ENCRYPT_VALUE_TWO com o valor presente no registo %dl
	je decrypt_loop_after_decrypt		# Se os valores forem iguais, salta a execução do programa para a etiqueta indicada

	addb $DECRYPT_VALUE, %dl		# Adiciona ao valor presente no registo %dl o valor representado pela constante DECRYPT_VALUE para realizar a desencriptação do caracter

	movb %dl, (%rcx)			# Coloca o valor presente no registo %dl no local apontado pelo registo %rcx

	incq %rax				# Incrementa 1 ao registo %rax, pois foi desencriptado um novo caracter

decrypt_loop_after_decrypt:			# Etiqueta que representa as intruções a realizar após um caracter ser desencriptado (ou não)

	incq %rcx				# Incrementa 1 byte ao apontador presente no registo %rcx para que este apontador aponte para o próximo caracter

	jmp decrypt_loop_string			# Volta à etiqueta indicada para continuar a percorrer os caracteres da string (continuar a fazer o loop à string)

decrypt_end:					# Etiqueta que representa as intruções finais da função decrypt()
	ret
