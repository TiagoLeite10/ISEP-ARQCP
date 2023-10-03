.section .data
	
	.equ MULTIPLY_VALUE, 3 		# Constante que representa o valor a multiplicar
	.equ SUM_VALUE_ONE, 6		# Constante que representa o primeiro valor a somar
	.equ DIVIDE_VALUE, 3		# Constante que representa o valor a dividir
	.equ SUM_VALUE_TWO, 12		# Constante que representa o segundo valor a somar
	.equ SUBTRACT_VALUE, 1		# Constante que representa o valor a subtrair
	.global num			# Variável do tipo long (8 bytes) declarada no módulo que implementa este módulo

.section .text

	.global steps # int steps()

steps:
	movq num(%rip), %rax 		# Coloca o valor da variável num no registo %rax

	imulq $MULTIPLY_VALUE, %rax	# Multiplica o valor presente no registo %rax, que contem sinal, pelo valor presente na constante MULTIPLY_VALUE

	addq $SUM_VALUE_ONE, %rax	# Adiciona ao valor presente no registo %rax o valor que é representado pela constante SUM_VALUE_ONE

	movq $DIVIDE_VALUE, %rcx	# Move o valor representado pela constante DIVIDE_VALUE para o registo %rcx
	cqto				# Estende o sinal quad existente no registo %rax para oct word representado no registo %rdx:%rax
	idivq %rcx			# Faz a divisão de um número com sinal através do divisor presente no registo %rcx

	addq $SUM_VALUE_TWO, %rax	# Adiciona ao valor presente no registo %rax o valor represetado pela constante SUM_VALUE_TWO

	subq num(%rip), %rax		# Subtrai o valor presente no registo %rax pelo valor da variável num

	subq $SUBTRACT_VALUE, %rax	# Subtrai o valor presente no registo %rax pelo valor representado pela constante SUBTRACT_VALUE

	ret

