.section .data
	# None

.section .text
	.global changes 	# void changes(int *ptr)

changes:
	movl (%rdi), %ecx	# %ecx -> *num
	movb $0xf0, %dl		# Máscara %dl -> 11110000
	
	andb %ch, %dl		# 2º byte de %ecx & %dl

	cmpb $0, %dl		# Se for 0, significa que os 4 bits mais significativos do 2º byte estão a 0, ou seja, não são maiores do que 15
	je changes_end

	movl $0x00ff0000, %edx	# Máscara %edx -> 00000000111111110000000000000000
	xorl %edx, (%rdi)	# *ptr = *ptr ^ %edx

changes_end:
	ret
	
