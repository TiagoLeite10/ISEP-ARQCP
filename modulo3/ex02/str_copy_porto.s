.section .data

	.global ptr1				# Apontador para o início da string original, declarado na main.c
	.global prt2				# Apontador para o início da nova string, declarado na main.c
	.equ CHAR_TO_REPLACE, 'o'		# Constante que representa o caracter a ser substituído por CHAR_THAT_WILL_REPLACE
	.equ CHAR_THAT_WILL_REPLACE, 'u'	# Constante que representa o caracter que irá substituir o caracter CHAR_TO_REPLACE

.section .text

	.global str_copy_porto			# void str_copy_porto(void)

str_copy_porto:
	movq ptr1(%rip), %rsi			# Coloca o valor do apontador ptr1 no registo %rsi
	movq ptr2(%rip), %rdi			# Coloca o valor do apontador ptr2 no registo %rdi
	movl $0, %eax				# Coloca o valor 0 no registo %eax

loop_string:					# Etiqueta que representa o início as instruções para percorrer toda a string
	movb (%rsi), %cl			# Coloca o valor apontado atual pelo registo %rsi (caracter, 1 byte) no registo %cl
	
	cmpb $CHAR_TO_REPLACE, %cl		# Compara o caracter CHAR_TO_REPLACE com o caracter atual do registo %cl para saber se irá ser preciso trocá-lo pelo caracter CHAR_THAT_WILL_REPLACE
	je replace_chars			# Se o caracter for igual a CHAR_TO_REPLACE, saltar a execução para a etiqueta indicada

loop_string_continuation:			# Continuação das instruções para tratar a troca dos caracteres de uma string presente num apontador para outro
	movb %cl, (%rdi)			# Move o caracter presente no registo %cl para o endereço apontado pelo registo %rdi
	cmpb $0, %cl				# Compara o valor do caracter atualmente a ser tratado, presente no registo %cl, para saber se já chegou ao final da string
	je end					# Se chegou ao final da string, ir para as instruções finais
	
	incl %eax				# Incrementa um ao valor do registo %eax
	incq %rsi				# Incrementa um ao apontador presente no registo %rsi (ptr1)
	incq %rdi				# Incrementa um ao apontador presente no registo %rdi (ptr2)
	jmp loop_string				# Salta incondicionalmente novamente para a etiqueta indicada para continuar a percorrer a string

replace_chars:					# Etiqueta que representa as intruções para trocar o caracter CHAR_TO_REPLACE pelo caracter CHAR_THAT_WILL_REPLACE
	movb $CHAR_THAT_WILL_REPLACE, %cl	# Colocar o caracter CHAR_THAT_WILL_REPLACE no registo %cl
	jmp loop_string_continuation		# Salta para o local onde existe a continuação das intruções para a trocar do caracter de apontador

end:						# Etiqueta que representa o final das instruções
	ret
