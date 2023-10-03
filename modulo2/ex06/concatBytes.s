.section .data
	.global byte1, byte2	# Variáveis do tipo char definidas no main.c

.section .text
	.global concatBytes 	# função short concatBytes()

concatBytes:
	movw byte1(%rip), %ax	# Move o valor presente na variável byte1 para o registo %ax
	movb byte2(%rip), %ah	# Move o valor presente na variável byte2 para o registo %ah
	ret
