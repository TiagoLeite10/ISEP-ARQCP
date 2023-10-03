.section .data
	.global s1, s2				# variáveis do tipo short (2 bytes) declaradas no módulo que utiliza este mesmo módulo

.section .text
	.global crossSumBytes			# short crossSumBytes()

crossSumBytes:		
	movw s1(%rip), %ax			# colocar s1 em %ax
	movw s2(%rip), %cx			# colocar s2 em %cx
	addb %cl, %ah				# (ah = ah + cl) resultado fica em ah (bit mais significativo de s1 + bit menos significativo de s2)
	addb %ch, %al				# (al = al + ch) resultado fica em al (bit menos significativo de s1 + bit mais significativo de s2)
	
	ret
