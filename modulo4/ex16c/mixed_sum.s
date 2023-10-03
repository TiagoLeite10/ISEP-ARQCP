.section .data
	# None

.section .text
	.global mixed_sum	# int mixed_sum(int a, int b, int pos)

mixed_sum:
	pushq %rdi
	pushq %rsi
	pushq %rdx
	call join_bits		# %rdi -> a, %rsi -> b, %rdx -> pos
	movl %eax, %r8d		# result = %eax
	popq %rdx
	popq %rsi
	popq %rdi

	movl %edi, %r9d		# %r9d = a
	movl %esi, %edi		# a = b
	movl %r9d, %esi		# b = %r9d (a)

	pushq %rdi
	pushq %rsi
	pushq %rdx
	pushq %r8
	call join_bits		# %rdi -> b, %rsi -> a, %rdx -> pos
	popq %r8
	popq %rdx
	popq %rsi
	popq %rdi

	addl %r8d, %eax		# result = result + %eax
	
	ret
