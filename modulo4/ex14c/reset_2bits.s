.section .data
	.equ MAX_POS, 31	# Constante que representa o valor da posição máxima que o bit pode estar

.section .text
	.global reset_2bits	# void reset_2bits(int *ptr, int pos);

reset_2bits:			# Etiqueta que representa o início das instruções para a função reset_2bits
	pushq %rdi
	pushq %rsi
	call reset_bit		# %rdi -> *ptr; %esi -> pos
	popq %rsi
	popq %rdi

	pushq %rsi
	
	movl %esi, %edx		# %edx = pos
	movl $MAX_POS, %esi	# %esi = MAX_POS
	subl %edx, %esi		# %esi = MAX_POS - pos
	
	pushq %rdi
	call reset_bit		# %rdi -> *ptr; %esi -> MAX_POS - pos
	popq %rdi
	popq %rsi

	ret
