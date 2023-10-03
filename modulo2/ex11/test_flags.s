.section .data
	.global op1, op2			# variáveis do tipo inteiro (4 bytes) declaradas no módulo que utiliza este mesmo módulo

.section .text
	.global test_flags			# char test_flags()

test_flags:
	movl op1(%rip), %eax 			# colocar op1 em %eax
	movl op2(%rip), %ecx		        # colocar op2 em %ecx	
	addl %ecx, %eax			        # (%eax = %ecx + %eax) resultado fica em eax
	
	jc carry_detected			# verificar se a operação aritmética anterior ativa uma flag carry e se ativar salta para carry_detected
	jo overflow_detected			# verificar se a operação aritmética anterior ativa uma flag overflow e se ativar salta para overflow_detected
	movl $0, %eax				# colocar 0 em %eax
	jmp end					# salta para end
	
	carry_detected:
	movl $1, %eax				# colocar 1 em %eax
	jmp end					# salta para end
	
	overflow_detected:
	movl $1, %eax				# colocar 1 em %eax
	jmp end					# salta para end
	
	end:	
	ret
