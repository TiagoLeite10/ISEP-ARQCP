.section .data

	.equ EVEN_AND_NEGATIVE, 4	# Constante que representa o valor 4 (para quando o número é par e negativo)
	.equ ODD_AND_NEGATIVE, 5	# Constante que representa o valor 5 (para quando o número é ímpar e negativo)
	.equ EVEN_AND_POSITIVE, 6	# Constante que representa o valor 6 (para quando o número é par e positivo)
	.equ ODD_AND_POSITIVE, 7	# Constante que representa o valor 7 (para quando o número é ímpar e positivo)

	.global num			# Variável do tipo inteiro (32 bits) que representa um dado número. Esta variável encontra-se declarada no módulo que implementa este módulo

.section .text

	.global check_num		# char check_num()

check_num:
	movl num(%rip), %eax		# Coloca o valor presente na variável num no registo %eax
	cltd				# Converte o valor do tipo long com sinal presente no registo %eax para o valor do tipo double long no registo %edx:%eax
	movl $2, %ecx			# Coloca o divisor (valor 2) no registo %ecx
	idivl %ecx			# Realiza a divisão de %edx:%eax por %ecx (resto da divisão no registo %edx)
	
	cmpl $0, %edx			# Compara o resto da divisão presente no registo %edx com 0
	je even_number			# Se o resto for 0
	
	cmpl $0, num(%rip)		# Compara o valor presente na variável num com 0, para conseguir perceber se se trata de um número positivo ou negativo
	jl odd_negative_number		# Se o valor da variável num for menor do que 0, significa que é negativo
	
	movl $ODD_AND_POSITIVE, %eax	# Move o valor representado pela constante ODD_AND_NEGATIVE para o registo %eax
	jmp end				# Salta incondicionalmente para a etiqueta end

odd_negative_number:			# Etiqueta que contem as instruções necessárias para caso o num seja ímpar e negativo
	movl $ODD_AND_NEGATIVE, %eax	# Move o valor representado pela constante ODD_AND_POSITIVE para o registo %eax
	jmp end

even_number: 				# Etiqueta que contem as instruções necessárias para caso o num seja par
	cmpl $0, num(%rip)		# Compara o valor presente na variável num com 0, para perceber se o valor de num é positivo ou negativo
	jl even_negative_number		# Se o valor for menor do que 0, significa que o número é negativo
	
	movl $EVEN_AND_POSITIVE, %eax	# Coloca o valor representado pela constante EVEN_AND_POSITIVE no registo %eax
	jmp end

even_negative_number:			# Etiqueta que contem as instruções necessárias para o caso do num ser par e negativo
	movl $EVEN_AND_NEGATIVE, %eax	# Coloca o valor representado pela constante EVEN_AND_NEGATIVE no registo %eax
	jmp end

end:
	ret
