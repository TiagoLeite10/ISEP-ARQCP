.section .text
	.global inc_and_square 			# int inc_and_square(int *v1, int v2);

inc_and_square:
	incl (%rdi)				# Incrementa 1 ao valor apontado pelo apontador presente no registo %rdi
	
	movl %esi, %eax				# Coloca o valor do 2º argumento que está guardado em %esi no registo %eax (4 bytes)
	imul %esi				# Multiplica o valor contido em %esi pelo guardado em %eax e guarda o resultado em %eax

	ret
