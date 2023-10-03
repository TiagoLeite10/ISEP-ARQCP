.section .text
	.global distance 				# int distance(char *a, char *b);
	
distance:
	movl $0, %eax					# Coloca o valor 0 no registo %eax (4 bytes)
	
distance_loop:
	movb (%rdi), %cl				# Coloca o valor apontado atual pelo registo %rdi que corresponde ao 1º argumento (*a) no registo %cl (1 byte)
	movb (%rsi), %dl				# Coloca o valor apontado atual pelo registo %rsi que corresponde ao 2º argumento (*b) no registo %dl (1 byte)
	
	incq %rdi					# Incrementa um ao apontador presente no registo %rdi
	incq %rsi					# Incrementa um ao apontador presente no registo %rsi
	
	cmpb $0, %cl					# Verifica se o caracter presente no registo %cl representa o final da string
	je distance_final_comparison 			# Se representar o final da string, salta para a etiqueta indicada para verificar se as duas strings foram percorridas até ao fim
	
	cmpb $0, %dl					# Verifica se o caracter presente no registo %dl representa o final da string
	je distance_final_comparison			# Se representar o final da string, salta para a etiqueta indicada para verificar se as duas strings foram percorridas até ao fim
	
	cmpb %cl, %dl					# Compara o caracter atual do registo %cl com o caracter atual do registo %dl para saber se estes são diferentes
	jne distance_sum				# Se os dois caracteres forem diferentes salta para a etiqueta indicada para incrementar um à distância entre as duas strings
	
	jmp distance_loop				# Salta incondicionalmente novamente para a etiqueta indicada para continuar a percorrer a string
		
distance_sum:
	incl %eax					# Incrementa um ao valor do registo %eax
	jmp distance_loop				# Salta incondicionalmente novamente para a etiqueta indicada para continuar a percorrer a string
	
distance_final_comparison:
	cmpb $0, %cl					# Verifica se o caracter presente no registo %cl representa o final da string
	jne distance_different_length 			# Se não representar o final da string, salta para a etiqueta indicada para indicar que as strings possuem diferentes tamanhos 
	
	cmpb $0, %dl					# Verifica se o caracter presente no registo %dl representa o final da string
	jne distance_different_length			# Se não representar o final da string, salta para a etiqueta indicada para indicar que as strings possuem diferentes tamanhos 
	
	jmp distance_end				# Salta para as instruções finais
	
distance_different_length:
	movl $-1, %eax					# Coloca o valor -1 no registo %eax para indicar que as strings possuem diferentes tamanhos
	
distance_end:				
	ret
