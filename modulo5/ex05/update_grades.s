.section .data
	.equ GRADES_OFFSET, 4					# O primeiro elemento do array grades começa no byte 4
	.equ GRADES_SIZE, 5					# O tamanho do array das notas

.section .text
	.global update_grades  					# void update_grades(Student *s, int *new_grades);

update_grades:
	# *s in %rdi, *new_grades in %rsi
	movq $0, %rcx						# %rcx representa o índice dos arrays
	
loop_update_grades:
	cmpl $GRADES_SIZE, %ecx					# Verifica se já percorreu o array das notas
	je update_grades_end					# Se o índice dos arrays for igual ao tamanho do array, salta para as intruções finais

	movl (%rsi, %rcx, 4), %edx				# %edx = *(new_grades + %rcx)
	movl %edx, GRADES_OFFSET(%rdi, %rcx, 4) 		# *(s + GRADES_OFFSET + %rcx) = %edx

	incq %rcx						# Próximo índice
	
	jmp loop_update_grades

update_grades_end:
	ret
