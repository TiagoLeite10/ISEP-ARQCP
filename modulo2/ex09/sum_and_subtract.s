.section .data
	.global A			# variável do tipo inteiro (4 bytes) declarada no módulo que utiliza este mesmo módulo
	.global B			# variável do tipo short (2 bytes) declarada no módulo que utiliza este mesmo módulo
	.global C, D			# variáveis do tipo char (1 byte) declaradas no módulo que utiliza este mesmo módulo

.section .text
	.global sum_and_subtract	# int sum_and_subtract()

sum_and_subtract:		
	movsbl C(%rip), %eax		# colocar C em %eax com extensão de sinal (8 bits para 32 bits)
	movl A(%rip), %ecx 		# colocar A em %ecx
	addl %ecx, %eax			# (eax = eax + ecx) resultado fica em eax
	
	movsbl D(%rip), %ecx		# colocar D em %ecx com extensão de sinal (8 bits para 32 bits)
	subl %ecx, %eax			# (eax = eax - ecx) resultado fica em eax
	
	movswl B(%rip), %ecx		# colocar B em %ecx com extensão de sinal (16 bits para 32 bits)
	addl %ecx, %eax			# (eax = eax + ecx) resultado fica em eax
	
	movslq %eax, %rax		# colocar %eax em %rax com extensão de sinal (32 bits para 64 bits)
	
	ret
