.section .data
	length1:				# Variável length1 (tamanho 1)
		.int 0				# Tipo inteiro com valor inicializado a 0 para a variável length1 (4 bytes)
	
	length2:				# Variável length2 (tamanho 2)
		.int 0				# Tipo inteiro com valor inicializado a 0 para a variável length2 (4 bytes)
	
	height:					# Variável height (altura do trapezio)
		.int 0				# Tipo inteiro com valor inicializado a 0 para a variável height (4 bytes)
	
	.equ TWO, 2				# Constante que guarda o valor 2 que irá ser utilzado na divisão	

	.global length1, length2, height	# variáveis do tipo inteiro (4 bytes) declaradas no módulo que utiliza este mesmo módulo 

.section .text
	.global getArea				# int getArea()

getArea:
	movl length1(%rip), %eax 		# colocar length1 em %eax
	movl length2(%rip), %ecx		# colocar length2 em %ecx	
	addl %ecx, %eax			        # (%eax = %ecx + %eax) resultado fica em eax
	
	movl height(%rip), %ecx 		# colocar heigth em %ecx
	mull %ecx				# (%eax = %ecx * %eax) resultado fica em %eax
	
	movl $TWO, %ecx				# colocar o valor 2 em %ecx
	divl %ecx				# (%edx = %eax por %ecx) quociente fica em eax e o resto em edx
	
	ret
