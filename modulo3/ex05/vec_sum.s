.section .data
	.global ptrvec		  		# Apontador que conhece o endereço do valor inicial do array			
	.global num				# Variável global declarada no main.c que representa o número de elementos que existem no array
	.equ NUM_BYTES_TO_ADD, 8		# Constante que representa o número de bytes a adicionar ao apontador

.section .text
	.global vec_sum 			# long vec_sum(void)

vec_sum:		
	movq ptrvec(%rip), %rdx			# Coloca o valor do apontador ptrvec no registo %rdx (8 bytes)
	movw num(%rip), %si			# Coloca o valor da variável num no registo %sil (2 bytes)
	movq $0, %rax				# Coloca o valor 0 no registo %rax (8 bytes)
	
	movswq %si, %rcx			# Coloca o registo %si em %rcx com extensão de sinal (16 bits para 64 bits)

	cmpq $0, %rcx				# Compara o valor 0 com o valor presente no registo %ecx
	jle end					# Caso o valor do registo %dx seja menor ou igual a 0, salta para as instruções finais da função
	
vec_sum_loop:
	addq (%rdx), %rax		        # Adiciona o valor apontado pelo registo %rdx ao registo %rax
	addq $NUM_BYTES_TO_ADD, %rdx            # Adiciona o valor representado pela constante NUM_BYTES_TO_ADD ao registo %rdx (para ficar a apontar para o próximo valor necessário)
	
	loop vec_sum_loop			# Salta de novo para a etiqueta indicada

end:						# Etiqueta que representa as intruções finais da função vec_sum
	ret
