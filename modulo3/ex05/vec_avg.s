.section .data  				
	.global num				# Variável global declarada no main.c que representa o número de elementos que existem no array

.section .text
	.global vec_avg 			# long vec_avg(void)

vec_avg:
	call vec_sum				# Chama a funcao vec_sum e guarda o valor retornado em %rax
	movq num(%rip), %rcx			# Coloca o valor da variável num no registo %rcx (8 bytes)
	
	cmpq $0, %rcx				# Compara o valor zero com o valor colocado no registo %rcx
	je divisor_zero				# Se o valor que foi colocado em %ecx for 0, então a execução do programa salta para as intruções que se encontram na etiqueta divisor_zero
	
	cqto					# Estende o sinal quad existente no registo %rax para oct word representado no registo %rdx:%rax
	idivq %rcx				# Faz a divisão de um número com sinal através do divisor presente no registo %rcx
	jmp end					# Salta para as instruções finais da função

divisor_zero:
	movq $0, %rax				# Coloca o valor 0 no registo %rax (8 bytes)
	jmp end					# Salta para as instruções finais da função

end:
	ret
