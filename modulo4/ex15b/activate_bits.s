.section .data
	.equ INT_BITS, 32		# Constante que representa o número de bits que um valor inteiro tem

.section .text
	.global activate_bits 		# int activate_bits(int a, int left, int right);

activate_bits:
	movl $0, %eax			# Coloca o valor 0 no registo %eax (4 bytes) para limpar a "máscara"
	incl %esi			# Incrementa um ao valor do registo %esi 
	
activate_bits_left:
	cmpl $INT_BITS, %esi		# Verifica se já foram percorridos todos os bits da esquerda
	je preparing_next_interaction	# Caso já tenham sido percorridos todos os bits da esquerda salta para a etiqueta indicada para preparar a interação para os bits da direita
	
	incl %eax			# Incrementa um ao valor do registo %eax
	rorl %eax			# Realiza uma rotação para a direita no valor contido no registo %eax
		
	incl %esi			# Incrementa um ao valor do registo %esi para continuar a percorrer os restantes bits da esquerda
	jmp activate_bits_left		# Salta incondicionalmente novamente para a etiqueta indicada para continuar a percorrer os bits da esquerda

preparing_next_interaction:
	orl %eax, %edi			# Realiza a operação or entre o valor contido no registo %edi que corresponde ao 1º argumento (a) e o registo %eax que contém a máscara a adicionar
	
	movl $0, %eax			# Coloca o valor 0 no registo %eax (4 bytes)
	movl $0, %ecx			# Coloca o valor 0 no registo %ecx (4 bytes)
	
activate_bits_right:
	cmpl %ecx, %edx			# Verifica se já foram percorridos todos os bits da direita
	je activate_bits_end		# Caso já tenham sido percorridos todos os bits da direita salta para as intruções finais
	
	shll %eax			# Realiza a mudança para a esquerda de 1 bit no registo %eax
	incl %eax			# Incrementa um ao valor do registo %eax
	
	incl %ecx			# Incrementa um ao valor do registo %ecx para continuar a percorrer os restantes bits da direita
	jmp activate_bits_right		# Salta incondicionalmente novamente para a etiqueta indicada para continuar a percorrer os bits da direita

activate_bits_end:
	orl %edi, %eax			# Realiza a operação or entre o valor contido no registo %edi que corresponde ao 1º argumento (a) e o registo %eax que contém a máscara a adicionar e será o valor a ser retornado
	ret
