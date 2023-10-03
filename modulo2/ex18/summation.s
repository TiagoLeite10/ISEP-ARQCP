.section .data
	
	.equ A, 2		# Constante A que representa o valor 2
	.equ B, 2		# Constante B que representa o valor 2
	.global i		# Variável global que representa o total de iterações a realizar no somatório, sendo esta definida no módulo que implementa este mesmo módulo

.section .text
	
	.global summation 	# long summation()

summation:
	movq $1, %rsi		# Colocar o valor 1 no registo %rsi que irá ser utilzado como contador (representa o i no somatório)
	movq $0, %rdi		# Colocar o valor 0 no registo %rdi, que será o registo no qual o resultado irá sendo armazenado antes de ser mudado para o registo %rax para realizar o return

sum_loop:
	cmpq i(%rip), %rsi	# Compara o valor do registo %rsi com o valor presente na variável i
	jg end_sum_loop		# Se o valor do registo %rsi for maior do que o valor da variável i, a execução salta para a etiqueta end_sum_loop
	
	movq %rsi, %rax		# Coloca o valor presente no registo %rsi no registo %rax (valor de i)
	imulq %rsi, %rax	# Multiplica o valor no registo %rsi pelo valor no registo %rax temos então i²)

	imulq $A, %rax		# Multiplica o valor presente na constante A pelo valor presente no registo %rax (temos então i² * A)
	imulq $A, %rax		# Multiplica novamente o valor presente na constante A pelo valor presente no registo %rax (temos agora i² * A²)
	
	movq $B, %rcx		# Colocar o valor representado pela constante B no registo %rcx que será o divisor da divisão a ser realizada
	cqto			# Prepara a divisão fazendo a extensão de sinal do tipo quad(8 bytes) presente no registo %rax para o tipo octa (16 bytes) no registo %rdx:%rax
	idivq %rcx		# Realiza a divisão de %rdx:%rax por %rcx (ficamos agora com i² * A² / B)

	addq %rax, %rdi		# Realiza a parte da soma para o somatório, colocando o resultado das contas que utilizaram o valor representativo de i atual

	incq %rsi		# Incrementa o valor que representa o i no somatório em 1
	
	jmp sum_loop		# Volta ao início desta etiqueta (sum_loop) para continuar a realizar o somatório necessário. É um salto incondicional.

end_sum_loop:
	movq %rdi, %rax		# Coloca o valor do somatório realizado no registo %rax para devolver este mesmo valor
	ret
