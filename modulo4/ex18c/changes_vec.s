.section .data
	# None

.section .text
	.global changes_vec	# void changes_vec(int *ptrvec, int num)

changes_vec:
	cmpl $0, %esi		# Verifica se o tamanho do array não é menor ou igual a 0
	jle changes_vec_end

	movl %esi, %ecx		# %ecx = num

changes_vec_loop:
	pushq %rsi
	pushq %rcx
	pushq %rdi
	call changes		# %rdi -> ptrvec, contém o apontador para o valor a ser tratado
	popq %rdi
	popq %rcx
	popq %rsi

	addq $4, %rdi		# Soma 4 bytes ao apontador presente no registo %rdi para que, aponte para o próximo valor do array de valores inteiros
	
	loop changes_vec_loop	# Decrementa 1 ao registo %rcx, e salta para a etiqueta indicada enquanto o valor do registo %rcx não for igual a 0

changes_vec_end:
	ret
