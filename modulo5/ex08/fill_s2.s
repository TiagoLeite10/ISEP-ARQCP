.section .data
    .equ DATA_SIZE, 16                  # Tamanho total da estrutura
    .equ C_OFFSET, 0                    # c está no início da estrutura
    .equ W_OFFSET, 4                    # O w começa no byte 4
    .equ J_OFFSET, 12                   # O j começa no byte 12

    .equ ARRAYS_SIZE, 3                 # Representa o tamanho de valores presentes nos arrays passados por parâmetro

.section .text
    .global fill_s2                     # void fill_s2(s2 *s, short vw[3], int vj, char vc[3]);

fill_s2:
    # *s in %rdi, vw in %rsi, vj in %edx, vc in %rcx
    movl $0, %r9d                       # Representa o índice dos arrays

fill_s2_chars:				# Preenchimento dos bytes reservados para o array de chars
    cmpl $ARRAYS_SIZE, %r9d		# Verifica se já foi preenchido todos os espaços reservados para o array de chars
    je fill_s2_prepare_next_operation

    movb (%rcx, %r9, 1), %r8b   	# Colocar o valor do índice atual do array num registo
    movb %r8b, C_OFFSET(%rdi, %r9, 1) 	# s[%r9]->c = vc[%r9]

    incq %r9    			# indice++ (%r9++)

    jmp fill_s2_chars

fill_s2_prepare_next_operation:
    movl $0, %r9d                       # Volta a colocar o valor que representa índice 0
    
fill_s2_shorts:				# Preenchimento dos bytes reservados para o array de shorts
    cmpl $ARRAYS_SIZE, %r9d		# Verifica se já foi preenchido todos os espaços reservados para o array de shorts
    je fill_s2_end

    movw (%rsi, %r9, 2), %r8w   	# Colocar o valor do índice atual do array num registo
    movw %r8w, W_OFFSET(%rdi, %r9, 2) 	# s[%r9]->w = vw[%r9]

    incq %r9    			# indice++ (%r9++)

    jmp fill_s2_shorts

fill_s2_end:
    movl %edx, J_OFFSET(%rdi)   	# s->j = vj

    ret
    
