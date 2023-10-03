.section .data
	.global op1, op2		# variáveis do tipo inteiro (4 bytes) declaradas no módulo que utiliza este mesmo módulo
	.equ CONST, 20			# constante com o valor 20

.section .text
	.global sum 			# int sum()
	.global sum_v2 			# int sum_v2()

sum:
	movl op1(%rip), %ecx 		# colocar op1 em ecx
	movl op2(%rip), %eax 		# colocar op1 em eax
	addl %ecx, %eax 		# (eax = eax + ecx) resultado fica em eax
	ret

sum_v2:
	movl $CONST, %eax 		# colocar o valor da constante em eax
	movl op1(%rip), %ecx 		# colocar op1 em ecx
	movl op2(%rip), %edx 		# colocar op2 em edx
	
	subl %ecx, %eax 		# (eax = eax - ecx) resultado fica em eax
	subl %ecx, %eax 		# (eax = eax - ecx) resultado fica em eax
	addl %edx, %eax 		# (eax = eax + edx) resultado fica em eax
	ret
