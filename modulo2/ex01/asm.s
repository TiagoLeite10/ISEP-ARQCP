.section .data
	.global op1, op2, res		  	# variáveis do tipo inteiro (4 bytes) declaradas no módulo que utiliza este mesmo módulo

.section .text
	.global sum 				# void sum(void)

sum:
	movl op1(%rip), %ecx 			# colocar op1 em ecx
	movl op2(%rip), %eax 			# colocar op2 em eax
	addl %ecx, %eax				# (eax = eax + ecx) resultado em eax
	movl %eax, res(%rip) 			# colocar eax que contêm o resultado em ecx
	ret
