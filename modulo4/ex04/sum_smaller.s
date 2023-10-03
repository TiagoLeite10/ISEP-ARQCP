.section .data
	# none
.section .text
	.global sum_smaller 		# int sum_smaller(int num1, int num2, int *smaller)

sum_smaller:				# Etiqueta que representa o início das instruções da fução sum_smaller
	movl %edi, %eax			# Colocar o valor do primeiro parâmetro
	addl %esi, %eax			# Soma o valor do segundo parâmetro
	
	cmpl %esi, %edi			# Compara os valores dos parâmetros um e dois
	jg first_parameter_is_bigger	# Se o primeiro parâmetro for superior salta a execução do programa para a etiqueta indicada
	
	movl %edi, (%rdx)		# Coloca o menor valor (presente no %edi, primeiro parâmetro) no endereço apontado pelo apontador presente no registo %rdx passado por parâmetro
	jmp sum_smaller_end		# Salta incondicionalmente para as intruções finais da função

first_parameter_is_bigger:		# Etiqueta que representa as instruções para quando o segundoo primeiro parâmetro é maior do que o segundo
	movl %esi, (%rdx)		# Coloca o menor valor (presente no %esi, segundo parâmetro) no endereço apontado pelo apontador presente no registo %rdx passado por parâmetro

sum_smaller_end:			# Etiqueta que representa as instruções finais da função
	ret
