.section .data
	.equ DATA_SIZE, 32                  	# Tamanho total da estrutura
	.equ UNION_OFFSET, 24               	# O b começa no byte 24

.section .text
	.global return_unionB_b			# char return_unionB_b(structA **matrix, int i, int j);

return_unionB_b:
    # **matrix em %rdi, i em %esi, j em %edx
	
	movq (%rdi, %rsi, 8), %rdi		# O endereço da linha a ser analisada é colocada no registo %rdi
	imulq $DATA_SIZE, %rdx			# Multiplica 32 bytes (8 bytes do apontador da struct + 24 bytes de tamanho da struct) à coluna
	addq %rdx, %rdi				# %rdi = matrix[i][j]
	
	movb UNION_OFFSET(%rdi), %al		# matrix[i][j].ub.b
	
return_unionB_b_end:
	ret
