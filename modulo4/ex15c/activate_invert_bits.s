.section .text
	.global activate_invert_bits 		# int activate_invert_bits(int a, int left, int right);

activate_invert_bits:
	call activate_bits			# Chama a funcao activate_bits e guarda o valor retornado em %eax
	notl %eax				# Inverte todos os bits do valor contido no registo %eax
	
	ret
