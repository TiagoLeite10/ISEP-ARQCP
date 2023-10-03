.section .text
	.global count_odd_matrix		# int count_odd_matrix(int **m, int y, int k);

count_odd_matrix:
    # *m em %rdi, y em %esi, k em %edx
    movl $0, %eax				# Coloca o contador de números ímpares a 0
    
loop_lines:
	decl %esi				# Decrementa o número de linhas
	movl %edx, %ecx				# Atualiza o número das colunas
	
	movq (%rdi, %rsi, 8), %r9		# O endereço da linha a ser analisada é colocada no registo %r9
	
loop_columns:
	decl %ecx				# Decrementa o número de colunas

	movl (%r9, %rcx, 4), %r8d 		# %r8d = m[i][j]
	
	andl $1, %r8d				# Aplica uma máscara de 1 para permitir saber se o número é ímpar ou par
	cmpl $1, %r8d				# Se com a aplicação da máscara anterior, o número for igual a 1 significa que é ímpar
	je increment_odd			# Se o número for ímpar salta para etiqueta indica para incrementar o contador
	
	jmp verify_end_column
	
increment_odd:
	incl %eax				# Incrementa o contador de números ímpares
	
verify_end_column:
	cmpl $0, %ecx				# Verifica se já foram percorridas todas as colunas
	je verify_end_line
	
	jmp loop_columns
	
verify_end_line:
	cmpl $0, %esi				# Verifica se já foram percorridas todas as linhas
	je count_odd_matrix_end	
	
	jmp loop_lines
	
count_odd_matrix_end:
	ret
