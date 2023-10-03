.section .data
	.global length1, length2, height	# variáveis do tipo inteiro (4 bytes) declaradas no módulo que utiliza este mesmo módulo
	.equ CONST, 2				# constante com o valor 2

.section .text
	.global getArea				# int getArea()

getArea:
	movl length1(%rip), %eax 		# colocar length1 em %eax
	movl length2(%rip), %ecx		# colocar length2 em %ecx	
	addl %ecx, %eax			        # (%eax = %ecx + %eax) resultado fica em eax
	
	movl height(%rip), %ecx 		# colocar heigth em %ecx
	mull %ecx				# (%eax = %ecx * %eax) resultado fica em %eax
	
	movl $CONST, %ecx 			# colocar o valor da constante em ecx
	divl %ecx				# (%edx = %eax por %ecx) quociente fica em eax e o resto em edx
	
	ret
