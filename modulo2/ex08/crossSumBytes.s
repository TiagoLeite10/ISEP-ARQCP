.section .data
	s1:			# Variável s1
		.word 0		# definir a variável s1 com 2 bytes inicializada a 0

	s2:			# Variável s2
		.word 0		# definir a variável s2 com 2 bytes inicializada a 0
	
	.global s1		# colocar a variável s1 como global (para poder ser acedida por outros módulos que utilizem este)
	.global s2		# colocar a variável s2 como global (para poder ser acedida por outros módulos que utilizem este)

.section .text
	.global crossSumBytes	# short crossSumBytes()

crossSumBytes:		
	movw s1(%rip), %ax	# colocar o valor da variável s1 no registo %ax
	movw s2(%rip), %cx	# colocar o valor da variável s2 no registo %cx
	addb %cl, %ah		# (ah = ah + cl) resultado fica em ah (bit mais significativo de s1 + bit menos significativo de s2)
	addb %ch, %al		# (al = al + ch) resultado fica em al (bit menos significativo de s1 + bit mais significativo de s2)
	
	ret
