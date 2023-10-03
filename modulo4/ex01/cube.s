.section .text
	.global cube 				# long cube(int x)

cube:
	movslq %edi, %rcx			# Coloca o valor do 1º argumento que está guardado em %edi no registo %rcx com extensão de sinal (32 bits para 64 bits)
	movq %rcx, %rax				# Coloca o valor presente em %rcx no registo %rax (8 bytes)

	imulq %rcx				# Multiplica o valor contido em %rcx pelo guardado em %rax e guarda o resultado em %rax
	imulq %rcx				# Multiplica novamente o valor contido em %rcx pelo guardado em %rax e guarda o resultado em %rax

	ret
