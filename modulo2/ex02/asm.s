.section .data
	.global op1, op2 # variáveis do tipo inteiro (4 bytes) declaradas no módulo que utiliza este mesmo módulo


.section .text
	.global sum # int sum()

sum:
	movl op1(%rip), %ecx # Coloca o valor da variável op1 no registo %ecx
	movl op2(%rip), %eax # Coloca o valor da variável op2 no registo %eax
	addl %ecx, %eax # Soma o valor que se encontra no registo %ecx ao valor presente no registo %eax. O resultado fica armazenado no registo %eax
	ret

