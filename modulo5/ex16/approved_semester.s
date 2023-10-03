.section .data
	.equ MINIMUM_MODULES_TO_APPROVE, 10			# Número mínimo de cadeiras aprovadas para o aluno conseguir passar
	.equ N_STUDENTS_OFFSET, 0				# n_students está no início da estrutura
	.equ INDIVIDUAL_GRADES_OFFSET, 8			# O apontador individual_grades começa no byte 8

.section .text
	.global approved_semester 				# int approved_semester(group *g);

approved_semester:
	# *g em %rdi
	movw N_STUDENTS_OFFSET(%rdi), %r8w 			# %r8w = g->n_students

	movq $0, %rcx						# Índice para o apontador das notas
	movl $0, %r9d						# Representa a soma de alunos aprovados
	movq INDIVIDUAL_GRADES_OFFSET(%rdi), %rdx		# %rdx = g->individual_grades

approved_semester_loop_students:
	cmpw %r8w, %cx						# Verifica se falta analisar as cadeiras aprovadas de algum aluno
	jge approved_semester_end
	
	pushq %rdi
	movw (%rdx, %rcx, 2), %di				# %di = g->individual_grades[%rcx]
	incw %cx						# Incrementa o índice para o apontador das notas para ser utilizado na próxima iteração

	pushq %rcx
	pushq %rdx
	pushq %r9
	pushq %r8
	call count_bits_one
	popq %r8
	popq %r9
	popq %rdx
	popq %rcx
	popq %rdi

	cmpl $MINIMUM_MODULES_TO_APPROVE, %eax			# Verifica se o número de bits a 1 é menor do que as cadeiras mínimas com aprovação
	jl approved_semester_loop_students

	incl %r9d						# Incrementa que mais um aluno está aprovado

	jmp approved_semester_loop_students

approved_semester_end:
	movl %r9d, %eax						# Coloca a soma de alunos aprovados no registo de retorno
	ret
