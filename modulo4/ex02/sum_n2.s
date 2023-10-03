.section .data
	# None

.section .text
	.global sum_n2		# long sum_n2(int n)

sum_n2:				# Etiqueta que representa o início das instruções relativas á função sum_n2
	movq $0, %rsi		# %rsi irá representar o valor da soma de todos os quadrados dos números durante a execução
	movslq %edi, %rdi	# Extende o sinal do primeiro valor passado por parâmetro de 4 bytes para 8 bytes
	
	cmpq $0, %rdi		# Verifica se o valor passado por parâmetro não é menor ou igual a 0
	jle sum_n2_end
	
	movq $1, %rcx		# Coloca o primeiro valor a ser feito o seu quadrado no registo %rcx

sum_n2_loop:			# Etiqueta que representa o início das intruções para realizar o loop a todos os valores necessários
	cmpq %rdi, %rcx		# Verifica se o valor que estamos agora a realizar o quadrado para o somar no resultado no final, ainda não é maior do que o valor máximo pretendido
	jg sum_n2_end
	
	movq %rcx, %rax		# Coloca o próprio valor no registo %rax para que seja realizada a multiplicação por ele próprio
	mulq %rcx		# %rax = %rcx x %rax (ou seja, %rcx^2)
	
	addq %rax, %rsi		# Soma o resultado da multiplicação ao registo %rsi
	
	incq %rcx		# Incrementa o registo %rcx para que seja feito o cálculo do próximo valor

	jmp sum_n2_loop		# loop
	
sum_n2_end:			# Etiqueta que representa as instruções finais da função
	movq %rsi, %rax		# Coloca o valor da soma de todos os quadrados de todos os números no registo %rax
	ret
