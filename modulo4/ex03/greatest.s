.section .text
	.global greatest 			# int greatest(int a, int b, int c, int d)

greatest:
	movl %edi, %eax				# Coloca o valor do 1º argumento (a) que está guardado em %edi no registo %eax (4 bytes)
	
	cmpl %esi, %eax				# Compara o valor do 1º argumento (a) que está em %eax com o valor do 2º argumento (b) que está no registo %esi 
	jl greater_b				# Caso o valor do registo %esi (b) seja maior que o registo %eax (a), salta para a etiqueta greater_b
	
verify_c:
	cmpl %edx, %eax				# Compara o maior valor entre o argumento a e b que está em %eax com o valor do 3º argumento (c) que está no registo %edx
	jl greater_c				# Caso o valor do registo %edx (c) seja maior que o registo %eax que contém o maior valor, salta para a etiqueta greater_c
	
verify_d:
	cmpl %ecx, %eax				# Compara o maior valor entre o argumento a, b e c que está em %eax com o valor do 4º argumento (d) que está no registo %ecx
	jl greater_d				# Caso o valor do registo %ecx (d) seja maior que o registo %eax que contém o maior valor, salta para a etiqueta greater_d
	
	jmp greatest_end			# Salta para as instruções finais da função

greater_b:
	movl %esi, %eax				# Coloca o valor do 2º argumento (b) que está guardado em %esi no registo %eax (4 bytes)
	jmp verify_c				# Salta para a etiqueta indicada para verificar se o argumento c é maior que os argumentos a e b
	
greater_c:
	movl %edx, %eax				# Coloca o valor do 3º argumento (c) que está guardado em %edx no registo %eax (4 bytes)
	jmp verify_d				# Salta para a etiqueta indicada para verificar se o argumento d é maior que os argumentos a, b e c
	
greater_d:
	movl %ecx, %eax				# Coloca o valor do 4º argumento (d) que está guardado em %ecx no registo %eax (4 bytes)

greatest_end:					# Etiqueta que representa as intruções finais da função
	ret
