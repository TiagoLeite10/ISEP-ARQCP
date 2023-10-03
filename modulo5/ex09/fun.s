.section .data
    .equ A_X_OFFSET, 4				# O x da estrutura A começa no byte 4
    .equ B_X_OFFSET, 4				# O x da estrutura B começa no byte 4
    .equ B_OFFSET, 8				# O apontador b começa no byte 8
	.equ Z_OFFSET, 20			# O z começa no byte 20

.section .text
	.global fun1				# short fun1(structB *s);
	.global fun2				# short fun2(structB *s);
	.global fun3				# short* fun3(structB *s);
	.global fun4				# short fun4(structB *s);

fun1:
	movw A_X_OFFSET(%rdi), %ax		# s->a.x
	jmp fun_end
	
fun2:
	movw Z_OFFSET(%rdi), %ax		# s->z
	jmp fun_end
	
fun3:
	leaq Z_OFFSET(%rdi), %rax		# s->z
	jmp fun_end
	
fun4:
	addq B_OFFSET(%rdi), %rcx		# s->b
	movw B_X_OFFSET(%rcx), %ax		# b->x

fun_end:
	ret
