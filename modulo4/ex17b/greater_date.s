.section .data
	.equ BITS_YEAR, 8		# Constante que representa o número de bits onde se está o ano
	.equ BITS_DAY, 24		# Constante que representa o número de bits onde se está o dia

.section .text
	.global greater_date 		# unsigned int greater_date(unsigned int date1, unsigned int date2);

greater_date:
	movl %edi, %ecx			# Coloca o valor do 1º argumento (date1) que está guardado em %edi no registo %ecx (4 bytes)
	movl %esi, %edx			# Coloca o valor do 2º argumento (date2) que está guardado em %esi no registo %edx (4 bytes)
	
	shrl $BITS_YEAR, %ecx		# Realiza a mudança para a direita de 8 bits no registo %ecx para ser encontrado o ano da data1
	shrl $BITS_YEAR, %edx		# Realiza a mudança para a direita de 8 bits no registo %edx para ser encontrado o ano da data2
	
	cmpw %dx, %cx			# Compara o valor contido no registo %cx com o contido em %dx para saber qual das duas datas tem um ano maior
	jg greater_date1		# Caso o ano da data 1 seja maior do que o da data 2 salta para a etiqueta greater_date1 para ser retornado a data1
	jl greater_date2		# Caso o ano da data 1 seja menor do que o da data 2 salta para a etiqueta greater_date2 para ser retornado a data2
	
	movl %edi, %ecx			# Volta a colocar o valor do 1º argumento (date1) que está guardado em %edi no registo %ecx (4 bytes)
	movl %esi, %edx			# Volta a colocar o valor do 2º argumento (date2) que está guardado em %esi no registo %edx (4 bytes)
	
	cmpb %dl, %cl			# Compara o valor contido em %cl com o contido em %dl para saber qual das duas datas tem um mês maior
	jg greater_date1		# Caso o mês da data 1 seja maior do que o da data 2 salta para a etiqueta greater_date1 para ser retornado a data1
	jl greater_date2		# Caso o mês da data 1 seja menor do que o da data 2 salta para a etiqueta greater_date2 para ser retornado a data2
	
	shrl $BITS_DAY, %ecx		# Realiza a mudança para a direita de 24 bits no registo %ecx para ser encontrado o dia da data1
	shrl $BITS_DAY, %edx		# Realiza a mudança para a direita de 24 bits no registo %edx para ser encontrado o dia da data2
	
	cmpb %dl, %cl			# Compara o valor contido em %cl com o contido em %dl para saber qual das duas datas tem um dia maior
	jg greater_date1		# Caso o dia da data 1 seja maior do que o da data 2 salta para a etiqueta greater_date1 para ser retornado a data1
	jl greater_date2		# Caso o dia da data 1 seja menor do que o da data 2 salta para a etiqueta greater_date2 para ser retornado a data2

greater_date1:
	movl %edi, %eax			# Coloca o valor do 1º argumento (date1) que está guardado em %edi no registo %eax que vai ser retornado
	jmp greater_date_end		# Salta para as instruções finais da função
	
greater_date2:
	movl %esi, %eax			# Coloca o valor do 2º argumento (date2) que está guardado em %esi no registo %eax que vai ser retornado

greater_date_end:				
	ret
