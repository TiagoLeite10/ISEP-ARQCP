.section .data
	.global num1, num2			# variáveis do tipo inteiro (4 bytes) declaradas no módulo que utiliza este mesmo módulo

.section .text
	.global sum				# int sum()
	.global subtraction			# int subtraction()
	.global multiplication			# int multiplication()
	.global division			# int division()
	.global modulus				# int modulus()
	.global powerOfTwo			# int powerOfTwo()
	.global powerOfThree			# int powerOfThree()

sum:
	movl num1(%rip), %eax   		# colocar num1 em %eax
	movl num2(%rip), %ecx 			# colocar num2 em %ecx
	addl %ecx, %eax				# (eax = eax + ecx) resultado fica em eax
	
	ret

subtraction:
	movl num1(%rip), %eax   		# colocar num1 em %eax
	movl num2(%rip), %ecx 			# colocar num2 em %ecx
	subl %ecx, %eax				# (eax = eax - ecx) resultado fica em eax
	
	ret
	
multiplication:
	movl num1(%rip), %eax   		# colocar num1 em %eax
	movl num2(%rip), %ecx 			# colocar num2 em %ecx
	imul %ecx				# (%eax = ecx * eax) resultado fica em eax
	
	ret
	
division:
	movl num1(%rip), %eax   		# colocar num1 em %eax
	movl num2(%rip), %ecx 			# colocar num2 em %ecx
	
	cmpl $0, %ecx				# comparar o valor contido em %ecx com 0
	je divisor_zero				# caso o valor contido em %ecx seja igual a 0 salta para divisor_zero
	movl $0, %edx				# colocar o registo %edx igual a 0, %edx tem de ser iniciado para estender o sinal do inteiro que fica em %eax
	idivl %ecx				# (%edx = %eax por %ecx) resto fica em edx e quociente em eax
	jmp end_division			# salta para end_division
	
	divisor_zero:
	movl $0, %eax				# colocar 0 em %eax
	jmp end_division			# salta para end_division
	
	end_division: 		
	ret
	
modulus:
	movl num1(%rip), %eax   		# colocar num1 em %eax
	movl num2(%rip), %ecx 			# colocar num2 em %ecx
	
	cmpl $0, %ecx				# comparar o valor contido em %ecx com 0
	je divisorZero				# caso o valor contido em %ecx seja igual a 0 salta para divisor_zero
	movl $0, %edx				# colocar o registo %edx igual a 0, %edx tem de ser iniciado para estender o sinal do inteiro que fica em %eax
	
	idivl %ecx				# (%edx = %eax por %ecx) resto fica em edx e quociente em eax
	movl %edx, %eax				# colocar %edx que contém o valor do resto da operação aritmética realizada anteriormente em %eax
	jmp end_modulus				# salta para end_modulus
	
	divisorZero:
	movl $0, %eax				# colocar 0 em %eax
	jmp end_modulus				# salta para end_modulus
	
	end_modulus: 		
	ret

powerOfTwo:
	movl num1(%rip), %eax   		# colocar num1 em %eax
	movl num1(%rip), %ecx			# colocar num1 em %ecx
	imul %ecx				# (%eax = ecx * eax) resultado fica em eax
	
	ret
	
powerOfThree:
	movl num1(%rip), %eax   		# colocar num1 em %eax
	movl num1(%rip), %ecx			# colocar num1 em %ecx
	imul %ecx				# (%eax = ecx * eax) resultado fica em eax
	imul %ecx				# (%eax = ecx * eax) resultado fica em eax
	
	ret
