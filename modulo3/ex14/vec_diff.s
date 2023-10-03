.section .data
	
	.global x					# Variável global declarada na main.c que representa o valor que será verificado se existe mais do que uma vez no array
	.global ptrvec					# Apontador declarado na main.c que conhece o endereço do valor inicial do array que irá ser analisado
	.global num					# Variável global declarada na main.c que representa o número de elementos existentes no array
	.equ STILL_EXCLUSIVE, 1				# Constante que representa o número de valores repetidos que podem existir no array para que esse mesmo valor ainda seja considerado exclusívo
	.equ BYTES_TO_ADD, 4				# Constante que representa o número de bytes a adicionar ao apontador para que este aponte para o próximo valor do array

.section .text
	
	.global vec_diff				# int vec_diff(void)

vec_diff:
	movl num(%rip), %ecx				# Coloca o valor do número de elementos existentes no registo %rcx que irá ser utilizado 
	movl x(%rip), %r8d				# Coloca o valor atual da variável x no registo %r8d para preservar o seu valor original, podendo assim no final da função voltar a coloca-lo na variável de novo
	movl $0, %esi					# Coloca o valor 0 no registo %esi, sendo que este registo irá representar o número de valores no array que são exclusivos
	cmpl $0, %ecx					# Compara o valor 0 com o valor presente o registo %ecx para saber se o array contem mais do que 0 elementos
	jle vec_diff_end				# Se o array não tiver mais de 0 elementos, salta para as instruções finais da função
	movq ptrvec(%rip), %rdx				# Coloca o valor do apontador ptrvec no registo %rdx

vec_diff_loop:						# Etiqueta que representa o loop que irá percorrer o array para verificar-mos quantos valores são exclusívos
	movl (%rdx), %edi				# Coloca o valor apontado pelo apontador presente no registo %rdx no registo %edi
	movl %edi, x(%rip)				# Coloca o valor presente no registo %edi na variável global x para que este valor seja verificado se existem em duplicado no array através da função exists
	pushq %rcx					# Coloca o valor (8 bytes) presente no registo %rcx na stack (e subtrai 8 bytes ao topo da stack)
	pushq %rdx					# Coloca o valor (8 bytes) presente no registo %rdx na stack (e subtrai 8 bytes ao topo da stack)
	pushq %rsi					# Coloca o valor (8 bytes) presente no registo %rsi na stack (e subtrai 8 bytes ao topo da stack)
	pushq %rdi					# Coloca o valor (8 bytes) presente no registo %rdi na stack (e subtrai 8 bytes ao topo da stack)
	pushq %r8					# Coloca o valor (8 bytes) presente no registo %r8d na stack (e subtrai 8 bytes ao topo da stack)
	call exists					# Chama a função exists para verificar se o valor presente na variável x aparece mais do que uma vez no array
	popq %r8					# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %r8d (e soma 8 bytes ao topo da stack)
	popq %rdi					# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %rdi (e soma 8 bytes ao topo da stack)
	popq %rsi					# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %rsi (e soma 8 bytes ao topo da stack)
	popq %rdx					# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %rdx (e soma 8 bytes ao topo da stack)
	popq %rcx					# "Pega" nos 8 bytes mais abaixo da stack e coloca-os no registo %rcx (e soma 8 bytes ao topo da stack)
	
	cmpl $1, %eax					# Compara o valor 1 com o valor presente no registo %eax (valor que foi retornado pela função anterior)
	je vec_diff_loop_prepare_next_iteration		# Se os valores anteriores forem iguais, salta a execução para a etiqueta indicada, pois quer dizer que o valor x existe em duplicado no array

	incl %esi					# Incrementa 1 ao registo %esi, pois não foram encontrados valores de x duplicados no array

vec_diff_loop_prepare_next_iteration:			# Etiqueta que representa as intruções que preparam alguns registos para a iteração seguinte
	addq $BYTES_TO_ADD, %rdx			# Adiciona o valor de bytes correspondente à constante BYTES_TO_ADD ao apontador presente no registo %rdx
	loop vec_diff_loop				# Decrementa em 1 o valor presente no registo %rcx e enquato o valor presente neste mesmo registo não for igual a 0, salta para a etiqueta indicada

vec_diff_end:						# Etiqueta que representa as intruções finais da função vec_diff
	movl %r8d, x(%rip)				# Coloca o valor original da variável x que tinha sido armazenado no registo %r8d, novamente na variável x
	movl %esi, %eax					# Coloca o valor do registo %esi, que sabe quantos valores não duplicados existem no array, no registo %eax
	ret
