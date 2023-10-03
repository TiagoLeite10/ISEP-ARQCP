.section .data
	.global A, B, C, D			# variáveis do tipo inteiro (4 bytes) declaradas no módulo que utiliza este mesmo módulo

.section .text
	.global compute				# int compute()

compute:
	movl A(%rip), %eax 			# colocar A em %eax
	movl B(%rip), %ecx			# colocar B em %ecx	
	imull %ecx, %eax			# (%eax = %eax * %ecx) resultado fica em eax
		
	movl C(%rip), %ecx 			# colocar C em %eax	
	subl %ecx, %eax				# (%eax = %eax - %ecx) resultado fica em eax
	cdq					# estende o sinal para %edx
	
	movl D(%rip), %ecx			# colocar D em %ecx		
	cmpl $0, %ecx				# comparar o valor contido em %ecx com 0
	je divisor_zero				# caso o valor contido em %ecx seja igual a 0 salta para divisor_zero
	
	idivl %ecx				# (%edx = %eax por %ecx) resto fica em edx e quociente em eax
	jmp end 				# salta para end
	
	divisor_zero:
	movl $0, %eax				# colocar 0 em %eax
	jmp end 				# salta para end
	
	end:	
	ret
