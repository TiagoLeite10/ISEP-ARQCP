.section .data
	.equ VALUE, 3						# Constante que representa o número a multiplicar

.section .text
	.global proc 						# void proc(int x1, int *p1, int x2, int *p2, short x3, short *p3, char x4, char *p4);

proc:
	# Prologue
	pushq %rbp						# Salva o valor original do registo %rbp
	movq %rsp, %rbp						# Copia o ponteiro da stack atual para o registo %rbp

	movl %edi, (%rsi)					# Coloca o valor do 1º argumento (x1) que está guardado em %edi no apontador do 2º argumento (*p1) que está guardado em %rsi
	addl %edx, (%rsi)					# Soma o valor do 1º argumento (x1) que está guardado no apontador %rsi ao valor do 3º argumento (x2) que está guardado em %edx
	
	movl %edx, (%rcx)					# Coloca o valor do 3º argumento (x2) que está guardado em %edx no apontador do 4º argumento (*p2) que está guardado em %rcx
	subl %edi, (%rcx)					# Subtrai o valor do 3º argumento (x2) que está guardado no apontador %rcx ao valor do 1º argumento (x1) que está guardado em %edi
	
	movswl %r8w, %r8d					# Coloca o valor do 5º argumento (x3) que está guardado em %r8w no registo %r8d com extensão de sinal (16 bits para 32 bits)
	movl %r8d,(%r9)						# Coloca o valor do registo %r8d no apontador do 6º argumento (*p3) que está guardado em %r9
	addl %edx, (%r9)					# Soma o valor do 5º argumento (x3) que está guardado no apontador %r9 ao valor do 3º argumento (x2) que está guardado em %edx
	
	movq 16(%rbp), %r10					# Coloca o valor do 7º argumento (x4) que está guardado na stack no registo %r10
	movq 24(%rbp), %r11					# Coloca o valor do 8º argumento (*p4) que está guardado na stack no registo %r11
	imulq $VALUE, %r11					# Multiplica o valor contido na constante VALUE pelo valor contido no registo %r11    
	movb %r11b, (%r10)					# Coloca o valor contido no registo %r11b no registo %r10

	# Epilogue
	movq %rbp, %rsp						# Recupera o valor original do registo %rsp
	popq %rbp						# Restaura o valor original do registo %rbp
	ret
