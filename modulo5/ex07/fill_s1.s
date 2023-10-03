.section .data
    .equ DATA_SIZE, 16          	# Tamanho total da estrutura
    .equ C_OFFSET, 0            	# O c está no início da estrutura 
    .equ I_OFFSET, 4            	# O i começa no byte 4
    .equ D_OFFSET, 8            	# O d começa no byte 8
	.equ J_OFFSET, 12           	# O j começa no byte 12

.section .text
	.global fill_s1		# void fill_s1(s1 *s, int vi, char vc, int vj, char vd);

fill_s1:
    # *s em %rdi, vi em %esi, vc em %dl, vj em %ecx, vd em %r8b
    movb %dl, C_OFFSET(%rdi)   		# s->c = vc
    movl %esi, I_OFFSET(%rdi)           # s->i = vi
    movb %r8b, D_OFFSET(%rdi)           # s->d = vd
    movl %ecx, J_OFFSET(%rdi)           # s->j = vj
	
fill_s1_end:
	ret
    
