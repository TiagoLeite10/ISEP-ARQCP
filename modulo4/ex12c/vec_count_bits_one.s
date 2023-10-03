.section .data
	# None

.section .text
	.global vec_count_bits_one 	# int vec_count_bits_one(short *ptr, int num);

vec_count_bits_one:			# Etiqueta que representa o início das instruções da função 
	movl $0, %eax			# Irá representar a soma de todos os bits a 1 de todos os números presentes no array
	cmpl $0, %esi			# Verifica o tamanho do array
	jle vec_count_bits_one_end
	movl %esi, %ecx			# O registo %ecx será usado para realizar o loop "num" vezes

vec_count_bits_one_loop:		# Etiqueta que representa as instruções a realizar para cada valor presente no array
	pushq %rdi			# Guarda na stack o valor do registo indicado
	pushq %rsi
	pushq %rax
	pushq %rcx
	movzwl (%rdi), %edi		# Extende o valor apontado por este registo de 2 bytes para 4 bytes (sem extensão de sinal), ficando agora este valor no próprio registo. 1º parâmetro da função a chamar
	call count_bits_one
	popq %rcx			# Retira da stack os últimos 8 bytes e coloca-os no registo indicado
	movl %eax, %r8d			# Coloca o valor devolvido pela função count_bits_one no registo %r8d
	popq %rax
	addl %r8d, %eax			# Adiciona a contagem de bits a 1 que o número atual contem, ao valor de bits total já contados para os valores deste array
	popq %rsi
	popq %rdi

	addq $2, %rdi			# Adiciona 2 bytes ao registo para que este aponte para o próximo número do array de shorts

	loop vec_count_bits_one_loop	# Decrementa 1 ao registo %rcx. Posteriormente, salta para a etiqueta indicada enquanto %rcx não for igual a 0

vec_count_bits_one_end:			# Etiqueta que representa as instruções finais da função vec_count_bits_one
	ret
