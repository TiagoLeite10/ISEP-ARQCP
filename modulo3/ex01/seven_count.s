.section .data
	.global ptr1		  			# Apontador para a string, declarado na main.c
	.equ CHARACTER, '7'				# Constante que representa o character a ser verificado

.section .text
	.global seven_count 				# int seven_count(void)

seven_count:
	movq ptr1(%rip), %rdx				# Coloca o valor do apontador ptr1 no registo %rdx
	movl $0, %eax					# Coloca o valor 0 no registo %eax
	
loop:
	movb (%rdx), %cl				# Coloca o valor apontado atual pelo registo %rdx (caracter, 1 byte) no registo %cl
	cmpb $CHARACTER, %cl				# Compara a constante CHARACTER com o caracter atual do registo %cl para saber se irá ser preciso contar
	je counter					# Se o caracter for igual à constante CHARACTER, saltar a execução para a etiqueta indicada
	
	cmpb $0, %cl					# Verifica se o caracter presente no registo %cl representa o final da string
	je end						# Se representar o final da string, saltar para as intruções finais
	
increment:
	incq %rdx					# Incrementa um ao apontador presente no registo %rdx (ptr1)
	jmp loop					# Salta incondicionalmente novamente para a etiqueta indicada para continuar a percorrer a string
	
counter:
	incl %eax					# Incrementa um ao valor do registo %eax
	jmp increment					# Salta incondicionalmente novamente para a etiqueta indicada para incrementar a próxima posição do apontador

end:							# Etiqueta que representa o final das instruções
	ret
