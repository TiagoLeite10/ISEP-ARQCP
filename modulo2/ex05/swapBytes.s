.section .data
	.global s				# variável do tipo short (2 bytes) declarada no módulo que utiliza este mesmo módulo

.section .text
	.global swapBytes			# short swapBytes()

swapBytes:		
	movw s(%rip), %cx			# colocar s em %cx
	movb %cl, %ah				# colocar os 8 bits menos significativos em %ah
	movb %ch, %al				# colocar os 8 bits mais significativos em %al
	
	addb %ch, %al 				# (al = al + ch) resultado fica em al para o novo byte menos significativo, ser o dobro do valor do byte mais significativo anterior
	
	ret
