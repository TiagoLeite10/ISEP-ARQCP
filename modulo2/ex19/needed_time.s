.section .data
	.global current, desired		# variáveis do tipo char (1 byte) declaradas no módulo que utiliza este mesmo módulo
	.equ SECONDS, 60			# constante com o número de segundos por minuto
	.equ TIME_INCREASE, 3			# constante com o número minutos necessários para aumentar um grau Celsius
	.equ TIME_DECREASE, 4 			# constante com o número minutos necessários para diminuir um grau Celsius

.section .text
	.global needed_time			# int needed_time()

needed_time:
	movsbl current(%rip), %ecx   		# colocar current em ecx com extensão de sinal (8 bits para 32 bits)	
	movsbl desired(%rip), %edx		# colocar desired em edx com extensão de sinal (8 bits para 32 bits)	
	movl $0, %eax	     			# colocar o valor 0 em eax
	
	cmpl %ecx, %edx				# comparar o valor contido em %ecx com %edx
	jg increase				# caso o valor contido em edx seja maior que o contido em ecx salta para increase
	jl decrease       			# caso o valor contido em edx seja menor que o contido em ecx salta para decrease
	jmp end					# salta para end
	
	increase:
	subl %ecx, %edx				# (edx = edx - ecx) resultado fica em edx
	movl %edx, %eax				# colocar o valor de edx que contêm a temperatura desejada em eax
	imull $TIME_INCREASE, %eax		# (eax = eax * TIME_INCREASE) resultado fica em eax com o número de minutos para aumentar a temperatura
	jmp end							# salta para end
	
	decrease:
	subl %edx, %ecx				# (ecx = ecx - edx) resultado fica em ecx
	movl %ecx, %eax				# colocar o valor de ecx que contêm a temperatura atual em eax
	imull $TIME_DECREASE, %eax		# (eax = eax * TIME_DECREASE) resultado fica em eax com o número de minutos para diminuir a temperatura
	jmp end					# salta para end
		
	end:
	imull $SECONDS, %eax			# (eax = eax * SECONDS) transforma o número de minutos em segundos e resultado fica em eax
	ret
