.section .data
	# None

.section .text
	.global test_equal 	# int test_equal(char *a, char *b)

test_equal:			# Etiqueta que representa o início das instruções da função test_equal
	cmpb $0, (%rdi)		# Verifica se o local da string para onde o apontador %rdi está a apontar, é o seu final
	je end_string		
	movb (%rdi), %dl	# %dl representa o caracter atual da string apontada por %rdi
	movb (%rsi), %cl	# %cl representa o caracter atual da string apontada por %rsi
	
	cmpb %dl, %cl		# Compara os dois caracteres atuais das duas strings
	jne test_equal_failed	

	incq %rdi		# Incremeneta 1 byte ao apontador %rdi para apontar para o próximo caracter da string
	incq %rsi		# Incremeneta 1 byte ao apontador %rsi para apontar para o próximo caracter da string

	jmp test_equal

end_string:			# Etiqueta que representa as instruções caso se detete que a primeira string chegou ao fim. Aqui é confirmado se a segunda string também termina agora, fazendo com que elas sejam iguais, ou não em caso contrário
	cmpb $0, (%rsi)		# Verifica se o local da string para onde o apontador %rsi está a apontar, é o seu final
	jne test_equal_failed
	
	movl $1, %eax		# Se a execução chegar a esta instrução, significa que as strings são iguais

	jmp test_equal_end

test_equal_failed:		# Etiqueta que representa as instruções a serem executadas caso as strings sejam diferentes
	movl $0, %eax		# Significa que as strings não são iguais

test_equal_end:			# Etiqueta que representa as instruções finais da função
	ret
