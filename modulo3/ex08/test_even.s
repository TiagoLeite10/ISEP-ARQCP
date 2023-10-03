.section .data				
	.global even				# Variável global declarada no main.c que representa o número a analisar para saber se é par ou não
	.equ DIVISOR, 2	  			# Constante que representa o divisor

.section .text
	.global test_even 			# long test_even(void)

test_even:
	movq even(%rip), %rax			# Coloca o valor presente na variável even no registo %rax
	cqto					# Estende o sinal quad existente no registo %rax para oct word representado no registo %rdx:%rax
	
	movq $DIVISOR, %rcx			# Coloca o divisor (valor 2) no registo %rcx
	idivq %rcx				# Realiza a divisão de %rdx:%rax por %rcx (resto da divisão no registo %rdx)
	
	movq %rdx, %rax				# Coloca o valor presente no registo %rax em %rdx

end:
	ret
