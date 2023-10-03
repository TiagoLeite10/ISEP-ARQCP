.section .data
	.equ GRADES_OFFSET, 4 				# O membro grades começa no byte 4
	.equ NUM_GRADES, 5 				# O número de notas que o membro grade armazena

.section .text
	.global locate_greater				# int locate_greater(Student *s, int minimum, int *greater_grades);

locate_greater:
	# *s in %rdi, minimum in %esi, *greater_grades in %rdx
	movq $0, %rcx					# Representa o índice de s
	movq $0, %r8					# Representa o índice de greater_grades
	movl $0, %eax					# Representa o número de novos valores armazenados em greater_grades

locate_greater_loop:
	cmpq $NUM_GRADES, %rcx				# Verifica se o índice para s já ultrapassa o limite
	jge locate_greater_end

	movl GRADES_OFFSET(%rdi, %rcx, 4), %r9d		# %r9d = s->grades[%rcx]

	cmpl %esi, %r9d					# Verifica se a nota atual do estudante é mais baixa ou igual do que a nota mínima
	jle locate_greater_loop_prepare_next_iteration

	movl %r9d, (%rdx, %r8, 4)			# Coloca a nota atual em: *(greater_grades + %r8) = %r9d

	incq %r8					# Próximo índice de greater_grades
	incl %eax					# Quando é adicionada uma nova nota que satisfaz a condição

locate_greater_loop_prepare_next_iteration:
	incq %rcx					# Próximo índice de s
	jmp locate_greater_loop

locate_greater_end:
	ret
